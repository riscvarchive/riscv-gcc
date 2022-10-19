/* Builtins implementation for RISC-V 'V' Extension for GNU compiler.
   Copyright (C) 2022-2022 Free Software Foundation, Inc.
   Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GCC is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

#define IN_TARGET_CODE 1

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "tree.h"
#include "rtl.h"
#include "tm_p.h"
#include "memmodel.h"
#include "insn-codes.h"
#include "optabs.h"
#include "recog.h"
#include "cgraph.h"
#include "diagnostic.h"
#include "expr.h"
#include "basic-block.h"
#include "function.h"
#include "fold-const.h"
#include "varasm.h"
#include "gimple.h"
#include "gimple-iterator.h"
#include "gimplify.h"
#include "explow.h"
#include "emit-rtl.h"
#include "tree-vector-builder.h"
#include "stor-layout.h"
#include "regs.h"
#include "alias.h"
#include "gimple-fold.h"
#include "langhooks.h"
#include "stringpool.h"
#include "attribs.h"
#include "tree-pass.h"
#include "tree-vrp.h"
#include "tree-ssanames.h"
#include "tree-ssa-operands.h"
#include "tree-phinodes.h"
#include "targhooks.h"
#include "langhooks-def.h"
#include "riscv-vector-builtins.h"
#include "riscv-vector-builtins-functions.h"
#include "riscv-vector.h"

namespace riscv_vector {

/* The same vlmul doesn't mean use the same mask,
   this is used as save codes.
   for example: i32m8 use vbool4_t i8m8 use vbool1_t. */
static CONSTEXPR const vector_vlmul_info vector_vlmuls[] = {
  {VLMUL_FIELD_101, "mf8", "64"}, {VLMUL_FIELD_110, "mf4", "32"},
  {VLMUL_FIELD_111, "mf2", "16"}, {VLMUL_FIELD_000, "m1", "8"},
  {VLMUL_FIELD_001, "m2", "4"},	  {VLMUL_FIELD_010, "m4", "2"},
  {VLMUL_FIELD_011, "m8", "1"},
};

static CONSTEXPR const vector_type_info vector_type_infos[] = {
#define DEF_RVV_TYPE(ELEM_TYPE, NODE) {VECTOR_TYPE_##ELEM_TYPE, #ELEM_TYPE},
#include "riscv-vector-builtins.def"
#undef DEF_RVV_TYPE
};

static GTY (()) tree
  builtin_vector_types[NUM_VECTOR_TYPES + 1][MAX_VLMUL_FIELD];

/* Same, but with the riscv_vector.h "v..._t" name.  */
GTY (())
tree vector_types[MAX_TUPLE_NUM][NUM_VECTOR_TYPES + 1][MAX_VLMUL_FIELD];
/* Same, but with the riscv_vector.h "v..._t *" name.  */
GTY (()) tree vector_pointer_types[NUM_VECTOR_TYPES + 1][MAX_VLMUL_FIELD];
/* The scalar type associated with each vector type.  */
GTY (()) tree scalar_types[NUM_VECTOR_TYPES];
/* The scalar pointer type associated with each vector type.  */
GTY (()) tree scalar_pointer_types[NUM_VECTOR_TYPES];
/* The const scalar pointer type associated with each vector type.  */
GTY (()) tree const_scalar_pointer_types[NUM_VECTOR_TYPES];

/* All registered function decls, hashed on the function_instance
   that they implement.  This is used for looking up implementations of
   overloaded functions.  */
hash_table<registered_function_hasher> *function_table;

static riscv_vector::function_builder **all_vector_functions;

/* The list of all registered function decls, indexed by code.  */
vec<registered_function *, va_gc> *registered_functions;

static unsigned int NUM_INSN_FUNC;

static void
init_def_variables ();
/* Force TYPE to be a sizeless type.  */
static void
make_type_sizeless (tree type)
{
  TYPE_ATTRIBUTES (type) = tree_cons (get_identifier ("RVV sizeless type"),
				      NULL_TREE, TYPE_ATTRIBUTES (type));
}

/* Return true if TYPE is a sizeless type.  */
static bool
sizeless_type_p (const_tree type)
{
  if (type == error_mark_node)
    return NULL_TREE;
  return lookup_attribute ("RVV sizeless type", TYPE_ATTRIBUTES (type));
}

machine_mode
vector_builtin_mode (scalar_mode inner_mode, enum vlmul_field_enum vlmul)
{
  switch (inner_mode)
    {
    case E_BImode:
      return vlmul == VLMUL_FIELD_000	? VNx16BImode
	     : vlmul == VLMUL_FIELD_001 ? VNx32BImode
	     : vlmul == VLMUL_FIELD_010 ? VNx64BImode
	     : vlmul == VLMUL_FIELD_011 ? VNx128BImode
	     : vlmul == VLMUL_FIELD_111 ? VNx8BImode
	     : vlmul == VLMUL_FIELD_110 ? VNx4BImode
					: VNx2BImode;

    case E_QImode:
      return vlmul == VLMUL_FIELD_000	? VNx16QImode
	     : vlmul == VLMUL_FIELD_001 ? VNx32QImode
	     : vlmul == VLMUL_FIELD_010 ? VNx64QImode
	     : vlmul == VLMUL_FIELD_011 ? VNx128QImode
	     : vlmul == VLMUL_FIELD_111 ? VNx8QImode
	     : vlmul == VLMUL_FIELD_110 ? VNx4QImode
					: VNx2QImode;

    case E_HImode:
      if (vlmul == VLMUL_FIELD_101)
	gcc_unreachable ();

      return vlmul == VLMUL_FIELD_000	? VNx8HImode
	     : vlmul == VLMUL_FIELD_001 ? VNx16HImode
	     : vlmul == VLMUL_FIELD_010 ? VNx32HImode
	     : vlmul == VLMUL_FIELD_011 ? VNx64HImode
	     : vlmul == VLMUL_FIELD_111 ? VNx4HImode
					: VNx2HImode;

    case E_SImode:
      if (vlmul == VLMUL_FIELD_101 || vlmul == VLMUL_FIELD_110)
	gcc_unreachable ();

      return vlmul == VLMUL_FIELD_000	? VNx4SImode
	     : vlmul == VLMUL_FIELD_001 ? VNx8SImode
	     : vlmul == VLMUL_FIELD_010 ? VNx16SImode
	     : vlmul == VLMUL_FIELD_011 ? VNx32SImode
					: VNx2SImode;

    case E_DImode:
      if (vlmul == VLMUL_FIELD_101 || vlmul == VLMUL_FIELD_110
	  || vlmul == VLMUL_FIELD_111)
	gcc_unreachable ();

      return vlmul == VLMUL_FIELD_000	? VNx2DImode
	     : vlmul == VLMUL_FIELD_001 ? VNx4DImode
	     : vlmul == VLMUL_FIELD_010 ? VNx8DImode
					: VNx16DImode;

    case E_HFmode:
      if (vlmul == VLMUL_FIELD_101)
	gcc_unreachable ();

      return vlmul == VLMUL_FIELD_000	? VNx8HFmode
	     : vlmul == VLMUL_FIELD_001 ? VNx16HFmode
	     : vlmul == VLMUL_FIELD_010 ? VNx32HFmode
	     : vlmul == VLMUL_FIELD_011 ? VNx64HFmode
	     : vlmul == VLMUL_FIELD_111 ? VNx4HFmode
					: VNx2HFmode;

    case E_SFmode:
      if (vlmul == VLMUL_FIELD_101 || vlmul == VLMUL_FIELD_110)
	gcc_unreachable ();

      return vlmul == VLMUL_FIELD_000	? VNx4SFmode
	     : vlmul == VLMUL_FIELD_001 ? VNx8SFmode
	     : vlmul == VLMUL_FIELD_010 ? VNx16SFmode
	     : vlmul == VLMUL_FIELD_011 ? VNx32SFmode
					: VNx2SFmode;

    case E_DFmode:
      if (vlmul == VLMUL_FIELD_101 || vlmul == VLMUL_FIELD_110
	  || vlmul == VLMUL_FIELD_111)
	gcc_unreachable ();

      return vlmul == VLMUL_FIELD_000	? VNx2DFmode
	     : vlmul == VLMUL_FIELD_001 ? VNx4DFmode
	     : vlmul == VLMUL_FIELD_010 ? VNx8DFmode
					: VNx16DFmode;

    default:
      gcc_unreachable ();
    }

  gcc_unreachable ();
}

/* Implement TARGET_VERIFY_TYPE_CONTEXT for RVV types.  */
bool
verify_type_context (location_t loc, type_context_kind context, const_tree type,
		     bool silent_p)
{
  if (!sizeless_type_p (type))
    return true;

  switch (context)
    {
    case TCTX_SIZEOF:
    case TCTX_STATIC_STORAGE:
      if (!silent_p)
	error_at (loc, "RVV type %qT does not have a fixed size", type);

      return false;

    case TCTX_ALIGNOF:
      if (!silent_p)
	error_at (loc, "RVV type %qT does not have a defined alignment", type);

      return false;

    case TCTX_THREAD_STORAGE:
      if (!silent_p)
	error_at (loc,
		  "variables of type %qT cannot have thread-local"
		  " storage duration",
		  type);

      return false;

    case TCTX_POINTER_ARITH:
      if (!silent_p)
	error_at (loc, "arithmetic on pointer to RVV type %qT", type);

      return false;

    case TCTX_FIELD:
      if (silent_p)
	;
      else if (lang_GNU_CXX ())
	error_at (loc, "member variables cannot have RVV type %qT", type);
      else
	error_at (loc, "fields cannot have RVV type %qT", type);

      return false;

    case TCTX_ARRAY_ELEMENT:
      if (!silent_p)
	error_at (loc, "array elements cannot have RVV type %qT", type);

      return false;

    case TCTX_ALLOCATION:
      if (!silent_p)
	error_at (loc, "cannot allocate objects with RVV type %qT", type);

      return false;

    case TCTX_DEALLOCATION:
      if (!silent_p)
	error_at (loc, "cannot delete objects with RVV type %qT", type);

      return false;

    case TCTX_EXCEPTIONS:
      if (!silent_p)
	error_at (loc, "cannot throw or catch RVV type %qT", type);

      return false;

    case TCTX_CAPTURE_BY_COPY:
      if (!silent_p)
	error_at (loc, "capture by copy of RVV type %qT", type);

      return false;
    }

  gcc_unreachable ();
}

static bool
vector_legal_vlmul (scalar_mode inner_mode, enum vlmul_field_enum vlmul)
{
  if (vlmul == VLMUL_FIELD_100)
    return false;

  switch (inner_mode)
    {
    case E_HImode:
    case E_HFmode:
      return vlmul != VLMUL_FIELD_101;

    case E_SImode:
    case E_SFmode:
      return vlmul != VLMUL_FIELD_101 && vlmul != VLMUL_FIELD_110;

    case E_DImode:
    case E_DFmode:
      return vlmul <= VLMUL_FIELD_011;

    default:
      break;
    }

  return true;
}

/* Record that TYPE is an ABI-defined VECTOR type that contains SEW and LMUL
   information for RVV vector.  MANGLED_NAME, if nonnull, is the ABI-defined
   mangling of the type.
 */
static void
add_vector_type_attribute (tree type, unsigned int nf, unsigned int sew,
			   unsigned int vlmul, unsigned int is_bool,
			   const char *mangled_name)
{
  tree mangled_name_tree
    = (mangled_name ? get_identifier (mangled_name) : NULL_TREE);

  tree value = tree_cons (NULL_TREE, mangled_name_tree, NULL_TREE);
  value = tree_cons (NULL_TREE, size_int (nf), value);
  value = tree_cons (NULL_TREE, size_int (sew), value);
  value = tree_cons (NULL_TREE, size_int (vlmul), value);
  value = tree_cons (NULL_TREE, size_int (is_bool), value);
  TYPE_ATTRIBUTES (type)
    = tree_cons (get_identifier ("RVV type"), value, TYPE_ATTRIBUTES (type));
}

/* If TYPE is an ABI-defined RVV type, return its attribute descriptor,
   otherwise return null.  */
static tree
lookup_rvv_type_attribute (const_tree type)
{
  if (type == error_mark_node)
    return NULL_TREE;
  return lookup_attribute ("RVV type", TYPE_ATTRIBUTES (type));
}

/* If TYPE is a built-in type defined by the RVV ABI, return the mangled name,
   otherwise return NULL.  */
const char *
mangle_builtin_type (const_tree type)
{
  /* ??? The C++ frontend normally strips qualifiers and attributes before
     calling this hook, adding separate mangling for attributes that affect
     type identity.  Fortunately the type copy will have the same TYPE_NAME
     as the original, so we can get the attributes from there.  */
  if (TYPE_NAME (type) && TREE_CODE (TYPE_NAME (type)) == TYPE_DECL)
    type = TREE_TYPE (TYPE_NAME (type));
  if (tree attr = lookup_rvv_type_attribute (type))
    if (tree id = TREE_VALUE (chain_index (4, TREE_VALUE (attr))))
      return IDENTIFIER_POINTER (id);
  return NULL;
}

/* These codes copied from ARM. */
static void
register_general_builtin_types (void)
{
  scalar_types[VECTOR_TYPE_bool] = boolean_type_node;
  scalar_types[VECTOR_TYPE_int8] = intQI_type_node;
  scalar_types[VECTOR_TYPE_uint8] = unsigned_intQI_type_node;
  scalar_types[VECTOR_TYPE_int16] = intHI_type_node;
  scalar_types[VECTOR_TYPE_uint16] = unsigned_intHI_type_node;

  if (TARGET_64BIT)
    {
      scalar_types[VECTOR_TYPE_int32] = intSI_type_node;
      scalar_types[VECTOR_TYPE_uint32] = unsigned_intSI_type_node;
    }
  else
    {
      /* int32_t/uint32_t defined as `long`/`unsigned long` in RV32,
	  but intSI_type_node/unsigned_intSI_type_node is
	  `int` and `unsigned int`, so use long_integer_type_node and
	  long_unsigned_type_node here for type consistent.  */
      scalar_types[VECTOR_TYPE_int32] = long_integer_type_node;
      scalar_types[VECTOR_TYPE_uint32] = long_unsigned_type_node;
    }

  scalar_types[VECTOR_TYPE_int64] = intDI_type_node;
  scalar_types[VECTOR_TYPE_uint64] = unsigned_intDI_type_node;
  scalar_types[VECTOR_TYPE_float32] = float_type_node;
  scalar_types[VECTOR_TYPE_float64] = double_type_node;

  /* Pointer type */
#define DEFINE_SCALAR_PTR_TYPE_NODE(NBITS)                                     \
  scalar_pointer_types[VECTOR_TYPE_int##NBITS]                                 \
    = build_pointer_type (scalar_types[VECTOR_TYPE_int##NBITS]);               \
  scalar_pointer_types[VECTOR_TYPE_uint##NBITS]                                \
    = build_pointer_type (scalar_types[VECTOR_TYPE_uint##NBITS]);              \
  const_scalar_pointer_types[VECTOR_TYPE_int##NBITS] = build_pointer_type (    \
    build_type_variant (scalar_types[VECTOR_TYPE_int##NBITS], 1, 0));          \
  const_scalar_pointer_types[VECTOR_TYPE_uint##NBITS] = build_pointer_type (   \
    build_type_variant (scalar_types[VECTOR_TYPE_uint##NBITS], 1, 0));

  DEFINE_SCALAR_PTR_TYPE_NODE (8)
  DEFINE_SCALAR_PTR_TYPE_NODE (16)
  DEFINE_SCALAR_PTR_TYPE_NODE (32)
  DEFINE_SCALAR_PTR_TYPE_NODE (64)

  scalar_types[VECTOR_TYPE_float16] = make_node (REAL_TYPE);
  TYPE_PRECISION (scalar_types[VECTOR_TYPE_float16]) = 16;
  layout_type (scalar_types[VECTOR_TYPE_float16]);
  (*lang_hooks.types.register_builtin_type) (scalar_types[VECTOR_TYPE_float16],
					     "__fp16");

  scalar_pointer_types[VECTOR_TYPE_float16]
    = build_pointer_type (scalar_types[VECTOR_TYPE_float16]);
  scalar_pointer_types[VECTOR_TYPE_float32] = float_ptr_type_node;
  scalar_pointer_types[VECTOR_TYPE_float64] = double_ptr_type_node;
  const_scalar_pointer_types[VECTOR_TYPE_float16] = build_pointer_type (
    build_type_variant (scalar_types[VECTOR_TYPE_float16], 1, 0));
  const_scalar_pointer_types[VECTOR_TYPE_float32] = build_pointer_type (
    build_type_variant (scalar_types[VECTOR_TYPE_float32], 1, 0));
  const_scalar_pointer_types[VECTOR_TYPE_float64] = build_pointer_type (
    build_type_variant (scalar_types[VECTOR_TYPE_float64], 1, 0));
}

/* Register the built-in VECTOR ABI types, such as __rvv_int8mf8_t.  */
static void
register_builtin_types ()
{
  for (unsigned int i = 0; i < NUM_VECTOR_TYPES; ++i)
    {
      tree eltype = scalar_types[i];
      scalar_mode elmode
	= (eltype == boolean_type_node) ? BImode : SCALAR_TYPE_MODE (eltype);

      for (unsigned int j = 0; j < ARRAY_SIZE (vector_vlmuls); ++j)
	{
	  if (!vector_legal_vlmul (elmode, vector_vlmuls[j].vlmul))
	    continue;

	  char abi_name[NAME_MAXLEN] = {0};
	  char mangled_name[NAME_MAXLEN] = {0};
	  bool is_bool;
	  tree vectype;
	  unsigned int sew = GET_MODE_BITSIZE (elmode);
	  machine_mode mode
	    = vector_builtin_mode (elmode, vector_vlmuls[j].vlmul);

	  /* vector && mask type in RVV.  */
	  vectype = build_vector_type_for_mode (eltype, mode);

	  /* NOTE: Reference to 'omp_clause_aligned_alignment' function in
	     omp-low.c. We don't know why we need this protection, it seems
	     to make the buildup of GCC more reliable. */
	  if (TYPE_MODE (vectype) != mode)
	    continue;

	  if (eltype == boolean_type_node)
	    {
	      gcc_assert (
		VECTOR_MODE_P (TYPE_MODE (vectype))
		&& TYPE_MODE (vectype) == mode
		&& TYPE_MODE (vectype) == TYPE_MODE_RAW (vectype)
		&& TYPE_ALIGN (vectype) == 8
		&& known_eq (tree_to_poly_uint64 (TYPE_SIZE (vectype)),
			     BITS_PER_RISCV_VECTOR));
	      is_bool = true;
	    }
	  else
	    {
	      gcc_assert (
		VECTOR_MODE_P (TYPE_MODE (vectype))
		&& TYPE_MODE (vectype) == mode
		&& TYPE_MODE_RAW (vectype) == mode
		&& TYPE_ALIGN (vectype) <= 128
		&& known_eq (tree_to_poly_uint64 (TYPE_SIZE (vectype)),
			     GET_MODE_BITSIZE (mode)));
	      is_bool = false;
	    }
	  /* These codes copied from ARM. */
	  /* abi_name and api_name follows vector type implementation in LLVM.
	     Take sew = 8, vlmul = 1/8 for example,
	     abi_name = __rvv_int8mf8_t,
	     api_name = vint8mf8_t.
	     The mangle name follows the rule of aarch64
	     that is "u" + length of (abi_name) + abi_name.
	     So that mangle_name = u15__rvv_int8mf8_t.  */
	  snprintf (abi_name, NAME_MAXLEN, "__rvv_%s%s_t",
		    vector_type_infos[i].elem_name,
		    is_bool ? vector_vlmuls[j].boolnum
			    : vector_vlmuls[j].suffix);
	  snprintf (mangled_name, NAME_MAXLEN, "u%d__rvv_%s%s_t",
		    (int) strlen (abi_name), vector_type_infos[i].elem_name,
		    is_bool ? vector_vlmuls[j].boolnum
			    : vector_vlmuls[j].suffix);
	  vectype = build_distinct_type_copy (vectype);
	  gcc_assert (vectype == TYPE_MAIN_VARIANT (vectype));
	  SET_TYPE_STRUCTURAL_EQUALITY (vectype);
	  TYPE_ARTIFICIAL (vectype) = 1;
	  TYPE_INDIVISIBLE_P (vectype) = 1;
	  add_vector_type_attribute (vectype, 1, sew, vector_vlmuls[j].vlmul,
				     is_bool, mangled_name);
	  make_type_sizeless (vectype);
	  builtin_vector_types[i][j] = vectype;
	  lang_hooks.types.register_builtin_type (vectype, abi_name);
	}
    }
}

/* Initialize all compiler built-ins related to RVV that should be
   defined at start-up.  */
void
init_builtins ()
{
  if (!TARGET_VECTOR)
    return;

  register_general_builtin_types ();
  register_builtin_types ();

  if (in_lto_p)
    handle_pragma_vector ();
}

/* These codes copied from ARM. */
/* Register vector type TYPE under its risv_vector.h name.  */
static void
register_vector_type (unsigned int type, unsigned int lmul)
{
  tree vectype = builtin_vector_types[type][lmul];
  char rvv_name[NAME_MAXLEN] = {0};
  snprintf (rvv_name, NAME_MAXLEN, "v%s%s_t", vector_type_infos[type].elem_name,
	    strcmp (vector_type_infos[type].elem_name, "bool") == 0
	      ? vector_vlmuls[lmul].boolnum
	      : vector_vlmuls[lmul].suffix);
  tree id = get_identifier (rvv_name);
  tree decl = build_decl (input_location, TYPE_DECL, id, vectype);
  decl = lang_hooks.decls.pushdecl (decl);

  /* Record the new RVV type if pushdecl succeeded without error.  Use
     the ABI type otherwise, so that the type we record at least has the
     right form, even if it doesn't have the right name.  This should give
     better error recovery behavior than installing error_mark_node or
     installing an incorrect type.  */
  if (decl && TREE_CODE (decl) == TYPE_DECL
      && TREE_TYPE (decl) != error_mark_node
      && TYPE_MAIN_VARIANT (TREE_TYPE (decl)) == vectype)
    vectype = TREE_TYPE (decl);

  vector_types[0][type][lmul] = vectype;
  vector_pointer_types[type][lmul] = build_pointer_type (vectype);
}

/* These codes copied from ARM. */
/* Register the tuple type that contains NUM_VECTORS vectors of lmul LMUL.  */
static void
register_tuple_type (unsigned int num_vectors, unsigned int type,
		     unsigned int lmul)
{
  tree tuple_type = lang_hooks.types.make_type (RECORD_TYPE);

  /* Work out the structure name.  */
  char buffer[sizeof ("vfloat16mf8x8_t")];
  snprintf (buffer, sizeof (buffer), "v%s%sx%d_t",
	    vector_type_infos[type].elem_name, vector_vlmuls[lmul].suffix,
	    num_vectors);
  char mangled_name[NAME_MAXLEN] = {0};
  snprintf (mangled_name, NAME_MAXLEN, "u%d__rvv_%s%s_t", (int) strlen (buffer),
	    vector_type_infos[lmul].elem_name, vector_vlmuls[lmul].suffix);
  tree vector_type = vector_types[0][type][lmul];
  tree array_type = build_array_type_nelts (vector_type, num_vectors);
  machine_mode tuple_mode;
  gcc_assert (riscv_vector_tuple_mode (TYPE_MODE (vector_type), num_vectors)
		.exists (&tuple_mode));
  gcc_assert (VECTOR_MODE_P (tuple_mode));
  SET_TYPE_MODE (array_type, tuple_mode);
  gcc_assert (VECTOR_MODE_P (TYPE_MODE (array_type))
	      && TYPE_MODE_RAW (array_type) == TYPE_MODE (array_type)
	      && TYPE_ALIGN (array_type) <= 128);
  unsigned int sew
    = GET_MODE_BITSIZE (GET_MODE_INNER (TYPE_MODE (vector_type)));

  tree field = build_decl (input_location, FIELD_DECL, get_identifier ("__val"),
			   array_type);
  DECL_FIELD_CONTEXT (field) = tuple_type;
  TYPE_FIELDS (tuple_type) = field;
  add_vector_type_attribute (tuple_type, num_vectors, sew, lmul, false,
			     mangled_name);
  make_type_sizeless (tuple_type);
  layout_type (tuple_type);
  gcc_assert (VECTOR_MODE_P (TYPE_MODE (tuple_type))
	      && TYPE_MODE_RAW (tuple_type) == TYPE_MODE (tuple_type)
	      && TYPE_ALIGN (tuple_type) <= 128);

  tree decl = build_decl (input_location, TYPE_DECL, get_identifier (buffer),
			  tuple_type);
  TYPE_NAME (tuple_type) = decl;
  TYPE_STUB_DECL (tuple_type) = decl;
  lang_hooks.decls.pushdecl (decl);
  /* ??? Undo the effect of set_underlying_type for C.  The C frontend
     doesn't recognize DECL as a built-in because (as intended) the decl has
     a real location instead of BUILTINS_LOCATION.  The frontend therefore
     treats the decl like a normal C "typedef struct foo foo;", expecting
     the type for tag "struct foo" to have a dummy unnamed TYPE_DECL instead
     of the named one we attached above.  It then sets DECL_ORIGINAL_TYPE
     on the supposedly unnamed decl, creating a circularity that upsets
     dwarf2out.

     We don't want to follow the normal C model and create "struct foo"
     tags for tuple types since (a) the types are supposed to be opaque
     and (b) they couldn't be defined as a real struct anyway.  Treating
     the TYPE_DECLs as "typedef struct foo foo;" without creating
     "struct foo" would lead to confusing error messages.  */
  DECL_ORIGINAL_TYPE (decl) = NULL_TREE;
  vector_types[num_vectors - 1][type][lmul] = tuple_type;
}

/* Implement #pragma riscv intrinsic vector.  */
void
handle_pragma_vector ()
{
  if (function_table)
    {
      error ("duplicate definition of %qs", "vector");
      return;
    }

  /* Define the vector and tuple types.  */
  for (unsigned int i = 0; i < NUM_VECTOR_TYPES; ++i)
    {
      tree eltype = scalar_types[i];
      scalar_mode elmode
	= (eltype == boolean_type_node) ? BImode : SCALAR_TYPE_MODE (eltype);

      for (unsigned int j = 0; j < ARRAY_SIZE (vector_vlmuls); ++j)
	{
	  if (!vector_legal_vlmul (elmode, vector_vlmuls[j].vlmul))
	    continue;

	  register_vector_type (i, j);

	  if (i != VECTOR_TYPE_bool)
	    {
	      for (unsigned int count = 2; count <= MAX_TUPLE_NUM; ++count)
		{
		  enum vlmul_field_enum vlmul = vector_vlmuls[j].vlmul;
		  if (vlmul == VLMUL_FIELD_101 || vlmul == VLMUL_FIELD_110
		      || vlmul == VLMUL_FIELD_111 || vlmul == VLMUL_FIELD_000
		      || (vlmul == VLMUL_FIELD_001 && count <= 4)
		      || (vlmul == VLMUL_FIELD_010 && count <= 2))
		    register_tuple_type (count, i, j);
		  else
		    continue;
		}
	    }
	}
    }

  init_def_variables ();

  /* Define the functions.  */
  function_table = new hash_table<registered_function_hasher> (1023);

  for (unsigned int i = 0; i < NUM_INSN_FUNC; ++i)
    all_vector_functions[i]->register_function ();
}

/* Return the function decl with RVV function subcode CODE, or error_mark_node
   if no such function exists.  */
tree
builtin_decl (unsigned int code, bool)
{
  if (code >= vec_safe_length (registered_functions))
    return error_mark_node;

  return (*registered_functions)[code]->decl;
}

/* Perform any semantic checks needed for a call to the RVV function
   with subcode CODE, such as testing for integer constant expressions.
   The call occurs at location LOCATION and has NARGS arguments,
   given by ARGS.  FNDECL is the original function decl, before
   overload resolution.

   Return true if the call is valid, otherwise report a suitable error.  */
bool
check_builtin_call (location_t location, vec<location_t>, unsigned int code,
		    tree fndecl, unsigned int nargs, tree *args)
{
  const registered_function &rfn = *(*registered_functions)[code];
  function_builder *builder = rfn.instance.builder ();

  if (!builder->check_required_extensions (
	location, rfn.decl, rfn.instance.get_arg_pattern ().arg_extensions))
    return false;

  return rfn.instance.check (location, fndecl, TREE_TYPE (rfn.decl), nargs,
			     args);
}

/* Return true if TYPE is a built-in RVV type defined by the ABI or RVV.  */
bool
builtin_type_p (const_tree type)
{
  return lookup_rvv_type_attribute (type);
}

/* Attempt to fold STMT, given that it's a call to the RVV function
   with subcode CODE.  Return the new statement on success and null
   on failure.  Insert any other new statements at GSI.  */
gimple *
gimple_fold_builtin (unsigned int code, gimple_stmt_iterator *gsi, gcall *stmt)
{
  registered_function &rfn = *(*registered_functions)[code];
  function_builder *builder = rfn.instance.builder ();
  return builder->fold (rfn.instance, gsi, stmt);
}

/* Expand a call to the RVV function with subcode CODE.  EXP is the call
   expression and TARGET is the preferred location for the result.
   Return the value of the lhs.  */
rtx
expand_builtin (unsigned int code, tree exp, rtx target)
{
  registered_function &rfn = *(*registered_functions)[code];
  function_builder *builder = rfn.instance.builder ();

  if (!builder->check_required_extensions (
	EXPR_LOCATION (exp), rfn.decl,
	rfn.instance.get_arg_pattern ().arg_extensions))
    return target;

  return builder->expand (rfn.instance, exp, target);
}

riscv_vector::vector_arg_all_modes &
get_vector_arg_all_patterns (unsigned int len, ...)
{
  riscv_vector::vector_arg_all_modes &patterns
    = *ggc_alloc<riscv_vector::vector_arg_all_modes> ();
  patterns.arg_len = len;
  patterns.arg_list = (riscv_vector::vector_mode_attr_list **) xmalloc (
    len * sizeof (riscv_vector::vector_mode_attr_list *));
  patterns.target_op_list = (int *) xmalloc (len * sizeof (int));
  patterns.dt_list
    = (enum data_type_index *) xmalloc (len * sizeof (enum data_type_index));

  unsigned int arg_idx = 0;
  va_list arg_ptr;
  va_start (arg_ptr, len);
  while (arg_idx < len)
    {
      riscv_vector::vector_arg_attr_info attr = va_arg (arg_ptr, riscv_vector::vector_arg_attr_info);
      patterns.dt_list[arg_idx] = attr.dt;
      patterns.arg_list[arg_idx] = attr.mode_attr_list;
      patterns.target_op_list[arg_idx] = attr.target_op;
      arg_idx++;
    }
  va_end (arg_ptr);

  return patterns;
}

static vector_mode_attr_list
  vector_mode_attr_list_list[vector_arg_mode_category_num];

static void
init_def_variables ()
{
  /* define local help variables */
  uint64_t pred_all = PRED_void | PRED_ta | PRED_tu | PRED_m | PRED_tama
		      | PRED_tamu | PRED_tuma | PRED_tumu;
  uint64_t pred_tail = PRED_void | PRED_ta | PRED_tu;
  uint64_t pred_mask = PRED_void | PRED_m | PRED_ma | PRED_mu;
  uint64_t pred_mask2 = PRED_void | PRED_m;
  uint64_t pred_reduce
    = PRED_void | PRED_ta | PRED_tu | PRED_m | PRED_tam | PRED_tum;

  uint64_t pat_mask_tail = PAT_mask | PAT_tail;
  uint64_t pat_mask_tail_dest = PAT_mask | PAT_tail | PAT_dest;
  uint64_t pat_tail_void_dest = PAT_tail | PAT_void_dest;
  uint64_t pat_void_dest_ignore_mp
    = PAT_mask | PAT_tail | PAT_void_dest | PAT_ignore_mask_policy;
  uint64_t pat_mask_ignore_tp = PAT_mask | PAT_ignore_tail_policy;
  uint64_t pat_mask_ignore_policy = PAT_mask | PAT_ignore_policy;

/* define vector arg mode category */
#define VVAR(NAME) vector_mode_attr_list_list[vector_mode_attr_##NAME]
#define VITER(NAME, SIGN)                                                      \
  riscv_vector::vector_arg_attr_info                                           \
  {                                                                            \
    -1, DT_##SIGN, &VVAR (NAME)                                                \
  }
#define VATTR(OP, NAME, SIGN)                                                  \
  riscv_vector::vector_arg_attr_info                                           \
  {                                                                            \
    OP, DT_##SIGN, &VVAR (NAME)                                                \
  }
#define DEF_RISCV_ARG_MODE_ATTR_VARIABLE(VARIABLE_NAME, ELEM_CNT)              \
  VVAR (VARIABLE_NAME)                                                         \
    = {ELEM_CNT, (riscv_vector::vector_mode_attr *) xmalloc (                  \
		   ELEM_CNT * sizeof (vector_mode_attr))};
#include "riscv-vector-builtins-iterators.def"
#undef DEF_RISCV_ARG_MODE_ATTR_VARIABLE

/* define every vector arg mode in category  */
#define DEF_RISCV_ARG_MODE_ATTR(VARIABLE_NAME, INDEX, MODE, ATTR_MODE,         \
				CONDITION)                                     \
  VVAR (VARIABLE_NAME).attr_list[INDEX]                                        \
    = {MODE##mode, ATTR_MODE##mode, RISCV_##CONDITION};
#include "riscv-vector-builtins-iterators.def"
#undef DEF_RISCV_ARG_MODE_ATTR

  /* count the number of intrinsic functions */
  NUM_INSN_FUNC = 0;
#define DEF_RVV_FUNCTION(BASE_NAME, CLASS_NAME, ARG_PATTERN, INTRNSIC_PATTER,  \
			 PREDS, OP_TYPES)                                      \
  NUM_INSN_FUNC++;
#include "riscv-vector-builtins-functions.def"
#undef DEF_RVV_FUNCTION

  all_vector_functions = (riscv_vector::function_builder **) xmalloc (
    sizeof (riscv_vector::function_builder *) * NUM_INSN_FUNC);

  unsigned int func_idx = 0;
#define VITER(NAME, SIGN)                                                      \
  riscv_vector::vector_arg_attr_info                                           \
  {                                                                            \
    -1, DT_##SIGN, &VVAR (NAME)                                                \
  }
#define VATTR(OP, NAME, SIGN)                                                  \
  riscv_vector::vector_arg_attr_info                                           \
  {                                                                            \
    OP, DT_##SIGN, &VVAR (NAME)                                                \
  }
#define DEF_RVV_FUNCTION(BASE_NAME, CLASS_NAME, ARG_PATTERN, INTRNSIC_PATTER,  \
			 PREDS, OP_TYPES)                                      \
  all_vector_functions[func_idx++]                                             \
    = new riscv_vector::CLASS_NAME (#BASE_NAME,                                \
				    get_vector_arg_all_patterns ARG_PATTERN,   \
				    INTRNSIC_PATTER, PREDS, OP_TYPES,          \
				    (REQUIRED_EXTENSIONS));
#include "riscv-vector-builtins-functions.def"
#undef DEF_RVV_FUNCTION
}

} // end namespace riscv_vector

using namespace riscv_vector;

#include "gt-riscv-vector-builtins.h"
