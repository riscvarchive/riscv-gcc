/* Builtins of vector function for RISC-V built-in functions. -*- C -*-
   Copyright (C) 2021-2021 Free Software Foundation, Inc.
   Contributed by Juzhe Zhong (juzhe.zhong@rivai.ai), RiVAI Technologies Ltd.

This file is part of GCC.

GCC is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3, or (at your option)
any later version.

GCC is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with GCC; see the file COPYING3. If not see
<http://www.gnu.org/licenses/>. */

#define IN_TARGET_CODE 1

#include "riscv-vector-builtins-functions.h"
#include <algorithm>
namespace riscv_vector
{

const unsigned int NAME_MAXLEN = 64;
const unsigned int MAX_TUPLE_SIZE = 8;
extern hash_table<registered_function_hasher> *function_table;
extern GTY (()) tree
    riscv_vector_types[MAX_TUPLE_SIZE][NUM_VECTOR_TYPES + 1][NUM_LMUL + 1];
extern GTY (()) vec<registered_function *, va_gc> *registered_functions;

/* General type nodes: */
#define DEFINE_SCALAR_TYPE_NODE(BITS)                                          \
  extern tree int##BITS##_type_node;                                           \
  extern tree unsigned_int##BITS##_type_node;                                  \
  extern tree int##BITS##_ptr_type_node;                                       \
  extern tree unsigned_int##BITS##_ptr_type_node;                              \
  extern tree const_int##BITS##_ptr_type_node;                                 \
  extern tree const_unsigned_int##BITS##_ptr_type_node;

DEFINE_SCALAR_TYPE_NODE (8)
DEFINE_SCALAR_TYPE_NODE (16)
DEFINE_SCALAR_TYPE_NODE (32)
DEFINE_SCALAR_TYPE_NODE (64)

/* Type node for fp16.  */
extern tree fp16_type_node;
extern tree fp16_ptr_type_node;
extern tree const_fp16_ptr_type_node;
extern tree const_float_ptr_type_node;
extern tree const_double_ptr_type_node;

/* Flags that describe what a function might do, in addition to reading
   its arguments and returning a result.  */
static const unsigned int CP_READ_FPCR = 1U << 0;
static const unsigned int CP_RAISE_FP_EXCEPTIONS = 1U << 1;
static const unsigned int CP_RAISE_LD_EXCEPTIONS = 1U << 2;
static const unsigned int CP_READ_MEMORY = 1U << 3;
static const unsigned int CP_WRITE_MEMORY = 1U << 4;
static const unsigned int CP_READ_CSR = 1U << 5;
static const unsigned int CP_WRITE_CSR = 1U << 6;

/* True if we've already complained about attempts to use functions
   when the required extension is disabled.  */
static bool reported_missing_extension_p;

static const char *
get_pred_func_suffix (predication_index pred)
{
  switch (pred)
    {
    case PRED_void:
    case PRED_none:
      return "";

    case PRED_m:
      return "m";

    case PRED_m_ta:
      return "m_ta";

    case PRED_m_tu:
      return "m_tu";

    case PRED_tu:
      return "tu";

    case PRED_ta:
      return "ta";

    case PRED_ma:
      return "ma";

    case PRED_mu:
      return "mu";

    case PRED_tama:
      return "tama";

    case PRED_tamu:
      return "tamu";

    case PRED_tuma:
      return "tuma";

    case PRED_tumu:
      return "tumu";

    default:
      gcc_unreachable ();
    }
}

static const char *
get_operation_suffix (operation_index op)
{
  switch (op)
    {
    case OP_vv:
      return "vv";

    case OP_vx:
      return "vx";

    case OP_v:
      return "v";

    case OP_wv:
      return "wv";

    case OP_wx:
      return "wx";

    case OP_x_x_v:
      return "x_x_v";

    case OP_vf2:
      return "vf2";

    case OP_vf4:
      return "vf4";

    case OP_vf8:
      return "vf8";

    case OP_vvm:
      return "vvm";

    case OP_vxm:
      return "vxm";

    case OP_x_x_w:
      return "x_x_w";

    case OP_v_v:
      return "v_v";

    case OP_v_x:
      return "v_x";

    case OP_v_f:
      return "v_f";

    case OP_vs:
      return "vs";

    case OP_vf:
      return "vf";

    case OP_wf:
      return "wf";

    case OP_vfm:
      return "vfm";

    case OP_vm:
      return "vm";

    case OP_mm:
      return "mm";

    case OP_m:
      return "m";

    default:
      break;
    }

  return "";
}

/* Return true if the function has no return value.  */
inline bool
function_returns_void_p (tree fndecl)
{
  return TREE_TYPE (TREE_TYPE (fndecl)) == void_type_node;
}

/* Take argument ARGNO from EXP's argument list and convert it into
   an expand operand.  Store the operand in *OP.  */

inline void
add_input_operand (struct expand_operand *op, tree exp, unsigned argno)
{
  tree arg = CALL_EXPR_ARG (exp, argno);
  create_input_operand (op, expand_normal (arg), TYPE_MODE (TREE_TYPE (arg)));
}

/* Expand instruction ICODE as part of a built-in function sequence.
   Use the first NOPS elements of OPS as the instruction's operands.
   HAS_TARGET_P is true if operand 0 is a target; it is false if the
   instruction has no target.

   Return the target rtx if HAS_TARGET_P, otherwise return const0_rtx.  */

inline rtx
generate_builtin_insn (enum insn_code icode, unsigned int n_ops,
                       struct expand_operand *ops, bool has_target_p)
{
  if (!maybe_expand_insn (icode, n_ops, ops))
    {
      error ("invalid argument to built-in function");
      return has_target_p ? gen_reg_rtx (ops[0].mode) : const0_rtx;
    }

  return has_target_p ? ops[0].value : const0_rtx;
}

inline tree
lmul2mask_t (machine_mode mode, lmul_value_index lmul)
{
  unsigned int ratio;
  unsigned int index;
  unsigned int sew = GET_MODE_BITSIZE (mode).to_constant ();

  switch (lmul)
    {
    case LMUL_1F8:
      ratio = 8 * sew;
      break;

    case LMUL_1F4:
      ratio = 4 * sew;
      break;

    case LMUL_1F2:
      ratio = 2 * sew;
      break;

    case LMUL_1:
      ratio = sew / 1;
      break;

    case LMUL_2:
      ratio = sew / 2;
      break;

    case LMUL_4:
      ratio = sew / 4;
      break;

    case LMUL_8:
      ratio = sew / 8;
      break;

    default:
      gcc_unreachable ();
    }

  index = ratio == 64   ? 0
          : ratio == 32 ? 1
          : ratio == 16 ? 2
          : ratio == 8  ? 3
          : ratio == 4  ? 4
          : ratio == 2  ? 5
                        : 6;
  return riscv_vector_types[0][VECTOR_TYPE_bool][index];
}

inline const char *
mode2data_type_suffix (machine_mode mode, bool u, bool ie)
{
  static char buffer[NAME_MAXLEN] = {0};
  unsigned int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  unsigned int vlmul = riscv_classify_vlmul_field (mode);
  int nf = riscv_classify_nf (mode);
  const char *lmul = vlmul == VLMUL_FIELD_000 ? "m1" : vlmul == VLMUL_FIELD_001 ? "m2"
          : vlmul == VLMUL_FIELD_010 ? "m4" : vlmul == VLMUL_FIELD_011 ? "m8"
          : vlmul == VLMUL_FIELD_101 ? "mf8" : vlmul == VLMUL_FIELD_110 ? "mf4" : "mf2";
  const char *prefix = FLOAT_MODE_P (mode) ? "f" : (ie && nf == 1) ? "e" : u ? "u" : "i";
  
  if (GET_MODE_CLASS (mode) == MODE_VECTOR_BOOL)
    {
      switch (mode)
        {
        case VNx2BImode:
          return "b64";
        case VNx4BImode:
          return "b32";
        case VNx8BImode:
          return "b16";
        case VNx16BImode:
          return "b8";
        case VNx32BImode:
          return "b4";
        case VNx64BImode:
          return "b2";
        case VNx128BImode:
          return "b1";
        default:
          gcc_unreachable ();
        }
    }
  else if (!VECTOR_MODE_P (mode))
    {
      if (FLOAT_MODE_P (mode))
        snprintf (buffer, sizeof (buffer), "f%d", sew);
      else if (u)
        snprintf (buffer, sizeof (buffer), "u%d", sew);
      else
        snprintf (buffer, sizeof (buffer), "i%d", sew);
    }
  else if (nf == 1)
    snprintf (buffer, sizeof (buffer), "%s%d%s", prefix, sew, lmul);
  else
    snprintf (buffer, sizeof (buffer), "%s%d%sx%d", prefix, sew, lmul, nf);
  
  return buffer;
}

inline lmul_value_index
mode2lmul (machine_mode mode)
{
  int nf = riscv_classify_nf (mode);
  unsigned int factor = GET_MODE_SIZE (mode).coeffs[0] / nf;
  if (GET_MODE_CLASS (mode) == MODE_VECTOR_BOOL)
    {
      switch (mode)
        {
        case VNx2BImode:
          return LMUL_1F8;
        case VNx4BImode:
          return LMUL_1F4;
        case VNx8BImode:
          return LMUL_1F2;
        case VNx16BImode:
          return LMUL_1;
        case VNx32BImode:
          return LMUL_2;
        case VNx64BImode:
          return LMUL_4;
        case VNx128BImode:
          return LMUL_8;
        default:
          gcc_unreachable ();
        }
    }
    
  if (factor < UNITS_PER_V_REG.coeffs[0])
    {
      int lmul = UNITS_PER_V_REG.coeffs[0] / factor;
      return lmul == 8 ? LMUL_1F8 : lmul == 4 ? LMUL_1F4 : LMUL_1F2;
    }
  else
    {
      int lmul = factor / UNITS_PER_V_REG.coeffs[0];
      return lmul == 8   ? LMUL_8
             : lmul == 4 ? LMUL_4
             : lmul == 2 ? LMUL_2
                         : LMUL_1;
    }
}

inline tree
get_tuple_t (machine_mode mode, bool u, unsigned int nelt)
{
  if (VECTOR_MODE_P (mode))
    {
      unsigned int lmul = mode2lmul (mode);
      machine_mode innermode = GET_MODE_INNER (mode);
      tree vectype;

      switch (innermode)
        {
        case E_QImode:
          vectype = u ? riscv_vector_types[nelt - 1][VECTOR_TYPE_uint8][lmul]
                      : riscv_vector_types[nelt - 1][VECTOR_TYPE_int8][lmul];
          break;

        case E_HImode:
          vectype = u ? riscv_vector_types[nelt - 1][VECTOR_TYPE_uint16][lmul]
                      : riscv_vector_types[nelt - 1][VECTOR_TYPE_int16][lmul];
          break;

        case E_SImode:
          vectype = u ? riscv_vector_types[nelt - 1][VECTOR_TYPE_uint32][lmul]
                      : riscv_vector_types[nelt - 1][VECTOR_TYPE_int32][lmul];
          break;

        case E_DImode:
          vectype = u ? riscv_vector_types[nelt - 1][VECTOR_TYPE_uint64][lmul]
                      : riscv_vector_types[nelt - 1][VECTOR_TYPE_int64][lmul];
          break;

        case E_HFmode:
          vectype = riscv_vector_types[nelt - 1][VECTOR_TYPE_float16][lmul];
          break;

        case E_SFmode:
          vectype = riscv_vector_types[nelt - 1][VECTOR_TYPE_float32][lmul];
          break;

        case E_DFmode:
          vectype = riscv_vector_types[nelt - 1][VECTOR_TYPE_float64][lmul];
          break;

        default:
          gcc_unreachable ();
        }

      return vectype;
    }

  gcc_unreachable ();
}

inline tree
get_dt_t (machine_mode mode, bool u, bool ptr = false, bool c = false,
          unsigned int nelt = 1)
{
  if (riscv_tuple_mode_p (mode))
    {
      return get_tuple_t (mode, u, nelt);
    }
  if (VECTOR_MODE_P (mode))
    {
      unsigned int lmul = mode2lmul (mode);
      machine_mode innermode = GET_MODE_INNER (mode);
      tree vectype;

      if (GET_MODE_CLASS (mode) == MODE_VECTOR_BOOL)
        return riscv_vector_types[0][VECTOR_TYPE_bool][lmul];

      switch (innermode)
        {
        case E_QImode:
          vectype = u ? riscv_vector_types[0][VECTOR_TYPE_uint8][lmul]
                      : riscv_vector_types[0][VECTOR_TYPE_int8][lmul];
          break;

        case E_HImode:
          vectype = u ? riscv_vector_types[0][VECTOR_TYPE_uint16][lmul]
                      : riscv_vector_types[0][VECTOR_TYPE_int16][lmul];
          break;

        case E_SImode:
          vectype = u ? riscv_vector_types[0][VECTOR_TYPE_uint32][lmul]
                      : riscv_vector_types[0][VECTOR_TYPE_int32][lmul];
          break;

        case E_DImode:
          vectype = u ? riscv_vector_types[0][VECTOR_TYPE_uint64][lmul]
                      : riscv_vector_types[0][VECTOR_TYPE_int64][lmul];
          break;

        case E_HFmode:
          vectype = riscv_vector_types[0][VECTOR_TYPE_float16][lmul];
          break;

        case E_SFmode:
          vectype = riscv_vector_types[0][VECTOR_TYPE_float32][lmul];
          break;

        case E_DFmode:
          vectype = riscv_vector_types[0][VECTOR_TYPE_float64][lmul];
          break;

        default:
          gcc_unreachable ();
        }

      if (ptr)
        return build_pointer_type (vectype);
      else
        return vectype;
    }

  switch (mode)
    {
    case E_QImode:
      if (ptr)
        {
          if (c)
            {
              return u ? const_unsigned_int8_ptr_type_node
                       : const_int8_ptr_type_node;
            }
          else
            return u ? unsigned_int8_ptr_type_node : int8_ptr_type_node;
        }
      else
        return u ? unsigned_int8_type_node : int8_type_node;

    case E_HImode:
      if (ptr)
        {
          if (c)
            return u ? const_unsigned_int16_ptr_type_node
                     : const_int16_ptr_type_node;
          else
            return u ? unsigned_int16_ptr_type_node : int16_ptr_type_node;
        }
      else
        return u ? unsigned_int16_type_node : int16_type_node;

    case E_SImode:
      if (ptr)
        {
          if (c)
            return u ? const_unsigned_int32_ptr_type_node
                     : const_int32_ptr_type_node;
          else
            return u ? unsigned_int32_ptr_type_node : int32_ptr_type_node;
        }
      else
        return u ? unsigned_int32_type_node : int32_type_node;

    case E_DImode:
      if (ptr)
        {
          if (c)
            return u ? const_unsigned_int64_ptr_type_node
                     : const_int64_ptr_type_node;
          else
            return u ? unsigned_int64_ptr_type_node : int64_ptr_type_node;
        }
      else
        return u ? unsigned_int64_type_node : int64_type_node;

    case E_HFmode:
      if (ptr)
        {
          if (c)
            return const_fp16_ptr_type_node;
          else
            return fp16_ptr_type_node;
        }
      else
        return fp16_type_node;

    case E_SFmode:
      if (ptr)
        {
          if (c)
            return const_float_ptr_type_node;
          else
            return float_ptr_type_node;
        }
      else
        return float_type_node;

    case E_DFmode:
      if (ptr)
        {
          if (c)
            return const_double_ptr_type_node;
          else
            return double_ptr_type_node;
        }
      else
        return double_type_node;

    default:
      break;
    }

  gcc_unreachable ();
}

/* Helper functions to get datatype of arg. */

inline bool
is_dt_ptr (const data_type_index dt)
{
  return dt == DT_ptr || dt == DT_uptr || dt == DT_c_ptr || dt == DT_c_uptr;
}

inline bool
is_dt_unsigned (const data_type_index dt)
{
  return dt == DT_unsigned || dt == DT_uptr || dt == DT_c_uptr;
}

inline bool
is_dt_const (const data_type_index dt)
{
  return dt == DT_c_ptr || dt == DT_c_uptr;
}

/* Return the overloaded or full function name for INSTANCE; OVERLOADED_P
   selects which.  Allocate the string on m_string_obstack; the caller
   must use obstack_free to free it after use.  */

inline void
joint_function_name (char *function_name, const function_instance &instance,
                     machine_mode mode, bool unsigned_p, bool ie_p,
                     bool insert_prefix_p = false,
                     machine_mode prefix_mode = VOIDmode,
                     bool prefix_unsigned_p = false, bool prefix_ie_p = false)
{
  strcat (function_name, instance.get_base_name ());
  strcat (function_name, "_");

  const char *operation_suffix =
      get_operation_suffix (instance.get_operation ());

  if (strlen (operation_suffix) > 0)
    {
      strcat (function_name, operation_suffix);
      strcat (function_name, "_");
    }

  if (insert_prefix_p)
    {
      strcat (function_name, mode2data_type_suffix (
                                 prefix_mode, prefix_unsigned_p, prefix_ie_p));
      strcat (function_name, "_");
    }

  strcat (function_name, mode2data_type_suffix (mode, unsigned_p, ie_p));
  const char *pred_suffix = get_pred_func_suffix (instance.get_pred ());

  if (strlen (pred_suffix) > 0)
    {
      strcat (function_name, "_");
      strcat (function_name, pred_suffix);
    }
}

/* Return the single field in tuple type TYPE.  */
inline tree
tuple_type_field (tree type)
{
  for (tree field = TYPE_FIELDS (type); field; field = DECL_CHAIN (field))
    if (TREE_CODE (field) == FIELD_DECL)
      return field;

  gcc_unreachable ();
}

/* Return a hash code for a function_instance.  */
inline hashval_t
get_string_hash (char *input_string)
{
  if (input_string == NULL || strlen (input_string) == 0)
    return 0;

  inchash::hash h;

  for (unsigned int i = 0; i < strlen (input_string); i += 4)
    {
      unsigned int four_chars = 0;

      for (unsigned int j = i; j < strlen (input_string) && j < i + 4; j++)
        {
          four_chars |= input_string[j] << (8 * (j - i));
        }

      h.add_int (four_chars);
    }

  return h.end ();
}

/* Report an error against LOCATION that the user has tried to use
   function FNDECL when extension EXTENSION is disabled.  */
static void
report_missing_extension (location_t location, tree fndecl,
                          const char *extension)
{
  /* Avoid reporting a slew of messages for a single oversight.  */
  if (reported_missing_extension_p)
    return;

  error_at (location, "rvv function %qD requires ISA extension %qs", fndecl,
            extension);
  inform (location,
          "you can enable %qs using the command-line"
          " option %<-march%>",
          extension);
  reported_missing_extension_p = true;
}

/* Add attribute NAME to ATTRS.  */
static tree
add_attribute (const char *name, tree attrs)
{
  return tree_cons (get_identifier (name), NULL_TREE, attrs);
}

inline hashval_t
registered_function_hasher::hash (value_type value)
{
  return value->instance.hash ();
}

inline bool
registered_function_hasher::equal (value_type value, const compare_type &key)
{
  return value->instance == key;
}

/* function_instance class implemention */

function_instance::function_instance (function_builder *_builder,
                                      const char *_base_name,
                                      vector_arg_modes &_target_arg_pattern,
                                      predication_index _target_pred,
                                      operation_index _target_operation)
    : m_builder (_builder), m_base_name (_base_name),
      m_target_arg_pattern (_target_arg_pattern), m_target_pred (_target_pred),
      m_target_operation (_target_operation)
{
  m_function_name = (char *)xmalloc (NAME_MAXLEN);
  m_hashval = (hashval_t *)xmalloc (sizeof (hashval_t));
  *m_hashval = 0;
  memset (m_function_name, 0, NAME_MAXLEN);
}

function_instance::function_instance ()
{
  m_function_name = (char *)xmalloc (NAME_MAXLEN);
  m_hashval = (hashval_t *)xmalloc (sizeof (hashval_t));
  *m_hashval = 0;
  memset (m_function_name, 0, NAME_MAXLEN);
  m_need_free = true;
}

function_instance::~function_instance ()
{
  if (m_need_free)
    {
      free (m_function_name);
      free (m_hashval);
    }
}

inline bool
function_instance::operator== (const function_instance &other) const
{
  return (strcmp (get_func_name (), other.get_func_name ()) == 0);
}

inline bool
function_instance::operator!= (const function_instance &other) const
{
  return !operator== (other);
}

/* Return a hash code for a function_instance.  */
hashval_t
function_instance::hash () const
{
  return get_string_hash (get_func_name ());
}

bool
function_instance::check (location_t, tree, tree, unsigned int, tree *) const
{
  return true;
}

/* Return a set of CP_* flags that describe what the function could do,
   taking the command-line flags into account.  */
unsigned int
function_instance::call_properties () const
{
  unsigned int flags = m_builder->call_properties (*this);

  /* -fno-trapping-math means that we can assume any FP exceptions
     are not user-visible.  */
  if (!flag_trapping_math)
    flags &= ~CP_RAISE_FP_EXCEPTIONS;

  return flags;
}

/* Return true if calls to the function could read some form of
   global state.  */
bool
function_instance::reads_global_state_p () const
{
  unsigned int flags = call_properties ();

  /* Preserve any dependence on rounding mode, flush to zero mode, etc.
     There is currently no way of turning this off; in particular,
     -fno-rounding-math (which is the default) means that we should make
     the usual assumptions about rounding mode, which for intrinsics means
     acting as the instructions do.  */
  if (flags & CP_READ_FPCR)
    return true;

  /* Handle direct reads of global state.  */
  return flags & (CP_READ_MEMORY | CP_READ_CSR);
}

/* Return true if calls to the function could modify some form of
   global state.  */
bool
function_instance::modifies_global_state_p () const
{
  unsigned int flags = call_properties ();

  /* Preserve any exception state written back to the FPCR,
     unless -fno-trapping-math says this is unnecessary.  */
  if (flags & (CP_RAISE_FP_EXCEPTIONS | CP_RAISE_LD_EXCEPTIONS))
    return true;

  /* Handle direct modifications of global state.  */
  return flags & (CP_WRITE_MEMORY | CP_WRITE_CSR);
}

/* Return true if calls to the function could raise a signal.  */
bool
function_instance::could_trap_p () const
{
  unsigned int flags = call_properties ();

  /* Handle functions that could raise SIGFPE.  */
  if (flags & (CP_RAISE_FP_EXCEPTIONS | CP_RAISE_LD_EXCEPTIONS))
    return true;

  /* Handle functions that could raise SIGBUS or SIGSEGV.  */
  if (flags & (CP_READ_MEMORY | CP_WRITE_MEMORY))
    return true;

  return false;
}

const char *
function_instance::get_base_name () const
{
  return m_base_name;
}

vector_arg_modes
function_instance::get_arg_pattern () const
{
  return m_target_arg_pattern;
}

predication_index
function_instance::get_pred () const
{
  return m_target_pred;
}

unsigned int
function_instance::get_vma_vta () const
{
  return any_policy;
}

operation_index
function_instance::get_operation () const
{
  return m_target_operation;
}

data_type_index *
function_instance::get_data_type_list () const
{
  return m_builder->get_data_type_list ();
}

function_builder *
function_instance::builder () const
{
  return m_builder;
}

char *
function_instance::get_func_name () const
{
  return m_function_name;
}

void
function_instance::clear_func_name () const
{
  memset (m_function_name, 0, NAME_MAXLEN);
}

/* function_builder class implemention */

function_builder::function_builder (const char *_base_name,
                                    vector_arg_all_modes &_target_arg_patterns,
                                    uint64_t _target_pattern,
                                    uint64_t _target_preds,
                                    uint64_t _target_op_types,
                                    const unsigned int _extensions)
    : m_base_name (_base_name), m_target_arg_patterns (_target_arg_patterns),
      m_target_pattern (_target_pattern), m_target_preds (_target_preds),
      m_target_op_types (_target_op_types), m_required_extensions (_extensions)
{
  gcc_obstack_init (&m_string_obstack);
  m_iter_idx_cnt = 0;
  m_iter_arg_cnt = 0;
  m_iter_arg_idx_list = (unsigned int *)xmalloc (m_target_arg_patterns.arg_len *
                                                 sizeof (unsigned int));

  for (unsigned int i = 0; i < m_target_arg_patterns.arg_len; i++)
    {
      // use mode iterator as mode iter
      if (m_target_arg_patterns.target_op_list[i] < 0)
        {
          m_iter_idx_cnt =
              (m_iter_idx_cnt == 0)
                  ? m_target_arg_patterns.arg_list[i]->attr_len
                  : m_iter_idx_cnt *
                        m_target_arg_patterns.arg_list[i]->attr_len;
          m_iter_arg_idx_list[m_iter_arg_cnt++] = i;
        }
    }

  gcc_assert (m_iter_arg_cnt > 0);
  gcc_assert (m_iter_idx_cnt > 0);
}

function_builder::~function_builder ()
{
  obstack_free (&m_string_obstack, NULL);
  free (m_iter_arg_idx_list);
}

rtx
function_builder::expand_builtin_insn (enum insn_code icode, tree exp,
                                       rtx target,
                                       const function_instance &instance) const
{
  gcc_assert (call_expr_nargs (exp) > 0);
  struct expand_operand ops[MAX_RECOG_OPERANDS];
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  tree fndecl = TREE_OPERAND (CALL_EXPR_FN (exp), 0);
  predication_index pred = instance.get_pred ();

  /* Map any target to operand 0.  */
  int opno = 0;
  int offset = 0;

  if (!function_returns_void_p (fndecl))
    {
      create_output_operand (&ops[opno++], target, mode);
    }

  if (need_mask_operand_p ())
    {
      if (has_mask_arg_p (pred))
        {
          add_input_operand (&ops[opno++], exp, offset++);
        }
      else
        {
          create_input_operand (&ops[opno++], const0_rtx, Pmode);
        }
    }

  if (need_dest_operand_p ())
    {
      if (has_dest_arg_p (pred))
        {
          add_input_operand (&ops[opno++], exp, offset++);
        }
      else
        {
          create_input_operand (&ops[opno++], const0_rtx, Pmode);
        }
    }

  for (int argno = offset; argno < call_expr_nargs (exp); argno++)
    add_input_operand (&ops[opno++], exp, argno);

  if (pred != PRED_none)
    create_input_operand (&ops[opno++], GEN_INT (get_policy (pred)), Pmode);

  /* Map the arguments to the other operands.  */
  gcc_assert (opno == insn_data[icode].n_generator_args);
  return generate_builtin_insn (icode, opno, ops,
                                !function_returns_void_p (fndecl));
}

gimple *
function_builder::fold (const function_instance &, gimple_stmt_iterator *,
                        gcall *) const
{
  return NULL;
}

tree
function_builder::get_return_type (const function_instance &) const
{
  return void_type_node;
}

size_t
function_builder::get_dest_arguments_length () const
{
  return 1;
}

tree
function_builder::get_mask_type (const tree &return_type,
                                 const tree &first_type, const vec<tree> &,
                                 lmul_value_index lmul) const
{
  const tree type =
      VECTOR_MODE_P (TYPE_MODE (return_type)) ? return_type : first_type;

  if (GET_MODE_CLASS (TYPE_MODE (type)) == MODE_VECTOR_BOOL)
    return type;
  else
    return lmul2mask_t (GET_MODE_INNER (TYPE_MODE (type)), lmul);
}

tree
function_builder::get_dest_type (const tree &return_type, const vec<tree> &,
                                 lmul_value_index) const
{
  return return_type;
}

void
function_builder::get_argument_types (const function_instance &,
                                      vec<tree> &) const
{
}

void
function_builder::get_name (char *, const function_instance &) const
{
}

uint64_t
function_builder::get_pattern () const
{
  return m_target_pattern;
}

bool
function_builder::need_mask_operand_p () const
{
  uint64_t pat = get_pattern ();

  return (pat & PAT_mask) || (pat & PAT_merge);
}

bool
function_builder::need_dest_operand_p () const
{
  uint64_t pat = get_pattern ();

  return (pat & PAT_tail) || ((pat & PAT_mask) && !(pat & PAT_ignore_policy));
}

bool
function_builder::has_mask_arg_p (predication_index pred) const
{
  uint64_t pat = get_pattern ();

  return pred == PRED_m || pred == PRED_m_ta || pred == PRED_m_tu ||
         pred == PRED_tama || pred == PRED_tamu || pred == PRED_tuma ||
         pred == PRED_tumu || pred == PRED_ma || pred == PRED_mu ||
         (pat & PAT_merge);
}

bool
function_builder::has_dest_arg_p (predication_index pred) const
{
  uint64_t pat = get_pattern ();

  switch (pred)
    {
    case PRED_void:
      return (pat & PAT_void_dest) || (pat & PAT_dest);
    case PRED_ta:
    case PRED_tama:
      return (pat & PAT_dest);
    case PRED_m:
      return !(pat & PAT_ignore_policy);
    case PRED_tu:
    case PRED_m_tu:
    case PRED_mu:
    case PRED_tamu:
    case PRED_tuma:
    case PRED_tumu:
      return true;
    default:
      return false;
    }
}

unsigned int
function_builder::get_policy (predication_index pred) const
{
  uint64_t pat = get_pattern ();

  switch (pred)
    {
    case PRED_void:
      return (pat & PAT_void_dest || pat & PAT_dest) ? tu_policy : ta_policy;
    case PRED_m:
      if (pat & PAT_ignore_policy)
        return any_policy;
      else if (pat & PAT_ignore_mask_policy)
        return tu_policy;
      else if (pat & PAT_ignore_tail_policy)
        return mu_policy;
      else
        return tumu_policy;
    case PRED_ta:
    case PRED_m_ta:
      return ta_policy;
    case PRED_tu:
    case PRED_m_tu:
      return tu_policy;
    case PRED_ma:
      return ma_policy;
    case PRED_mu:
      return mu_policy;
    case PRED_tama:
      return tama_policy;
    case PRED_tamu:
      return tamu_policy;
    case PRED_tuma:
      return tuma_policy;
    case PRED_tumu:
      return tumu_policy;
    default:
      return any_policy;
    }
}

size_t
function_builder::get_position_of_mask_arg (predication_index) const
{
  return 0;
}

size_t
function_builder::get_position_of_dest_arg (predication_index pred) const
{
  uint64_t pat = get_pattern ();
  if (pred == PRED_tu ||
      (pred == PRED_void && (pat & PAT_void_dest || pat & PAT_dest)) ||
      (pred == PRED_ta && pat & PAT_dest))
    return 0;
  else
    return 1;
}

unsigned int
function_builder::call_properties (const function_instance &) const
{
  return 0;
}

data_type_index *
function_builder::get_data_type_list () const
{
  return m_target_arg_patterns.dt_list;
}

/* Add NAME to the end of the function name being built.  */
void
function_builder::append_name (const char *name)
{
  obstack_grow (&m_string_obstack, name, strlen (name));
}

/* Zero-terminate and complete the function name being built.  */
char *
function_builder::finish_name ()
{
  obstack_1grow (&m_string_obstack, 0);
  return (char *)obstack_finish (&m_string_obstack);
}

/* Return the appropriate function attributes for INSTANCE.  */
tree
function_builder::get_attributes (const function_instance &instance)
{
  tree attrs = NULL_TREE;

  if (!instance.modifies_global_state_p ())
    {
      if (instance.reads_global_state_p ())
        attrs = add_attribute ("pure", attrs);
      else
        attrs = add_attribute ("const", attrs);
    }

  if (!flag_non_call_exceptions || !instance.could_trap_p ())
    attrs = add_attribute ("nothrow", attrs);

  return add_attribute ("leaf", attrs);
}

/* Add a function called NAME with type FNTYPE and attributes ATTRS.
   INSTANCE describes what the function does and OVERLOADED_P indicates
   whether it is overloaded.  REQUIRED_EXTENSIONS are the set of
   architecture extensions that the function requires.  */
registered_function &
function_builder::add_function (const function_instance &instance,
                                const char *name, tree fntype, tree attrs,
                                bool placeholder_p)
{
  unsigned int code =
      (vec_safe_length (registered_functions) << RISCV_BUILTIN_SHIFT) +
      RISCV_BUILTIN_VECTOR;

  /* We need to be able to generate placeholders to enusre that we have a
     consistent numbering scheme for function codes between the C and C++
     frontends, so that everything ties up in LTO.

     Currently, tree-streamer-in.c:unpack_ts_function_decl_value_fields
     validates that tree nodes returned by TARGET_BUILTIN_DECL are non-NULL and
     some node other than error_mark_node. This is a holdover from when builtin
     decls were streamed by code rather than by value.

     Ultimately, we should be able to remove this validation of BUILT_IN_MD
     nodes and remove the target hook. For now, however, we need to appease the
     validation and return a non-NULL, non-error_mark_node node, so we
     arbitrarily choose integer_zero_node.  */
  tree decl = placeholder_p
                  ? integer_zero_node
                  : simulate_builtin_function_decl (input_location, name,
                                                    fntype, code, NULL, attrs);

  registered_function &rfn = *ggc_alloc<registered_function> ();
  rfn.instance = instance;
  rfn.decl = decl;
  rfn.required_extensions = m_required_extensions;
  vec_safe_push (registered_functions, &rfn);

  return rfn;
}

/* Add a built-in function for INSTANCE, with the argument types given
   by ARGUMENT_TYPES and the return type given by RETURN_TYPE.
   REQUIRED_EXTENSIONS are the set of architecture extensions that the
   function requires.  FORCE_DIRECT_OVERLOADS is true if there is a
   one-to-one mapping between "short" and "full" names, and if standard
   overload resolution therefore isn't necessary.  */
void
function_builder::add_unique_function (const function_instance &instance,
                                       tree return_type,
                                       vec<tree> &argument_types)
{
  /* Add the function under its full (unique) name.  */
  get_name (instance.get_func_name (), instance);
  append_name (instance.get_func_name ());
  char *name = finish_name ();
  tree fntype = build_function_type_array (
      return_type, argument_types.length (), argument_types.address ());
  tree attrs = get_attributes (instance);
  registered_function &rfn =
      add_function (instance, name, fntype, attrs, false);

  /* Enter the function into the hash table.  */
  hashval_t hashval = instance.hash ();
  registered_function **rfn_slot =
      function_table->find_slot_with_hash (instance, hashval, INSERT);

  if (*rfn_slot)
    error ("duplicate function name: %s", name);

  *rfn_slot = &rfn;

  obstack_free (&m_string_obstack, name);
}

/* Check whether all the RISCV_* values in REQUIRED_EXTENSIONS are
   enabled, given that those extensions are required for function FNDECL.
   Report an error against LOCATION if not.  */
bool
function_builder::check_required_extensions (location_t location, tree fndecl,
                                             uint64_t required_extensions)
{
  /* For the instructions doesn't need any extension, we return true.  */
  if (required_extensions == 0)
    return true;

  /* check vector extension enable or not.  */
  if ((required_extensions & 0x1) && !TARGET_VECTOR)
    report_missing_extension (location, fndecl, "V");

  /* check zfh extension enable or not.  */
  if (((required_extensions >> 3) & 0x1) && !TARGET_FP16)
    report_missing_extension (location, fndecl, "Zfh");

  /* check f extension enable or not.  */
  if (((required_extensions >> 4) & 0x1) && !TARGET_HARD_FLOAT)
    report_missing_extension (location, fndecl, "F");

  /* check d extension enable or not.  */
  if (((required_extensions >> 5) & 0x1) && !TARGET_DOUBLE_FLOAT)
    report_missing_extension (location, fndecl, "D");

  return true;
}

/* If INSTANCE has a governing predicate, add it to the list of argument
   types in ARGUMENT_TYPES.  RETURN_TYPE is the type returned by the
   function.  */
void
function_builder::apply_predication (tree &return_type, tree &first_type,
                                     vec<tree> &argument_types,
                                     lmul_value_index lmul,
                                     predication_index pred) const
{
  /* check if mask parameter need. */
  if (has_mask_arg_p (pred))
    {
      argument_types.quick_insert (
          get_position_of_mask_arg (pred),
          get_mask_type (return_type, first_type, argument_types, lmul));
    }

  /* check if dest parameter need. */
  if (has_dest_arg_p (pred))
    {
      size_t size = get_dest_arguments_length ();
      tree dest_type = get_dest_type (return_type, argument_types, lmul);
      if (argument_types.is_empty ())
        for (size_t i = 0; i < size; i += 1)
          argument_types.quick_push (dest_type);
      else
        for (size_t i = 0; i < size; i += 1)
          argument_types.quick_insert (get_position_of_dest_arg (pred) + i,
                                       dest_type);
    }

  /* check if vl parameter need  */
  if (pred != PRED_none)
    argument_types.quick_push (size_type_node);
}

void
function_builder::build_one (const function_instance &instance)
{
  /* Byte forms of vlxusegei take 21 arguments.  */
  auto_vec<tree, 21> argument_types;
  tree return_type = get_return_type (instance);
  get_argument_types (instance, argument_types);
  machine_mode mode = VECTOR_MODE_P (instance.get_arg_pattern ().arg_list[0])
                          ? instance.get_arg_pattern ().arg_list[0]
                          : instance.get_arg_pattern ().arg_list[1];
  tree first_type = get_dt_t (instance.get_arg_pattern ().arg_list[0],
                              instance.get_data_type_list ()[0] == DT_unsigned);
  apply_predication (return_type, first_type, argument_types, mode2lmul (mode),
                     instance.get_pred ());
  add_unique_function (instance, return_type, argument_types);
}

vector_arg_modes &
function_builder::get_arg_modes_by_iter_idx (unsigned int iter_idx) const
{
  if (iter_idx >= m_iter_idx_cnt)
    {
      gcc_unreachable ();
    }

  unsigned int coefficient = 1;
  machine_mode *arg_modes = (machine_mode *)xmalloc (
      sizeof (machine_mode) * m_target_arg_patterns.arg_len);
  vector_arg_modes &arg_modes_info =
      *(vector_arg_modes *)xmalloc (sizeof (vector_arg_modes));
  arg_modes_info.arg_len = m_target_arg_patterns.arg_len;
  arg_modes_info.arg_list = arg_modes;
  arg_modes_info.arg_extensions = m_required_extensions;

  // set mode for iter args first
  for (unsigned int i = 0; i < m_iter_arg_cnt; i++)
    {
      // get the iter arg's attribute length
      unsigned int arg_attr_len =
          m_target_arg_patterns.arg_list[m_iter_arg_idx_list[i]]->attr_len;
      vector_mode_attr target_mode_attr =
          m_target_arg_patterns.arg_list[m_iter_arg_idx_list[i]]
              ->attr_list[(iter_idx / coefficient) % arg_attr_len];
      arg_modes[m_iter_arg_idx_list[i]] = target_mode_attr.mode;
      arg_modes_info.arg_extensions |= target_mode_attr.extension;
      coefficient *= arg_attr_len;
    }

  // set mode for attr args
  for (unsigned int i = 0; i < m_target_arg_patterns.arg_len; i++)
    {
      // skip iter args
      if (m_target_arg_patterns.target_op_list[i] < 0)
        continue;

      machine_mode iter_mode =
          arg_modes[m_target_arg_patterns.target_op_list[i]];
      vector_mode_attr_list *arg_attr_list = m_target_arg_patterns.arg_list[i];
      bool attr_mode_hit = false;

      for (unsigned int j = 0; j < arg_attr_list->attr_len; j++)
        {
          if (iter_mode == arg_attr_list->attr_list[j].mode)
            {
              attr_mode_hit = true;
              arg_modes[i] = arg_attr_list->attr_list[j].attr;
              arg_modes_info.arg_extensions |=
                  arg_attr_list->attr_list[j].extension;
            }
        }

      // one argment mode NOT hit, that means maybe NO mode is valid for
      // iter_idx
      if (!attr_mode_hit)
        {
          // set arg_len to 0 to skip this arg pattern
          arg_modes_info.arg_len = 0;
          break;
        }
    }

  return arg_modes_info;
}

static bool
pattern_can_skip_p (const char *base_name, vector_arg_modes arg_modes,
                    data_type_index *dt_list)
{
  if (arg_modes.arg_len == 0)
    return true;

  if (strstr (base_name, "vluxseg") != NULL ||
      strstr (base_name, "vloxseg") != NULL)
    {
      unsigned int nf = riscv_classify_nf (arg_modes.arg_list[0]);

      if (strcmp (base_name, "vluxseg2") == 0 ||
          strcmp (base_name, "vloxseg2") == 0)
        return nf != 2;

      if (strcmp (base_name, "vluxseg3") == 0 ||
          strcmp (base_name, "vloxseg3") == 0)
        return nf != 3;

      if (strcmp (base_name, "vluxseg4") == 0 ||
          strcmp (base_name, "vloxseg4") == 0)
        return nf != 4;

      if (strcmp (base_name, "vluxseg5") == 0 ||
          strcmp (base_name, "vloxseg5") == 0)
        return nf != 5;

      if (strcmp (base_name, "vluxseg6") == 0 ||
          strcmp (base_name, "vloxseg6") == 0)
        return nf != 6;

      if (strcmp (base_name, "vluxseg7") == 0 ||
          strcmp (base_name, "vloxseg7") == 0)
        return nf != 7;

      if (strcmp (base_name, "vluxseg8") == 0 ||
          strcmp (base_name, "vloxseg8") == 0)
        return nf != 8;

      return false;
    }

  if (strstr (base_name, "vsuxseg") != NULL ||
      strstr (base_name, "vsoxseg") != NULL)
    {
      if (strcmp (base_name, "vsuxseg") == 0 ||
          strcmp (base_name, "vsoxseg") == 0)
        return false;

      unsigned int nf = riscv_classify_nf (arg_modes.arg_list[0]);

      if (strcmp (base_name, "vsuxseg2") == 0 ||
          strcmp (base_name, "vsoxseg2") == 0)
        return nf != 2;

      if (strcmp (base_name, "vsuxseg3") == 0 ||
          strcmp (base_name, "vsoxseg3") == 0)
        return nf != 3;

      if (strcmp (base_name, "vsuxseg4") == 0 ||
          strcmp (base_name, "vsoxseg4") == 0)
        return nf != 4;

      if (strcmp (base_name, "vsuxseg5") == 0 ||
          strcmp (base_name, "vsoxseg5") == 0)
        return nf != 5;

      if (strcmp (base_name, "vsuxseg6") == 0 ||
          strcmp (base_name, "vsoxseg6") == 0)
        return nf != 6;

      if (strcmp (base_name, "vsuxseg7") == 0 ||
          strcmp (base_name, "vsoxseg7") == 0)
        return nf != 7;

      if (strcmp (base_name, "vsuxseg8") == 0 ||
          strcmp (base_name, "vsoxseg8") == 0)
        return nf != 8;

      return false;
    }

  if (strcmp (base_name, "vlmul_ext") && strcmp (base_name, "vlmul_trunc") &&
      strcmp (base_name, "vget") && strcmp (base_name, "vset") &&
      strcmp (base_name, "vloxei") && strcmp (base_name, "vluxei") &&
      strcmp (base_name, "vsuxei") && strcmp (base_name, "vsoxei"))
    return false;

  machine_mode tmode = arg_modes.arg_list[0];
  machine_mode smode = strcmp (base_name, "vset") == 0 ? arg_modes.arg_list[3]
                                                       : arg_modes.arg_list[1];

  if (GET_MODE_INNER (tmode) != GET_MODE_INNER (smode))
    return true;

  if (tmode == smode)
    return true;

  if ((strcmp (base_name, "vlmul_ext") == 0) ||
      (strcmp (base_name, "vset") == 0))
    return known_lt (GET_MODE_SIZE (tmode), GET_MODE_SIZE (smode));

  if ((strcmp (base_name, "vlmul_trunc") == 0) ||
      (strcmp (base_name, "vget") == 0))
    return known_gt (GET_MODE_SIZE (tmode), GET_MODE_SIZE (smode));

  if ((strcmp (base_name, "vluxei") == 0 || strcmp (base_name, "vloxei") == 0 ||
       strcmp (base_name, "vsuxei") == 0 ||
       strcmp (base_name, "vsoxei") == 0) &&
      FLOAT_MODE_P (GET_MODE_INNER (arg_modes.arg_list[0])) &&
      dt_list[0] == DT_unsigned)
    return true;

  return false;
}

void
function_builder::register_function ()
{
  for (unsigned iter_idx = 0; iter_idx < m_iter_idx_cnt; iter_idx++)
    {
      vector_arg_modes &arg_modes = get_arg_modes_by_iter_idx (iter_idx);

      if (pattern_can_skip_p (m_base_name, arg_modes, get_data_type_list ()))
        {
          free (arg_modes.arg_list);
          free (&arg_modes);
          continue;
        }

      for (unsigned pred = 1; pred < NUM_PREDS; pred <<= 1)
        {
          if ((m_target_preds & pred) == 0)
            continue;

          for (unsigned op_type = 1; op_type < NUM_OP; op_type <<= 1)
            {
              if ((m_target_op_types & op_type) == 0)
                continue;

              build_one (function_instance (
                  this, m_base_name, arg_modes,
                  predication_index (m_target_preds & pred),
                  operation_index (m_target_op_types & op_type)));
            }
        }
    }
}

/* implementation for config builder */
unsigned int
config::call_properties (const function_instance &) const
{
  return CP_WRITE_CSR | CP_READ_CSR;
}

void
config::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       instance.get_data_type_list ()[0] == DT_unsigned, true);
}
tree
config::get_return_type (const function_instance &) const
{
  return size_type_node;
}

void
config::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  if (strcmp (instance.get_base_name (), "vsetvl") == 0)
    argument_types.quick_push (size_type_node);
}

rtx
config::expand (const function_instance &instance, tree exp, rtx target) const
{
  struct expand_operand ops[MAX_RECOG_OPERANDS];
  tree fndecl = TREE_OPERAND (CALL_EXPR_FN (exp), 0);

  /* Map any target to operand 0.  */
  int opno = 0;
  create_output_operand (&ops[opno++], target, Pmode);
  unsigned int vtype =
      get_vtype_for_mode (instance.get_arg_pattern ().arg_list[0]);
  insn_code icode = code_for_vsetvl_volatile (Pmode);

  if (strcmp (instance.get_base_name (), "vsetvl") == 0)
    add_input_operand (&ops[opno++], exp, 0);
  else
    create_input_operand (&ops[opno++], gen_rtx_REG (Pmode, X0_REGNUM), Pmode);

  /* create vtype input operand.  */
  create_input_operand (&ops[opno++], GEN_INT (vtype), Pmode);
  /* Map the arguments to the other operands.  */
  gcc_assert (opno == insn_data[icode].n_generator_args);
  return generate_builtin_insn (icode, opno, ops,
                                !function_returns_void_p (fndecl));
}

/* implementation for readvl functions.  */
unsigned int
readvl::call_properties (const function_instance &) const
{
  return CP_READ_CSR;
}

void
readvl::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       instance.get_data_type_list ()[0] == DT_unsigned, false);
}

tree
readvl::get_return_type (const function_instance &) const
{
  return size_type_node;
}

void
readvl::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  if (riscv_tuple_mode_p (instance.get_arg_pattern ().arg_list[0]))
    argument_types.quick_push (get_tuple_t (
        instance.get_arg_pattern ().arg_list[1],
        instance.get_data_type_list ()[0] == DT_unsigned,
        exact_div (GET_MODE_SIZE (instance.get_arg_pattern ().arg_list[0]),
                   GET_MODE_SIZE (instance.get_arg_pattern ().arg_list[1]))
            .to_constant ()));
  else
    argument_types.quick_push (
        get_dt_t (instance.get_arg_pattern ().arg_list[0],
                  instance.get_data_type_list ()[0] == DT_unsigned));
}

rtx
readvl::expand (const function_instance &, tree exp, rtx target) const
{
  struct expand_operand ops[MAX_RECOG_OPERANDS];
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  tree fndecl = TREE_OPERAND (CALL_EXPR_FN (exp), 0);
  insn_code icode = code_for_readvl (Pmode);

  /* Map any target to operand 0.  */
  int opno = 0;
  create_output_operand (&ops[opno++], target, mode);

  for (int argno = 0; argno < call_expr_nargs (exp); argno++)
    add_input_operand (&ops[opno++], exp, argno);

  /* Map the arguments to the other operands.  */
  gcc_assert (opno == insn_data[icode].n_generator_args);
  return generate_builtin_insn (icode, opno, ops,
                                !function_returns_void_p (fndecl));
}

/* A function_base for Miscellaneous functions.  */
void
misc::get_name (char *name, const function_instance &instance) const
{
  if (strcmp (instance.get_base_name (), "vundefined") == 0)
    joint_function_name (
        name, instance, instance.get_arg_pattern ().arg_list[0],
        instance.get_data_type_list ()[0] == DT_unsigned, false);
  else if (strcmp (instance.get_base_name (), "vset") == 0)
    joint_function_name (
        name, instance, instance.get_arg_pattern ().arg_list[0],
        instance.get_data_type_list ()[0] == DT_unsigned, false, true,
        instance.get_arg_pattern ().arg_list[3],
        instance.get_data_type_list ()[3] == DT_unsigned, false);
  else
    joint_function_name (
        name, instance, instance.get_arg_pattern ().arg_list[0],
        instance.get_data_type_list ()[0] == DT_unsigned, false, true,
        instance.get_arg_pattern ().arg_list[1],
        instance.get_data_type_list ()[1] == DT_unsigned, false);
}

tree
misc::get_return_type (const function_instance &instance) const
{
  return get_dt_t (instance.get_arg_pattern ().arg_list[0],
                   instance.get_data_type_list ()[0] == DT_unsigned);
}

void
misc::get_argument_types (const function_instance &instance,
                          vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if (i == 2)
        argument_types.quick_push (size_type_node);
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

rtx
misc::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;

  if (strcmp (instance.get_base_name (), "vreinterpret") == 0)
    icode = code_for_vreinterpret (instance.get_arg_pattern ().arg_list[0]);
  else if (strcmp (instance.get_base_name (), "vlmul_ext") == 0)
    icode = code_for_vlmul_ext (instance.get_arg_pattern ().arg_list[0]);
  else if (strcmp (instance.get_base_name (), "vlmul_trunc") == 0)
    icode = code_for_vlmul_trunc (instance.get_arg_pattern ().arg_list[0]);
  else if (strcmp (instance.get_base_name (), "vundefined") == 0)
    {
      emit_clobber (copy_rtx (target));
      return target;
    }
  else if (strcmp (instance.get_base_name (), "vset") == 0)
    icode = code_for_vset (instance.get_arg_pattern ().arg_list[0]);
  else
    icode = code_for_vget (instance.get_arg_pattern ().arg_list[0]);

  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for loadstore functions.  */
void
loadstore::get_name (char *name, const function_instance &instance) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  strcat (name, instance.get_base_name ());
  unsigned int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  char buf[NAME_MAXLEN / 4];

  if (strcmp (instance.get_base_name (), "vlm") &&
      strcmp (instance.get_base_name (), "vsm"))
    {
      snprintf (buf, sizeof (buf), "%d", sew);
      strcat (name, buf);
    }

  strcat (name, "_");
  const char *operation_suffix =
      get_operation_suffix (instance.get_operation ());

  if (strlen (operation_suffix) > 0)
    {
      strcat (name, operation_suffix);
      strcat (name, "_");
    }

  strcat (name, mode2data_type_suffix (mode, unsigned_p, false));
  const char *pred_suffix = get_pred_func_suffix (instance.get_pred ());

  if (strlen (pred_suffix) > 0)
    {
      strcat (name, "_");
      strcat (name, pred_suffix);
    }
}

void
loadstore::get_argument_types (const function_instance &instance,
                               vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[i]);
      bool ptr_p = is_dt_ptr (instance.get_data_type_list ()[i]);
      bool c_p = is_dt_const (instance.get_data_type_list ()[i]);
      argument_types.quick_push (get_dt_t (
          instance.get_arg_pattern ().arg_list[i], unsigned_p, ptr_p, c_p));
    }
}

/* A function_base for indexed loadstore functions.  */
void
indexedloadstore::get_name (char *name, const function_instance &instance) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  strcat (name, instance.get_base_name ());
  unsigned int sew = GET_MODE_BITSIZE (
      GET_MODE_INNER (instance.get_arg_pattern ().arg_list[2]));
  char buf[8];
  snprintf (buf, sizeof (buf), "%d", sew);
  strcat (name, buf);
  strcat (name, "_");
  const char *operation_suffix =
      get_operation_suffix (instance.get_operation ());

  if (strlen (operation_suffix) > 0)
    {
      strcat (name, operation_suffix);
      strcat (name, "_");
    }

  strcat (name, mode2data_type_suffix (mode, unsigned_p, false));
  const char *pred_suffix = get_pred_func_suffix (instance.get_pred ());

  if (strlen (pred_suffix) > 0)
    {
      strcat (name, "_");
      strcat (name, pred_suffix);
    }
}

void
indexedloadstore::get_argument_types (const function_instance &instance,
                                      vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[i]);
      bool ptr_p = is_dt_ptr (instance.get_data_type_list ()[i]);
      bool c_p = is_dt_const (instance.get_data_type_list ()[i]);
      argument_types.quick_push (get_dt_t (
          instance.get_arg_pattern ().arg_list[i], unsigned_p, ptr_p, c_p));
    }
}

/* A function_base for segment functions.  */
void
segment::get_name (char *name, const function_instance &instance) const
{
  machine_mode mode =
      (strstr (instance.get_base_name (), "vlseg") != NULL ||
       strstr (instance.get_base_name (), "vlsseg") != NULL ||
       strstr (instance.get_base_name (), "vluxseg") != NULL ||
       strstr (instance.get_base_name (), "vloxseg") != NULL)
          ? instance.get_arg_pattern ().arg_list[0]
      : (strstr (instance.get_base_name (), "vsuxseg") != NULL ||
         strstr (instance.get_base_name (), "vsoxseg") != NULL)
          ? instance.get_arg_pattern ().arg_list[3]
      : (strcmp (instance.get_base_name (), "vsseg") == 0 ||
         strcmp (instance.get_base_name (), "vssseg") == 0)
          ? instance.get_arg_pattern ().arg_list[2]
          : instance.get_arg_pattern ().arg_list[1];
  bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[0]);
  
  if (strcmp (instance.get_base_name (), "vlsegff") == 0 ||
      strcmp (instance.get_base_name (), "vlseg2ff") == 0 ||
      strcmp (instance.get_base_name (), "vlseg3ff") == 0 ||
      strcmp (instance.get_base_name (), "vlseg4ff") == 0 ||
      strcmp (instance.get_base_name (), "vlseg5ff") == 0 ||
      strcmp (instance.get_base_name (), "vlseg6ff") == 0 ||
      strcmp (instance.get_base_name (), "vlseg7ff") == 0 ||
      strcmp (instance.get_base_name (), "vlseg8ff") == 0)
    strcat (name, "vlseg");
  else
    strcat (name, instance.get_base_name ());

  unsigned int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  char buf[16];

  if (strcmp (instance.get_base_name (), "vlseg") == 0 ||
      strcmp (instance.get_base_name (), "vlsseg") == 0)
    snprintf (buf, sizeof (buf), "%de%d", riscv_classify_nf (mode), sew);
  else if (strcmp (instance.get_base_name (), "vlsegff") == 0)
    snprintf (buf, sizeof (buf), "%de%dff", riscv_classify_nf (mode), sew);
  else if (strcmp (instance.get_base_name (), "vlseg2ff") == 0)
    snprintf (buf, sizeof (buf), "2e%dff", sew);
  else if (strcmp (instance.get_base_name (), "vlseg3ff") == 0)
    snprintf (buf, sizeof (buf), "3e%dff", sew);
  else if (strcmp (instance.get_base_name (), "vlseg4ff") == 0)
    snprintf (buf, sizeof (buf), "4e%dff", sew);
  else if (strcmp (instance.get_base_name (), "vlseg5ff") == 0)
    snprintf (buf, sizeof (buf), "5e%dff", sew);
  else if (strcmp (instance.get_base_name (), "vlseg6ff") == 0)
    snprintf (buf, sizeof (buf), "6e%dff", sew);
  else if (strcmp (instance.get_base_name (), "vlseg7ff") == 0)
    snprintf (buf, sizeof (buf), "7e%dff", sew);
  else if (strcmp (instance.get_base_name (), "vlseg8ff") == 0)
    snprintf (buf, sizeof (buf), "8e%dff", sew);
  else if (strstr (instance.get_base_name (), "vluxseg") != NULL ||
           strstr (instance.get_base_name (), "vloxseg") != NULL)
    {
      sew = GET_MODE_BITSIZE (GET_MODE_INNER (
          instance.get_arg_pattern ()
              .arg_list[instance.get_arg_pattern ().arg_len - 1]));

      if (strcmp (instance.get_base_name (), "vluxseg") == 0 ||
          strcmp (instance.get_base_name (), "vloxseg") == 0)
        snprintf (buf, sizeof (buf), "%dei%d", riscv_classify_nf (mode), sew);
      else
        {
          mode = instance.get_arg_pattern ().arg_list[1];
          snprintf (buf, sizeof (buf), "ei%d", sew);
        }
    }
  else if (strstr (instance.get_base_name (), "vsuxseg") != NULL ||
           strstr (instance.get_base_name (), "vsoxseg") != NULL)
    {
      sew = GET_MODE_BITSIZE (
          GET_MODE_INNER (instance.get_arg_pattern ().arg_list[2]));

      if (strcmp (instance.get_base_name (), "vsuxseg") == 0 ||
          strcmp (instance.get_base_name (), "vsoxseg") == 0)
        snprintf (buf, sizeof (buf), "%dei%d", riscv_classify_nf (mode), sew);
      else
        {
          mode = instance.get_arg_pattern ()
                     .arg_list[instance.get_arg_pattern ().arg_len - 1];
          snprintf (buf, sizeof (buf), "ei%d", sew);
        }
    }
  else if (strcmp (instance.get_base_name (), "vsseg") == 0 ||
           strcmp (instance.get_base_name (), "vssseg") == 0)
    snprintf (buf, sizeof (buf), "%de%d", riscv_classify_nf (mode), sew);
  else
    snprintf (buf, sizeof (buf), "e%d", sew);

  strcat (name, buf);
  strcat (name, "_");
  const char *operation_suffix =
      get_operation_suffix (instance.get_operation ());

  if (strlen (operation_suffix) > 0)
    {
      strcat (name, operation_suffix);
      strcat (name, "_");
    }

  strcat (name, mode2data_type_suffix (mode, unsigned_p, false));
  const char *pred_suffix = get_pred_func_suffix (instance.get_pred ());

  if (strlen (pred_suffix) > 0)
    {
      strcat (name, "_");
      strcat (name, pred_suffix);
    }
}

/* A function_base for single-width unary functions.  */
void
unop::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       instance.get_data_type_list ()[0] == DT_unsigned, false);
}

tree
unop::get_return_type (const function_instance &instance) const
{
  return get_dt_t (instance.get_arg_pattern ().arg_list[0],
                   instance.get_data_type_list ()[0] == DT_unsigned);
}

void
unop::get_argument_types (const function_instance &instance,
                          vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    argument_types.quick_push (
        get_dt_t (instance.get_arg_pattern ().arg_list[i],
                  instance.get_data_type_list ()[i] == DT_unsigned));
}

/* A function_base for single-width binary functions.  */
void
binop::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       instance.get_data_type_list ()[0] == DT_unsigned, false);
}

tree
binop::get_return_type (const function_instance &instance) const
{
  return get_dt_t (instance.get_arg_pattern ().arg_list[0],
                   instance.get_data_type_list ()[0] == DT_unsigned);
}

void
binop::get_argument_types (const function_instance &instance,
                           vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if ((instance.get_operation () == OP_vx ||
           instance.get_operation () == OP_wx ||
           instance.get_operation () == OP_vxm ||
           instance.get_operation () == OP_vf ||
           instance.get_operation () == OP_wf) &&
          i == 2)
        argument_types.quick_push (
            get_dt_t (GET_MODE_INNER (instance.get_arg_pattern ().arg_list[i]),
                      instance.get_data_type_list ()[i] == DT_unsigned));
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

/* A function_base for single-width ternary functions.  */
void
ternop::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       instance.get_data_type_list ()[0] == DT_unsigned, false);
}

tree
ternop::get_return_type (const function_instance &instance) const
{
  return get_dt_t (instance.get_arg_pattern ().arg_list[0],
                   instance.get_data_type_list ()[0] == DT_unsigned);
}

void
ternop::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if ((instance.get_operation () == OP_vx ||
           instance.get_operation () == OP_vf) &&
          i == 1)
        argument_types.quick_push (
            get_dt_t (GET_MODE_INNER (instance.get_arg_pattern ().arg_list[i]),
                      instance.get_data_type_list ()[i] == DT_unsigned));
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

/* A function_base for single-width binary functions.  */
void
reduceop::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       instance.get_data_type_list ()[0] == DT_unsigned, false,
                       true, instance.get_arg_pattern ().arg_list[1],
                       instance.get_data_type_list ()[1] == DT_unsigned, false);
}

tree
reduceop::get_return_type (const function_instance &instance) const
{
  return get_dt_t (instance.get_arg_pattern ().arg_list[0],
                   instance.get_data_type_list ()[0] == DT_unsigned);
}

void
reduceop::get_argument_types (const function_instance &instance,
                              vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    argument_types.quick_push (
        get_dt_t (instance.get_arg_pattern ().arg_list[i],
                  instance.get_data_type_list ()[i] == DT_unsigned));
}

tree
reduceop::get_mask_type (const tree &, const tree &,
                         const vec<tree> &argument_types,
                         lmul_value_index) const
{
  return lmul2mask_t (GET_MODE_INNER (TYPE_MODE (argument_types[0])),
                      mode2lmul (TYPE_MODE (argument_types[0])));
}

/* A function_base for vle functions.  */
unsigned int
vle::call_properties (const function_instance &) const
{
  return CP_READ_MEMORY;
}

tree
vle::get_return_type (const function_instance &instance) const
{
  return get_dt_t (instance.get_arg_pattern ().arg_list[0],
                   instance.get_data_type_list ()[0] == DT_unsigned);
}

rtx
vle::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vle (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vse functions.  */
unsigned int
vse::call_properties (const function_instance &) const
{
  return CP_WRITE_MEMORY;
}

rtx
vse::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  insn_code icode = code_for_vse (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vlse functions.  */
unsigned int
vlse::call_properties (const function_instance &) const
{
  return CP_READ_MEMORY;
}

tree
vlse::get_return_type (const function_instance &instance) const
{
  return get_dt_t (instance.get_arg_pattern ().arg_list[0],
                   instance.get_data_type_list ()[0] == DT_unsigned);
}

void
vlse::get_argument_types (const function_instance &instance,
                          vec<tree> &argument_types) const
{
  loadstore::get_argument_types (instance, argument_types);
  argument_types.quick_push (ptrdiff_type_node);
}

rtx
vlse::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vlse (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vsse functions.  */
unsigned int
vsse::call_properties (const function_instance &) const
{
  return CP_WRITE_MEMORY;
}

void
vsse::get_argument_types (const function_instance &instance,
                          vec<tree> &argument_types) const
{
  loadstore::get_argument_types (instance, argument_types);
  argument_types.quick_insert (1, ptrdiff_type_node);
}

rtx
vsse::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  insn_code icode = code_for_vsse (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vlm functions.  */
unsigned int
vlm::call_properties (const function_instance &) const
{
  return CP_READ_MEMORY;
}

tree
vlm::get_return_type (const function_instance &instance) const
{
  return get_dt_t (instance.get_arg_pattern ().arg_list[0],
                   instance.get_data_type_list ()[0] == DT_unsigned);
}

void
vlm::get_argument_types (const function_instance &,
                         vec<tree> &argument_types) const
{
  argument_types.quick_push (const_unsigned_int8_ptr_type_node);
}

rtx
vlm::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vlm (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vsm functions.  */
unsigned int
vsm::call_properties (const function_instance &) const
{
  return CP_WRITE_MEMORY;
}

void
vsm::get_argument_types (const function_instance &instance,
                         vec<tree> &argument_types) const
{
  argument_types.quick_push (unsigned_int8_ptr_type_node);
  argument_types.quick_push (
      get_dt_t (instance.get_arg_pattern ().arg_list[0],
                instance.get_data_type_list ()[0] == DT_unsigned));
}

rtx
vsm::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  insn_code icode = code_for_vsm (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vlxei functions.  */
unsigned int
vlxei::call_properties (const function_instance &) const
{
  return CP_READ_MEMORY;
}

tree
vlxei::get_return_type (const function_instance &instance) const
{
  return get_dt_t (instance.get_arg_pattern ().arg_list[0],
                   instance.get_data_type_list ()[0] == DT_unsigned);
}

rtx
vlxei::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = TYPE_MODE (TREE_TYPE (exp));
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[2];
  unsigned int unspec = strcmp (instance.get_base_name (), "vluxei") == 0
                            ? UNSPEC_UNORDER_INDEXED_LOAD
                            : UNSPEC_ORDER_INDEXED_LOAD;
  insn_code icode = code_for_vlxei (unspec, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vsxei functions.  */
unsigned int
vsxei::call_properties (const function_instance &) const
{
  return CP_WRITE_MEMORY;
}

rtx
vsxei::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = instance.get_arg_pattern ().arg_list[3];
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[2];
  unsigned int unspec = strcmp (instance.get_base_name (), "vsuxei") == 0
                            ? UNSPEC_UNORDER_INDEXED_STORE
                            : UNSPEC_ORDER_INDEXED_STORE;
  insn_code icode = code_for_vsxei (unspec, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vleff functions.  */
unsigned int
vleff::call_properties (const function_instance &) const
{
  return CP_READ_MEMORY | CP_RAISE_LD_EXCEPTIONS;
}

void
vleff::get_name (char *name, const function_instance &instance) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;

  strcat (name, "vle");
  unsigned int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  char buf[8];
  snprintf (buf, sizeof (buf), "%d", sew);
  strcat (name, buf);
  strcat (name, "ff");
  strcat (name, "_");
  const char *operation_suffix =
      get_operation_suffix (instance.get_operation ());

  if (strlen (operation_suffix) > 0)
    {
      strcat (name, operation_suffix);
      strcat (name, "_");
    }

  strcat (name, mode2data_type_suffix (mode, unsigned_p, false));
  const char *pred_suffix = get_pred_func_suffix (instance.get_pred ());

  if (strlen (pred_suffix) > 0)
    {
      strcat (name, "_");
      strcat (name, pred_suffix);
    }
}

tree
vleff::get_return_type (const function_instance &instance) const
{
  return get_dt_t (instance.get_arg_pattern ().arg_list[0],
                   instance.get_data_type_list ()[0] == DT_unsigned);
}

void
vleff::get_argument_types (const function_instance &instance,
                           vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[i]);
      bool ptr_p = is_dt_ptr (instance.get_data_type_list ()[i]);
      bool c_p = is_dt_const (instance.get_data_type_list ()[i]);
      argument_types.quick_push (get_dt_t (
          instance.get_arg_pattern ().arg_list[i], unsigned_p, ptr_p, c_p));
    }

  argument_types.quick_push (build_pointer_type (size_type_node));
}

gimple *
vleff::fold (const function_instance &instance, gimple_stmt_iterator *gsi_in,
             gcall *call_in) const
{
  /* split vleff (a, b, c) -> d = vleff (a, c) + b = readvl (d). */
  auto_vec<tree, 8> vargs;

  unsigned int offset = 2;

  for (unsigned int i = 0; i < gimple_call_num_args (call_in); i++)
    {
      if (i == gimple_call_num_args (call_in) - offset)
        continue;

      vargs.quick_push (gimple_call_arg (call_in, i));
    }

  gimple *repl = gimple_build_call_vec (gimple_call_fn (call_in), vargs);
  gimple_call_set_lhs (repl, gimple_call_lhs (call_in));

  tree var = create_tmp_var (size_type_node, "new_vl");
  tree tem = make_ssa_name (size_type_node);
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  function_instance *fn_instance = new function_instance ();

  snprintf (fn_instance->get_func_name (), NAME_MAXLEN, "readvl_%s",
            mode2data_type_suffix (mode, unsigned_p, false));
  hashval_t hashval = fn_instance->hash ();
  registered_function *rfn_slot =
      function_table->find_with_hash (*fn_instance, hashval);
  tree decl = rfn_slot->decl;
  gimple *g = gimple_build_call (decl, 1, gimple_call_lhs (call_in));
  gimple_call_set_lhs (g, var);
  tree indirect = fold_build2 (
      MEM_REF, size_type_node,
      gimple_call_arg (call_in, gimple_call_num_args (call_in) - offset),
      build_int_cst (build_pointer_type (size_type_node), 0));
  gassign *assign = gimple_build_assign (indirect, tem);
  gsi_insert_after (gsi_in, assign, GSI_SAME_STMT);
  gsi_insert_after (gsi_in, gimple_build_assign (tem, var), GSI_SAME_STMT);
  gsi_insert_after (gsi_in, g, GSI_SAME_STMT);

  delete fn_instance;
  return repl;
}

rtx
vleff::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vleff (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vlseg functions.  */
unsigned int
vlseg::call_properties (const function_instance &) const
{
  return CP_READ_MEMORY;
}

tree
vlseg::get_return_type (const function_instance &instance) const
{
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  machine_mode tuple_mode = instance.get_arg_pattern ().arg_list[0];
  machine_mode vector_mode = instance.get_arg_pattern ().arg_list[1];
  unsigned int nelt =
      exact_div (GET_MODE_SIZE (tuple_mode), GET_MODE_SIZE (vector_mode))
          .to_constant ();
  return get_tuple_t (vector_mode, unsigned_p, nelt);
}

void
vlseg::get_argument_types (const function_instance &instance,
                           vec<tree> &argument_types) const
{
  for (unsigned int i = 2; i < instance.get_arg_pattern ().arg_len; i++)
    {
      bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[i]);
      bool ptr_p = is_dt_ptr (instance.get_data_type_list ()[i]);
      bool c_p = is_dt_const (instance.get_data_type_list ()[i]);
      argument_types.quick_push (get_dt_t (
          instance.get_arg_pattern ().arg_list[i], unsigned_p, ptr_p, c_p));
    }
}

rtx
vlseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vlseg (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vlsegff functions.  */
unsigned int
vlsegff::call_properties (const function_instance &) const
{
  return CP_READ_MEMORY | CP_RAISE_LD_EXCEPTIONS;
}

void
vlsegff::get_argument_types (const function_instance &instance,
                             vec<tree> &argument_types) const
{
  vlseg::get_argument_types (instance, argument_types);
  argument_types.quick_push (build_pointer_type (size_type_node));
}

gimple *
vlsegff::fold (const function_instance &instance, gimple_stmt_iterator *gsi_in,
               gcall *call_in) const
{
  /* split vlsegff (a, b, c) -> d = vlsegff (a, c) + b = readvl (d). */
  auto_vec<tree, 8> vargs;
  unsigned int offset = 2;

  for (unsigned int i = 0; i < gimple_call_num_args (call_in); i++)
    {
      if (i == gimple_call_num_args (call_in) - offset)
        continue;

      vargs.quick_push (gimple_call_arg (call_in, i));
    }

  gimple *repl = gimple_build_call_vec (gimple_call_fn (call_in), vargs);
  gimple_call_set_lhs (repl, gimple_call_lhs (call_in));

  tree var = create_tmp_var (size_type_node, "new_vl");
  tree tem = make_ssa_name (size_type_node);

  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_uptr;
  function_instance *fn_instance = new function_instance ();

  snprintf (fn_instance->get_func_name (), NAME_MAXLEN, "readvl_%s",
            mode2data_type_suffix (mode, unsigned_p, false));
  hashval_t hashval = fn_instance->hash ();
  registered_function *rfn_slot =
      function_table->find_with_hash (*fn_instance, hashval);
  tree decl = rfn_slot->decl;
  gimple *g = gimple_build_call (decl, 1, gimple_call_lhs (call_in));
  gimple_call_set_lhs (g, var);
  tree indirect = fold_build2 (
      MEM_REF, size_type_node,
      gimple_call_arg (call_in, gimple_call_num_args (call_in) - offset),
      build_int_cst (build_pointer_type (size_type_node), 0));
  gassign *assign = gimple_build_assign (indirect, tem);
  gsi_insert_after (gsi_in, assign, GSI_SAME_STMT);
  gsi_insert_after (gsi_in, gimple_build_assign (tem, var), GSI_SAME_STMT);
  gsi_insert_after (gsi_in, g, GSI_SAME_STMT);

  delete fn_instance;
  return repl;
}

rtx
vlsegff::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vlsegff (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vsseg functions.  */
unsigned int
vsseg::call_properties (const function_instance &) const
{
  return CP_WRITE_MEMORY;
}

void
vsseg::get_argument_types (const function_instance &instance,
                           vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[i]);
      bool ptr_p = is_dt_ptr (instance.get_data_type_list ()[i]);
      bool c_p = is_dt_const (instance.get_data_type_list ()[i]);

      if (i == 2)
        {
          tree vector_type = get_dt_t (instance.get_arg_pattern ().arg_list[0],
                                       unsigned_p, false, false);
          unsigned int nelt =
              exact_div (
                  GET_MODE_SIZE (instance.get_arg_pattern ().arg_list[2]),
                  GET_MODE_SIZE (instance.get_arg_pattern ().arg_list[0]))
                  .to_constant ();
          argument_types.quick_push (
              get_tuple_t (TYPE_MODE (vector_type), unsigned_p, nelt));
        }
      else
        argument_types.quick_push (get_dt_t (
            instance.get_arg_pattern ().arg_list[i], unsigned_p, ptr_p, c_p));
    }
}

rtx
vsseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  insn_code icode = code_for_vsseg (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vlsseg functions.  */
void
vlsseg::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  vlseg::get_argument_types (instance, argument_types);
  argument_types.quick_push (ptrdiff_type_node);
}

rtx
vlsseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vlsseg (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vssseg functions.  */
void
vssseg::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  vsseg::get_argument_types (instance, argument_types);
  argument_types.quick_insert (1, ptrdiff_type_node);
}

rtx
vssseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  insn_code icode = code_for_vssseg (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vlxseg functions.  */
unsigned int
vlxseg::call_properties (const function_instance &) const
{
  return CP_READ_MEMORY;
}

tree
vlxseg::get_return_type (const function_instance &instance) const
{
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  machine_mode tuple_mode = instance.get_arg_pattern ().arg_list[0];
  machine_mode vector_mode = instance.get_arg_pattern ().arg_list[1];
  unsigned int nelt =
      exact_div (GET_MODE_SIZE (tuple_mode), GET_MODE_SIZE (vector_mode))
          .to_constant ();
  return get_tuple_t (vector_mode, unsigned_p, nelt);
}

void
vlxseg::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  for (unsigned int i = 2; i < instance.get_arg_pattern ().arg_len; i++)
    {
      bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[i]);
      bool ptr_p = is_dt_ptr (instance.get_data_type_list ()[i]);
      bool c_p = is_dt_const (instance.get_data_type_list ()[i]);
      argument_types.quick_push (get_dt_t (
          instance.get_arg_pattern ().arg_list[i], unsigned_p, ptr_p, c_p));
    }
}

rtx
vlxseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = TYPE_MODE (TREE_TYPE (exp));
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[3];
  unsigned int unspec = strcmp (instance.get_base_name (), "vluxseg") == 0
                            ? UNSPEC_UNORDER_INDEXED_LOAD
                            : UNSPEC_ORDER_INDEXED_LOAD;
  insn_code icode = code_for_vlxsegei (unspec, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vsxseg functions.  */
unsigned int
vsxseg::call_properties (const function_instance &) const
{
  return CP_WRITE_MEMORY;
}

void
vsxseg::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[i]);
      bool ptr_p = is_dt_ptr (instance.get_data_type_list ()[i]);
      bool c_p = is_dt_const (instance.get_data_type_list ()[i]);

      if (i == 3)
        {
          tree vector_type = get_dt_t (instance.get_arg_pattern ().arg_list[0],
                                       unsigned_p, false, false);
          unsigned int nelt =
              exact_div (
                  GET_MODE_SIZE (instance.get_arg_pattern ().arg_list[3]),
                  GET_MODE_SIZE (instance.get_arg_pattern ().arg_list[0]))
                  .to_constant ();
          argument_types.quick_push (
              get_tuple_t (TYPE_MODE (vector_type), unsigned_p, nelt));
        }
      else
        argument_types.quick_push (get_dt_t (
            instance.get_arg_pattern ().arg_list[i], unsigned_p, ptr_p, c_p));
    }
}

rtx
vsxseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = instance.get_arg_pattern ().arg_list[3];
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[2];
  unsigned int unspec = strcmp (instance.get_base_name (), "vsuxseg") == 0
                            ? UNSPEC_UNORDER_INDEXED_STORE
                            : UNSPEC_ORDER_INDEXED_STORE;
  insn_code icode = code_for_vsxsegei (unspec, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vadd functions.  */
rtx
vadd::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));

  if (instance.get_operation () == OP_vv)
    icode = code_for_vadd_vv (mode);
  else
    icode = code_for_v_vx (UNSPEC_VADD, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

rtx
vsub::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));

  if (instance.get_operation () == OP_vv)
    icode = code_for_vsub_vv (mode);
  else
    icode = code_for_v_vx (UNSPEC_VSUB, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vrsub functions.  */
rtx
vrsub::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_v_vx (UNSPEC_VRSUB, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vneg functions.  */
rtx
vneg::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_vneg_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vwadd and vwsub functions.  */
rtx
vwadd_vwsub::expand (const function_instance &instance, tree exp,
                     rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum rtx_code code1 = strcmp (instance.get_base_name (), "vwadd") == 0 ||
                           strcmp (instance.get_base_name (), "vwaddu") == 0
                       ? PLUS
                       : MINUS;
  enum rtx_code code2 = strcmp (instance.get_base_name (), "vwaddu") == 0 ||
                           strcmp (instance.get_base_name (), "vwsubu") == 0
                       ? ZERO_EXTEND
                       : SIGN_EXTEND;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vw_vv (code1, code2, mode);
  else if (instance.get_operation () == OP_vx)
    icode = code_for_vw_vx (code1, code2, mode);
  else if (instance.get_operation () == OP_wv)
    icode = code_for_vw_wv (code1, code2, mode);
  else
    icode = code_for_vw_wx (code1, code2, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vwcvt functions.  */
rtx
vwcvt::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum rtx_code code = strcmp (instance.get_base_name (), "vwcvt") == 0
                      ? SIGN_EXTEND
                      : ZERO_EXTEND;

  icode = code_for_vwcvt_x_x_v (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vsext/vzext functions.  */
rtx
vext::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum rtx_code code = strcmp (instance.get_base_name (), "vsext") == 0
                      ? SIGN_EXTEND
                      : ZERO_EXTEND;
  if (instance.get_operation () == OP_vf2)
    icode = code_for_vext_vf2 (code, mode);
  else if (instance.get_operation () == OP_vf4)
    icode = code_for_vext_vf4 (code, mode);
  else
    icode = code_for_vext_vf8 (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vadc functions.  */
rtx
vadc::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vvm)
    icode = code_for_vadc_vvm (mode);
  else
    icode = code_for_v_vxm (UNSPEC_VADC, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vsbc functions.  */
rtx
vsbc::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vvm)
    icode = code_for_vsbc_vvm (mode);
  else
    icode = code_for_v_vxm (UNSPEC_VSBC, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmadc functions.  */
void
vmadc::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       instance.get_data_type_list ()[0] == DT_unsigned, false,
                       true, instance.get_arg_pattern ().arg_list[1],
                       instance.get_data_type_list ()[1] == DT_unsigned, false);
}

rtx
vmadc::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];

  if (instance.get_operation () == OP_vvm)
    icode = code_for_vmadc_vvm (mode);
  else if (instance.get_operation () == OP_vv)
    icode = code_for_vmadc_vv (mode);
  else if (instance.get_operation () == OP_vxm)
    icode = code_for_v_vxm (UNSPEC_VMADC, mode);
  else
    icode = code_for_v_vx (UNSPEC_VMADC, mode);

  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmsbc functions.  */
void
vmsbc::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       instance.get_data_type_list ()[0] == DT_unsigned, false,
                       true, instance.get_arg_pattern ().arg_list[1],
                       instance.get_data_type_list ()[1] == DT_unsigned, false);
}

rtx
vmsbc::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];

  if (instance.get_operation () == OP_vvm)
    icode = code_for_vmsbc_vvm (mode);
  else if (instance.get_operation () == OP_vv)
    icode = code_for_vmsbc_vv (mode);
  else if (instance.get_operation () == OP_vxm)
    icode = code_for_v_vxm (UNSPEC_VMSBC, mode);
  else
    icode = code_for_v_vx (UNSPEC_VMSBC, mode);

  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vlogic functions.  */
rtx
vlogic::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum rtx_code code = strcmp (instance.get_base_name (), "vand") == 0  ? AND
                  : strcmp (instance.get_base_name (), "vor") == 0 ? IOR
                                                                   : XOR;
  int vxcode = code == AND   ? UNSPEC_VAND
               : code == IOR ? UNSPEC_VIOX
                             : UNSPEC_VXOR;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (code, mode);
  else
    icode = code_for_v_vx (vxcode, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vnot functions.  */
rtx
vnot::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));

  icode = code_for_vnot_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vshift functions.  */
void
vshift::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if ((instance.get_operation () == OP_vx) && i == 2)
        argument_types.quick_push (size_type_node);
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

rtx
vshift::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum rtx_code code = strcmp (instance.get_base_name (), "vsll") == 0   ? ASHIFT
                  : strcmp (instance.get_base_name (), "vsrl") == 0 ? LSHIFTRT
                                                                    : ASHIFTRT;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (code, mode);
  else
    icode = code_for_v_vx (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vnshift functions.  */
void
vnshift::get_argument_types (const function_instance &instance,
                             vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if ((instance.get_operation () == OP_wx) && i == 2)
        argument_types.quick_push (size_type_node);
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

rtx
vnshift::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum rtx_code code =
      strcmp (instance.get_base_name (), "vnsrl") == 0 ? LSHIFTRT : ASHIFTRT;
  if (instance.get_operation () == OP_wv)
    icode = code_for_vn_wv (code, mode);
  else
    icode = code_for_vn_wx (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vncvt functions.  */
rtx
vncvt::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_vncvt_x_x_w (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vcmp functions.  */
void
vcmp::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       instance.get_data_type_list ()[0] == DT_unsigned, false,
                       true, instance.get_arg_pattern ().arg_list[1],
                       instance.get_data_type_list ()[1] == DT_unsigned, false);
}

rtx
vcmp::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum rtx_code code = strcmp (instance.get_base_name (), "vmseq") == 0    ? EQ
                  : strcmp (instance.get_base_name (), "vmsne") == 0  ? NE
                  : strcmp (instance.get_base_name (), "vmslt") == 0  ? LT
                  : strcmp (instance.get_base_name (), "vmsltu") == 0 ? LTU
                  : strcmp (instance.get_base_name (), "vmsgt") == 0  ? GT
                  : strcmp (instance.get_base_name (), "vmsgtu") == 0 ? GTU
                  : strcmp (instance.get_base_name (), "vmsle") == 0  ? LE
                  : strcmp (instance.get_base_name (), "vmsleu") == 0 ? LEU
                  : strcmp (instance.get_base_name (), "vmsge") == 0  ? GE
                                                                      : GEU;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vms_vv (code, mode);
  else
    icode = code_for_vms_vx (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmin/vmax functions.  */
rtx
vmin_vmax::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum rtx_code code = strcmp (instance.get_base_name (), "vmin") == 0    ? SMIN
                  : strcmp (instance.get_base_name (), "vminu") == 0 ? UMIN
                  : strcmp (instance.get_base_name (), "vmax") == 0  ? SMAX
                                                                     : UMAX;
  int unspec_code = code == SMIN   ? UNSPEC_VMIN
                    : code == UMIN ? UNSPEC_VMINU
                    : code == SMAX ? UNSPEC_VMAX
                                   : UNSPEC_VMAXU;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (code, mode);
  else
    icode = code_for_v_vx (unspec_code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmul functions.  */
rtx
vmul::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmul_vv (mode);
  else
    icode = code_for_v_vx (UNSPEC_VMUL, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmulh functions.  */
rtx
vmulh::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  int unspec_code = strcmp (instance.get_base_name (), "vmulh") == 0
                        ? UNSPEC_VMULH
                        : UNSPEC_VMULHU;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmulh_vv (unspec_code, mode);
  else
    icode = code_for_v_vx (unspec_code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmulhsu functions.  */
rtx
vmulhsu::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmulhsu_vv (mode);
  else
    icode = code_for_v_vx (UNSPEC_VMULHSU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vdiv functions.  */
rtx
vdiv::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum rtx_code code = strcmp (instance.get_base_name (), "vdiv") == 0    ? DIV
                  : strcmp (instance.get_base_name (), "vdivu") == 0 ? UDIV
                  : strcmp (instance.get_base_name (), "vrem") == 0  ? MOD
                                                                     : UMOD;
  int unspec_code = code == DIV    ? UNSPEC_VDIV
                    : code == UDIV ? UNSPEC_VDIVU
                    : code == MOD  ? UNSPEC_VREM
                                   : UNSPEC_VREMU;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (code, mode);
  else
    icode = code_for_v_vx (unspec_code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vwmul functions.  */
rtx
vwmul::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum rtx_code code = strcmp (instance.get_base_name (), "vwmul") == 0
                      ? SIGN_EXTEND
                      : ZERO_EXTEND;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vwmul_vv (code, mode);
  else
    icode = code_for_vwmul_vx (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vwmulsusu functions.  */
rtx
vwmulsu::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  if (instance.get_operation () == OP_vv)
    icode = code_for_vwmulsu_vv (mode);
  else
    icode = code_for_vwmulsu_vx (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vimac functions.  */
rtx
vimac::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  unsigned int unspec =
      strcmp (instance.get_base_name (), "vmacc") == 0    ? UNSPEC_MACC
      : strcmp (instance.get_base_name (), "vnmsac") == 0 ? UNSPEC_NMSAC
      : strcmp (instance.get_base_name (), "vmadd") == 0  ? UNSPEC_MADD
                                                          : UNSPEC_NMSUB;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (unspec, mode);
  else
    icode = code_for_v_vx (unspec, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vwmacc functions.  */
rtx
vwmacc::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum rtx_code code = strcmp (instance.get_base_name (), "vwmacc") == 0
                      ? SIGN_EXTEND
                      : ZERO_EXTEND;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vwmacc_vv (code, mode);
  else
    icode = code_for_vwmacc_vx (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vwmaccsu functions.  */
rtx
vwmaccsu::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  if (instance.get_operation () == OP_vv)
    icode = code_for_vwmaccsu_vv (mode);
  else
    icode = code_for_vwmaccsu_vx (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vwmaccus functions.  */
rtx
vwmaccus::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vwmaccus_vx (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmerge functions.  */
void
vmerge::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if (instance.get_operation () == OP_vxm && i == 2)
        argument_types.quick_push (
            get_dt_t (GET_MODE_INNER (instance.get_arg_pattern ().arg_list[i]),
                      instance.get_data_type_list ()[i] == DT_unsigned));
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

size_t
vmerge::get_position_of_dest_arg (predication_index) const
{
  return 1;
}

rtx
vmerge::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vvm)
    icode = code_for_vmerge_vvm (mode);
  else
    icode = code_for_v_vxm (UNSPEC_VMERGE, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmv functions.  */
void
vmv::get_argument_types (const function_instance &instance,
                         vec<tree> &argument_types) const
{
  if (instance.get_operation () == OP_v_x)
    argument_types.quick_push (
        get_dt_t (instance.get_arg_pattern ().arg_list[1],
                  instance.get_data_type_list ()[1] == DT_unsigned));
  else
    argument_types.quick_push (
        get_dt_t (instance.get_arg_pattern ().arg_list[0],
                  instance.get_data_type_list ()[0] == DT_unsigned));
}

rtx
vmv::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_v_x)
    icode = code_for_v_v_x (UNSPEC_VMV, mode);
  else
    icode = code_for_vmv_v_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vred functions.  */
rtx
vred::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  unsigned int unspec =
      strcmp (instance.get_base_name (), "vredsum") == 0    ? UNSPEC_REDUC_SUM
      : strcmp (instance.get_base_name (), "vredmax") == 0  ? UNSPEC_REDUC_MAX
      : strcmp (instance.get_base_name (), "vredmaxu") == 0 ? UNSPEC_REDUC_MAXU
      : strcmp (instance.get_base_name (), "vredmin") == 0  ? UNSPEC_REDUC_MIN
      : strcmp (instance.get_base_name (), "vredminu") == 0 ? UNSPEC_REDUC_MINU
      : strcmp (instance.get_base_name (), "vredand") == 0  ? UNSPEC_REDUC_AND
      : strcmp (instance.get_base_name (), "vredor") == 0   ? UNSPEC_REDUC_OR
                                                            : UNSPEC_REDUC_XOR;
  icode = code_for_vred_vs (unspec, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vwredsum functions.  */
rtx
vwredsum::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum rtx_code code = strcmp (instance.get_base_name (), "vwredsum") == 0
                      ? SIGN_EXTEND
                      : ZERO_EXTEND;
  icode = code_for_vwredsum_vs (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfred functions.  */
unsigned int
vfred::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfred::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  unsigned int unspec = strcmp (instance.get_base_name (), "vfredosum") == 0
                            ? UNSPEC_REDUC_ORDERED_SUM
                        : strcmp (instance.get_base_name (), "vfredusum") == 0
                            ? UNSPEC_REDUC_UNORDERED_SUM
                        : strcmp (instance.get_base_name (), "vfredmax") == 0
                            ? UNSPEC_REDUC_MAX
                            : UNSPEC_REDUC_MIN;
  icode = code_for_vfred_vs (unspec, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwredosum functions.  */
unsigned int
vfwredosum::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwredosum::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfwredosum_vs (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwredusum functions.  */
unsigned int
vfwredusum::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwredusum::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfwredusum_vs (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmlogic functions.  */
rtx
vmlogic::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum rtx_code code = strcmp (instance.get_base_name (), "vmand") == 0  ? AND
                  : strcmp (instance.get_base_name (), "vmor") == 0 ? IOR
                                                                    : XOR;
  insn_code icode = code_for_vm_mm (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmnlogic functions.  */
rtx
vmnlogic::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum rtx_code code = strcmp (instance.get_base_name (), "vmnand") == 0  ? AND
                  : strcmp (instance.get_base_name (), "vmnor") == 0 ? IOR
                                                                     : XOR;
  insn_code icode = code_for_vmn_mm (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmlogicn functions.  */
rtx
vmlogicn::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum rtx_code code = strcmp (instance.get_base_name (), "vmandn") == 0 ? AND : IOR;
  insn_code icode = code_for_vmnot_mm (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmmv functions.  */
rtx
vmmv::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vmmv_m (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmnot functions.  */
rtx
vmnot::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vmnot_m (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmclr functions.  */
rtx
vmclr::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vmclr_m (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmset functions.  */
rtx
vmset::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vmset_m (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vcpop functions.  */
tree
vcpop::get_return_type (const function_instance &) const
{
  return long_unsigned_type_node;
}

rtx
vcpop::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  insn_code icode = code_for_vcpop_m (mode, Pmode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfirst functions.  */
tree
vfirst::get_return_type (const function_instance &) const
{
  return long_integer_type_node;
}

rtx
vfirst::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  insn_code icode = code_for_vfirst_m (mode, Pmode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmsetbit functions.  */
rtx
vmsetbit::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  unsigned int unspec =
      strcmp (instance.get_base_name (), "vmsbf") == 0   ? UNSPEC_SBF
      : strcmp (instance.get_base_name (), "vmsif") == 0 ? UNSPEC_SIF
                                                         : UNSPEC_SOF;
  insn_code icode = code_for_vm_m (unspec, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for viota functions.  */
rtx
viota::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_viota_m (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vid functions.  */
rtx
vid::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_vid_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmv_x_s functions.  */
void
vmv_x_s::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       instance.get_data_type_list ()[0] == DT_unsigned, false,
                       true, instance.get_arg_pattern ().arg_list[1],
                       instance.get_data_type_list ()[1] == DT_unsigned, false);
}

rtx
vmv_x_s::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  insn_code icode = code_for_vmv_x_s (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vmv_s_x functions.  */
rtx
vmv_s_x::expand (const function_instance &instance, tree exp, rtx target) const
{

  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_v_s_x (UNSPEC_VMVS, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfmv_f_s functions.  */
void
vfmv_f_s::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       instance.get_data_type_list ()[0] == DT_unsigned, false,
                       true, instance.get_arg_pattern ().arg_list[1],
                       instance.get_data_type_list ()[1] == DT_unsigned, false);
}

rtx
vfmv_f_s::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  insn_code icode = code_for_vfmv_f_s (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfmv_s_f functions.  */
rtx
vfmv_s_f::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vfmv_s_f (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vslide functions.  */
void
vslide::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if (i == 2)
        argument_types.quick_push (size_type_node);
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

rtx
vslide::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  unsigned int unspec = strcmp (instance.get_base_name (), "vslideup") == 0
                            ? UNSPEC_SLIDEUP
                            : UNSPEC_SLIDEDOWN;
  icode = code_for_vslide_vx (unspec, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vslide1 functions.  */
rtx
vslide1::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  unsigned int unspec = strcmp (instance.get_base_name (), "vslide1up") == 0
                            ? UNSPEC_SLIDE1UP
                            : UNSPEC_SLIDE1DOWN;
  icode = code_for_vslide1_vx (unspec, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vslide1 functions.  */
rtx
vfslide1::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  unsigned int unspec = strcmp (instance.get_base_name (), "vfslide1up") == 0
                            ? UNSPEC_SLIDE1UP
                            : UNSPEC_SLIDE1DOWN;
  icode = code_for_vfslide1_vf (unspec, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vrgather functions.  */
void
vrgather::get_argument_types (const function_instance &instance,
                              vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if ((instance.get_operation () == OP_vx) && i == 2)
        argument_types.quick_push (size_type_node);
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

rtx
vrgather::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_vrgather_vv (mode);
  else
    icode = code_for_vrgather_vx (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vrgather functions.  */
rtx
vrgatherei16::expand (const function_instance &instance, tree exp,
                      rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_vrgatherei16_vv (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

size_t
vcompress::get_position_of_dest_arg (predication_index) const
{
  return 1;
}

rtx
vcompress::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  insn_code icode = code_for_vcompress_vm (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vsadd functions.  */
rtx
vsadd::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (SS_PLUS, mode);
  else
    icode = code_for_v_vx (UNSPEC_VSADD, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vsaddu functions.  */
rtx
vsaddu::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (US_PLUS, mode);
  else
    icode = code_for_v_vx (UNSPEC_VSADDU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vaadd functions.  */
rtx
vaadd::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_AADD, mode);
  else
    icode = code_for_v_vx (UNSPEC_VAADD, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vaaddu functions.  */
rtx
vaaddu::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_AADDU, mode);
  else
    icode = code_for_v_vx (UNSPEC_VAADDU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vssub functions.  */
rtx
vssub::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (SS_MINUS, mode);
  else
    icode = code_for_v_vx (UNSPEC_VSSUB, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vssubu functions.  */
rtx
vssubu::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (US_MINUS, mode);
  else
    icode = code_for_v_vx (UNSPEC_VSSUBU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vasub functions.  */
rtx
vasub::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_ASUB, mode);
  else
    icode = code_for_v_vx (UNSPEC_VASUB, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vasubu functions.  */
rtx
vasubu::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_ASUBU, mode);
  else
    icode = code_for_v_vx (UNSPEC_VASUBU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vsshift functions.  */
void
vsshift::get_argument_types (const function_instance &instance,
                             vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if ((instance.get_operation () == OP_vx) && i == 2)
        argument_types.quick_push (size_type_node);
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

rtx
vsshift::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  int unspec = strcmp (instance.get_base_name (), "vssrl") == 0 ? UNSPEC_SSRL
                                                                : UNSPEC_SSRA;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (unspec, mode);
  else
    icode = code_for_v_vx (unspec, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vsmul functions.  */
rtx
vsmul::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_SMUL, mode);
  else
    icode = code_for_v_vx (UNSPEC_VSMUL, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vnclip functions.  */
void
vnclip::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if ((instance.get_operation () == OP_wx) && i == 2)
        argument_types.quick_push (size_type_node);
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

rtx
vnclip::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_wv)
    icode = code_for_vn_wv (UNSPEC_SIGNED_CLIP, mode);
  else
    icode = code_for_vn_wx (UNSPEC_SIGNED_CLIP, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vnclipu functions.  */
void
vnclipu::get_argument_types (const function_instance &instance,
                             vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if ((instance.get_operation () == OP_wx) && i == 2)
        argument_types.quick_push (size_type_node);
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

rtx
vnclipu::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_wv)
    icode = code_for_vn_wv (UNSPEC_UNSIGNED_CLIP, mode);
  else
    icode = code_for_vn_wx (UNSPEC_UNSIGNED_CLIP, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfadd,vfsub,vfmul,vfdiv... functions.  */
unsigned int
vfoptab::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfoptab::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum rtx_code code = strcmp (instance.get_base_name (), "vfadd") == 0   ? PLUS
                  : strcmp (instance.get_base_name (), "vfsub") == 0 ? MINUS
                  : strcmp (instance.get_base_name (), "vfmul") == 0 ? MULT
                  : strcmp (instance.get_base_name (), "vfdiv") == 0 ? DIV
                  : strcmp (instance.get_base_name (), "vfmax") == 0 ? SMAX
                  : strcmp (instance.get_base_name (), "vfmin") == 0 ? SMIN
                                                                     : UNKNOWN;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (code, mode);
  else
    icode = code_for_vf_vf (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfrsub and vfrdiv functions.  */
unsigned int
vfrsub_div::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfrsub_div::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum rtx_code code =
      strcmp (instance.get_base_name (), "vfrsub") == 0 ? MINUS : DIV;
  icode = code_for_vfr_vf (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfneg functions.  */
unsigned int
vfneg::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfneg::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_vfneg_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwadd and vfwsub functions.  */
unsigned int
vfwadd_vwsub::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwadd_vwsub::expand (const function_instance &instance, tree exp,
                      rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum rtx_code code =
      strcmp (instance.get_base_name (), "vfwadd") == 0 ? PLUS : MINUS;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfw_vv (code, mode);
  else if (instance.get_operation () == OP_vf)
    icode = code_for_vfw_vf (code, mode);
  else if (instance.get_operation () == OP_wv)
    icode = code_for_vfw_wv (code, mode);
  else
    icode = code_for_vfw_wf (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwmul functions.  */
unsigned int
vfwmul::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwmul::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfwmul_vv (mode);
  else
    icode = code_for_vfwmul_vf (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfmac functions.  */
unsigned int
vfmac::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfmac::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  unsigned int unspec =
      strcmp (instance.get_base_name (), "vfmacc") == 0    ? UNSPEC_MACC
      : strcmp (instance.get_base_name (), "vfnmacc") == 0 ? UNSPEC_NMACC
      : strcmp (instance.get_base_name (), "vfmsac") == 0  ? UNSPEC_MSAC
      : strcmp (instance.get_base_name (), "vfnmsac") == 0 ? UNSPEC_NMSAC
      : strcmp (instance.get_base_name (), "vfmadd") == 0  ? UNSPEC_MADD
      : strcmp (instance.get_base_name (), "vfnmadd") == 0 ? UNSPEC_NMADD
      : strcmp (instance.get_base_name (), "vfmsub") == 0  ? UNSPEC_MSUB
                                                           : UNSPEC_NMSUB;

  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (unspec, mode);
  else
    icode = code_for_vf_vf (unspec, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwmacc functions.  */
unsigned int
vfwmacc::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwmacc::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfwmacc_vv (mode);
  else
    icode = code_for_vfwmacc_vf (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwnmacc functions.  */
unsigned int
vfwnmacc::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwnmacc::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfwnmacc_vv (mode);
  else
    icode = code_for_vfwnmacc_vf (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwmsac functions.  */
unsigned int
vfwmsac::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwmsac::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfwmsac_vv (mode);
  else
    icode = code_for_vfwmsac_vf (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwnmsac functions.  */
unsigned int
vfwnmsac::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwnmsac::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfwnmsac_vv (mode);
  else
    icode = code_for_vfwnmsac_vf (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfsqrt functions.  */
unsigned int
vfsqrt::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfsqrt::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_vfsqrt_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfsqrt7 and vfrec7 functions.  */
unsigned int
vfsqrt7_rec7::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfsqrt7_rec7::expand (const function_instance &instance, tree exp,
                      rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  int unspec = strcmp (instance.get_base_name (), "vfrsqrt7") == 0
                   ? UNSPEC_RSQRT7
                   : UNSPEC_REC7;
  icode = code_for_vf_v (unspec, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfsgnj, vfsgnjn and vfsgnjx functions.  */
unsigned int
vfsgnj_all::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfsgnj_all::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  int unspec =
      strcmp (instance.get_base_name (), "vfsgnj") == 0    ? UNSPEC_COPYSIGN
      : strcmp (instance.get_base_name (), "vfsgnjn") == 0 ? UNSPEC_NCOPYSIGN
      : strcmp (instance.get_base_name (), "vfsgnjx") == 0 ? UNSPEC_XORSIGN
                                                           : -1;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfsgnj_vv (unspec, mode);
  else
    icode = code_for_vfsgnj_vf (unspec, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfabs functions.  */
unsigned int
vfabs::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfabs::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_vfabs_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfcmp functions.  */
void
vfcmp::get_name (char *name, const function_instance &instance) const
{
  joint_function_name (name, instance, instance.get_arg_pattern ().arg_list[0],
                       false, false, true,
                       instance.get_arg_pattern ().arg_list[1], false, false);
}

unsigned int
vfcmp::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfcmp::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum rtx_code code = strcmp (instance.get_base_name (), "vmfeq") == 0    ? EQ
                  : strcmp (instance.get_base_name (), "vmfne") == 0  ? NE
                  : strcmp (instance.get_base_name (), "vmflt") == 0  ? LT
                  : strcmp (instance.get_base_name (), "vmfltu") == 0 ? LTU
                  : strcmp (instance.get_base_name (), "vmfgt") == 0  ? GT
                  : strcmp (instance.get_base_name (), "vmfgtu") == 0 ? GTU
                  : strcmp (instance.get_base_name (), "vmfle") == 0  ? LE
                  : strcmp (instance.get_base_name (), "vmfleu") == 0 ? LEU
                  : strcmp (instance.get_base_name (), "vmfge") == 0  ? GE
                                                                      : GEU;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmf_vv (code, mode);
  else
    icode = code_for_vmf_vf (code, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfclass functions.  */
rtx
vfclass::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfclass_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfmerge functions.  */
void
vfmerge::get_argument_types (const function_instance &instance,
                             vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if (i == 2)
        argument_types.quick_push (
            get_dt_t (GET_MODE_INNER (instance.get_arg_pattern ().arg_list[i]),
                      instance.get_data_type_list ()[i] == DT_unsigned));
      else
        argument_types.quick_push (
            get_dt_t (instance.get_arg_pattern ().arg_list[i],
                      instance.get_data_type_list ()[i] == DT_unsigned));
    }
}

size_t
vfmerge::get_position_of_dest_arg (predication_index) const
{
  return 1;
}

rtx
vfmerge::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_vfmerge_vfm (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfmv functions.  */
rtx
vfmv::expand (const function_instance &instance, tree exp, rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  if (instance.get_operation () == OP_v_f)
    icode = code_for_vfmv_v_f (mode);
  else
    icode = code_for_vmv_v_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfcvt_x_f_v functions.  */
unsigned int
vfcvt_f2i::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfcvt_f2i::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfcvt_x_f_v (mode, UNSPEC_FLOAT_TO_SIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfcvt_xu_f_v functions.  */
unsigned int
vfcvt_f2u::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfcvt_f2u::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfcvt_x_f_v (mode, UNSPEC_FLOAT_TO_UNSIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfcvt_rtz_x_f_v functions.  */
unsigned int
vfcvt_rtz_f2i::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfcvt_rtz_f2i::expand (const function_instance &instance, tree exp,
                       rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfcvt_rtz_x_f_v (mode, FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfcvt_rtz_xu_f_v functions.  */
unsigned int
vfcvt_rtz_f2u::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfcvt_rtz_f2u::expand (const function_instance &instance, tree exp,
                       rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfcvt_rtz_x_f_v (mode, UNSIGNED_FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfcvt_f_x_v functions.  */
unsigned int
vfcvt_i2f::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfcvt_i2f::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  icode = code_for_vfcvt_f_x_v (mode, FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfcvt_f_xu_v functions.  */
unsigned int
vfcvt_u2f::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfcvt_u2f::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  icode = code_for_vfcvt_f_x_v (mode, UNSIGNED_FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwcvt_x_f_v functions.  */
unsigned int
vfwcvt_f2i::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwcvt_f2i::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfwcvt_x_f_v (mode, UNSPEC_FLOAT_TO_SIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwcvt_xu_f_v functions.  */
unsigned int
vfwcvt_f2u::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwcvt_f2u::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfwcvt_x_f_v (mode, UNSPEC_FLOAT_TO_UNSIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwcvt_rtz_x_f_v functions.  */
unsigned int
vfwcvt_rtz_f2i::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwcvt_rtz_f2i::expand (const function_instance &instance, tree exp,
                        rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfwcvt_rtz_x_f_v (mode, FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwcvt_rtz_xu_f_v functions.  */
unsigned int
vfwcvt_rtz_f2u::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwcvt_rtz_f2u::expand (const function_instance &instance, tree exp,
                        rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfwcvt_rtz_x_f_v (mode, UNSIGNED_FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwcvt_f_x_v functions.  */
unsigned int
vfwcvt_i2f::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwcvt_i2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfwcvt_f_x_v (mode, FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwcvt_f_xu_v functions.  */
unsigned int
vfwcvt_u2f::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwcvt_u2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfwcvt_f_x_v (mode, UNSIGNED_FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfwcvt_f_f_v functions.  */
unsigned int
vfwcvt_f2f::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfwcvt_f2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  icode = code_for_vfwcvt_f_f_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfncvt_x_f_w functions.  */
unsigned int
vfncvt_f2i::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfncvt_f2i::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  icode = code_for_vfncvt_x_f_w (mode, UNSPEC_FLOAT_TO_SIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfncvt_xu_f_w functions.  */
unsigned int
vfncvt_f2u::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfncvt_f2u::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  icode = code_for_vfncvt_x_f_w (mode, UNSPEC_FLOAT_TO_UNSIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfncvt_rtz_x_f_w functions.  */
unsigned int
vfncvt_rtz_f2i::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfncvt_rtz_f2i::expand (const function_instance &instance, tree exp,
                        rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  icode = code_for_vfncvt_rtz_x_f_w (mode, FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfncvt_rtz_xu_f_w functions.  */
unsigned int
vfncvt_rtz_f2u::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfncvt_rtz_f2u::expand (const function_instance &instance, tree exp,
                        rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  icode = code_for_vfncvt_rtz_x_f_w (mode, UNSIGNED_FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfncvt_f_x_w functions.  */
unsigned int
vfncvt_i2f::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfncvt_i2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  icode = code_for_vfncvt_f_x_w (mode, FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfncvt_f_xu_w functions.  */
unsigned int
vfncvt_u2f::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfncvt_u2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  icode = code_for_vfncvt_f_x_w (mode, UNSIGNED_FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfncvt_f_f_w functions.  */
unsigned int
vfncvt_f2f::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfncvt_f2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_vfncvt_f_f_w (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function_base for vfncvt_rod_f_f_w functions.  */
unsigned int
vfncvt_f2rodf::call_properties (const function_instance &) const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

rtx
vfncvt_f2rodf::expand (const function_instance &instance, tree exp,
                       rtx target) const
{
  insn_code icode;
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  icode = code_for_vfncvt_rod_f_f_w (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* Non-tuple type segement load/store */

static void
push_argment_for_segment_load (const function_instance &instance,
                               vec<tree> &argument_types, unsigned int nf,
                               bool indexed_p)
{
  unsigned int offset = indexed_p ? 1 : 0;
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  for (unsigned int i = 0; i < nf; i++)
    argument_types.quick_push (get_dt_t (instance.get_arg_pattern ().arg_list[offset], unsigned_p, true, false));
  
  if (instance.get_pred () == PRED_m)
    {
      for (unsigned int i = 0; i < nf; i++)
        argument_types.quick_push (get_dt_t (instance.get_arg_pattern ().arg_list[offset], unsigned_p, false, false));
    }
  argument_types.quick_push (get_dt_t (instance.get_arg_pattern ().arg_list[offset + 1], unsigned_p, true, true));
  if (indexed_p)
    argument_types.quick_push (get_dt_t (instance.get_arg_pattern ().arg_list[offset + 2], true, false, false));
}

static gimple *
fold_non_tuple_segment_load (
    const function_instance &instance, gimple_stmt_iterator *gsi_in,
    gcall *call_in, unsigned int nf, bool ff)
{
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  tree vector_type = get_dt_t (instance.get_arg_pattern ().arg_list[0], unsigned_p, false, false);
  tree tuple_type = get_tuple_t (TYPE_MODE (vector_type), unsigned_p, nf);
  tree tuple = create_tmp_var (tuple_type, "tuple");
  auto_vec<tree, 16> vargs;

  if (instance.get_pred () != PRED_void
    && instance.get_pred () != PRED_tama
    && instance.get_pred () != PRED_ta)
    {
      for (unsigned int i = 0; i < nf; i++)
        {
          tree rhs_vector;
          if (instance.get_pred () != PRED_m)
            {
              rhs_vector = create_tmp_var (vector_type);
              tree indirect = fold_build2 (MEM_REF, vector_type, gimple_call_arg (call_in, i),
                    build_int_cst (build_pointer_type (vector_type), 0));
              gsi_insert_before (gsi_in, gimple_build_assign (rhs_vector, indirect), GSI_SAME_STMT);
            }
          else
            rhs_vector = gimple_call_arg (call_in, i + nf + 1);
          
          tree field = tuple_type_field (TREE_TYPE (tuple));
          tree lhs_array = build3 (COMPONENT_REF, TREE_TYPE (field), tuple,
                                   field, NULL_TREE);
          tree lhs_vector =
              build4 (ARRAY_REF, TREE_TYPE (rhs_vector), lhs_array,
                      size_int (i), NULL_TREE, NULL_TREE);
          gassign *assign = gimple_build_assign (lhs_vector, rhs_vector);
          gsi_insert_before (gsi_in, assign, GSI_SAME_STMT);
        }
    }
  
  if (instance.get_pred () == PRED_tama)
    {
      /* push a mask. */
      vargs.quick_push (gimple_call_arg (call_in, nf));
    }
  if (instance.get_pred () == PRED_m
    || instance.get_pred () == PRED_tamu
    || instance.get_pred () == PRED_tuma
    || instance.get_pred () == PRED_tumu)
    {
      /* push a mask. */
      vargs.quick_push (gimple_call_arg (call_in, nf));
      /* push a tuple. */
      vargs.quick_push (tuple);
    }
  if (instance.get_pred () == PRED_tu)
    {
      /* push a tuple. */
      vargs.quick_push (tuple);
    }
    
  if (strstr (instance.get_base_name (), "vlseg") != NULL && !ff)
    vargs.quick_push (gimple_call_arg (call_in, gimple_call_num_args (call_in) - 2));
  else
    {
      vargs.quick_push (gimple_call_arg (call_in, gimple_call_num_args (call_in) - 3));
      vargs.quick_push (gimple_call_arg (call_in, gimple_call_num_args (call_in) - 2));
    }
  /* push the vl. */
  vargs.quick_push (gimple_call_arg (call_in, gimple_call_num_args (call_in) - 1));
  
  function_instance *fn_instance = new function_instance ();
  char buff[16];
  
  if (strstr (instance.get_base_name (), "vlseg") != NULL)
    {
      if (ff)
        snprintf (buff, sizeof (buff), "vlseg%de%dff", nf, GET_MODE_BITSIZE (GET_MODE_INNER (TYPE_MODE (vector_type))));
      else
        snprintf (buff, sizeof (buff), "vlseg%de%d", nf, GET_MODE_BITSIZE (GET_MODE_INNER (TYPE_MODE (vector_type))));
    }
  else if (strstr (instance.get_base_name (), "vlsseg") != NULL)
    snprintf (buff, sizeof (buff), "vlsseg%de%d", nf, GET_MODE_BITSIZE (GET_MODE_INNER (TYPE_MODE (vector_type))));
  else if (strstr (instance.get_base_name (), "vluxseg") != NULL)
    {
      machine_mode indexed_mode = instance.get_arg_pattern ().arg_list[instance.get_arg_pattern ().arg_len - 1];
      snprintf (buff, sizeof (buff), "vluxseg%dei%d", nf, GET_MODE_BITSIZE (GET_MODE_INNER (indexed_mode)));
    }
  else if (strstr (instance.get_base_name (), "vloxseg") != NULL)
    {
      machine_mode indexed_mode = instance.get_arg_pattern ().arg_list[instance.get_arg_pattern ().arg_len - 1];
      snprintf (buff, sizeof (buff), "vloxseg%dei%d", nf, GET_MODE_BITSIZE (GET_MODE_INNER (indexed_mode)));
    }
  else
    gcc_unreachable ();
  

  if (instance.get_pred () == PRED_void)
    snprintf (
        fn_instance->get_func_name (), NAME_MAXLEN, "%s_v_%s", buff,
        mode2data_type_suffix (TYPE_MODE (tuple_type), unsigned_p, false));
  else if (instance.get_pred () == PRED_ta)
    snprintf (
        fn_instance->get_func_name (), NAME_MAXLEN, "%s_v_%s_ta", buff,
        mode2data_type_suffix (TYPE_MODE (tuple_type), unsigned_p, false));
  else if (instance.get_pred () == PRED_tu)
    snprintf (
        fn_instance->get_func_name (), NAME_MAXLEN, "%s_v_%s_tu", buff,
        mode2data_type_suffix (TYPE_MODE (tuple_type), unsigned_p, false));
  else if (instance.get_pred () == PRED_tama)
    snprintf (
        fn_instance->get_func_name (), NAME_MAXLEN, "%s_v_%s_tama", buff,
        mode2data_type_suffix (TYPE_MODE (tuple_type), unsigned_p, false));
  else if (instance.get_pred () == PRED_tamu)
    snprintf (
        fn_instance->get_func_name (), NAME_MAXLEN, "%s_v_%s_tamu", buff,
        mode2data_type_suffix (TYPE_MODE (tuple_type), unsigned_p, false));
  else if (instance.get_pred () == PRED_tuma)
    snprintf (
        fn_instance->get_func_name (), NAME_MAXLEN, "%s_v_%s_tuma", buff,
        mode2data_type_suffix (TYPE_MODE (tuple_type), unsigned_p, false));
  else if (instance.get_pred () == PRED_tumu)
    snprintf (
        fn_instance->get_func_name (), NAME_MAXLEN, "%s_v_%s_tumu", buff,
        mode2data_type_suffix (TYPE_MODE (tuple_type), unsigned_p, false));
  else
    snprintf (
        fn_instance->get_func_name (), NAME_MAXLEN, "%s_v_%s_m", buff,
        mode2data_type_suffix (TYPE_MODE (tuple_type), unsigned_p, false));

  hashval_t hashval = fn_instance->hash ();
  registered_function *rfn_slot =
      function_table->find_with_hash (*fn_instance, hashval);
  tree decl = rfn_slot->decl;
  gimple *repl = gimple_build_call_vec (decl, vargs);
  gimple_call_set_lhs (repl, tuple);

  for (unsigned int i = nf; i-- > 0;)
    {
      tree field = tuple_type_field (TREE_TYPE (tuple));
      tree tuple_array =
          build3 (COMPONENT_REF, TREE_TYPE (field), tuple, field, NULL_TREE);
      tree tuple_vector = build4 (ARRAY_REF, vector_type, tuple_array,
                                  size_int (i), NULL_TREE, NULL_TREE);

      tree tem = make_ssa_name (vector_type);

      tree indirect =
          fold_build2 (MEM_REF, vector_type, gimple_call_arg (call_in, i),
                       build_int_cst (build_pointer_type (vector_type), 0));
      gassign *assign = gimple_build_assign (indirect, tem);
      gsi_insert_after (gsi_in, assign, GSI_SAME_STMT);
      gsi_insert_after (gsi_in, gimple_build_assign (tem, tuple_vector),
                        GSI_SAME_STMT);
    }

  delete fn_instance;
  return repl;
}

static void
push_argment_for_segment_store (const function_instance &instance,
                               vec<tree> &argument_types, unsigned int nf,
                               bool indexed_p)
{
  unsigned int offset = indexed_p ? 3 : 1;
  bool unsigned_p = instance.get_data_type_list ()[offset] == DT_unsigned;
  
  if (indexed_p)
    {
      argument_types.quick_push (get_dt_t (instance.get_arg_pattern ().arg_list[1], unsigned_p, true, false));
      argument_types.quick_push (get_dt_t (instance.get_arg_pattern ().arg_list[2], true, false, false));
    }
  else
    argument_types.quick_push (get_dt_t (instance.get_arg_pattern ().arg_list[0], unsigned_p, true, false));
  
  for (unsigned int i = 0; i < nf; i++)
    argument_types.quick_push (get_dt_t (instance.get_arg_pattern ().arg_list[offset], unsigned_p, false, false));
}

static gimple *
fold_non_tuple_segment_store (const function_instance &instance,
                              gimple_stmt_iterator *gsi_in, gcall *call_in,
                              unsigned int nf)
{
  bool unsigned_p = instance.get_data_type_list ()[instance.get_arg_pattern ().arg_len - 1] == DT_unsigned;
  tree vector_type = get_dt_t (instance.get_arg_pattern ().arg_list[instance.get_arg_pattern ().arg_len - 1],
                               unsigned_p, false, false);
  tree tuple_type = get_tuple_t (TYPE_MODE (vector_type), unsigned_p, nf);
  tree tuple = create_tmp_var (tuple_type, "tuple");
  auto_vec<tree, 16> vargs;

  unsigned int offset = instance.get_pred () == PRED_m ? 2 : 1;
  for (unsigned int i = 0; i < offset; i++)
    vargs.quick_push (gimple_call_arg (call_in, i));

  if (strstr (instance.get_base_name (), "vsseg") == NULL)
    {
      vargs.quick_push (gimple_call_arg (call_in, offset));
      offset++;
    }

  for (unsigned int i = 0; i < nf; i++)
    {
      tree rhs_vector = gimple_call_arg (call_in, i + offset);
      tree field = tuple_type_field (TREE_TYPE (tuple));
      tree lhs_array =
          build3 (COMPONENT_REF, TREE_TYPE (field), tuple, field, NULL_TREE);
      tree lhs_vector = build4 (ARRAY_REF, TREE_TYPE (rhs_vector), lhs_array,
                                size_int (i), NULL_TREE, NULL_TREE);
      gassign *assign = gimple_build_assign (lhs_vector, rhs_vector);
      gsi_insert_before (gsi_in, assign, GSI_SAME_STMT);
    }

  vargs.quick_push (tuple);
  /* push the vl. */
  vargs.quick_push (gimple_call_arg (call_in, gimple_call_num_args (call_in) - 1));

  function_instance *fn_instance = new function_instance ();
  char buff[NAME_MAXLEN / 4];

  if (strstr (instance.get_base_name (), "vsseg") != NULL)
    snprintf (buff, sizeof (buff), "vsseg%de%d", nf,
              GET_MODE_BITSIZE (GET_MODE_INNER (TYPE_MODE (vector_type))));
  else if (strstr (instance.get_base_name (), "vssseg") != NULL)
    snprintf (buff, sizeof (buff), "vssseg%de%d", nf,
              GET_MODE_BITSIZE (GET_MODE_INNER (TYPE_MODE (vector_type))));
  else if (strstr (instance.get_base_name (), "vsuxseg") != NULL)
    {
      machine_mode indexed_mode = instance.get_arg_pattern ().arg_list[2];
      snprintf (buff, sizeof (buff), "vsuxseg%dei%d", nf,
                GET_MODE_BITSIZE (GET_MODE_INNER (indexed_mode)));
    }
  else if (strstr (instance.get_base_name (), "vsoxseg") != NULL)
    {
      machine_mode indexed_mode = instance.get_arg_pattern ().arg_list[2];
      snprintf (buff, sizeof (buff), "vsoxseg%dei%d", nf,
                GET_MODE_BITSIZE (GET_MODE_INNER (indexed_mode)));
    }
  else
    gcc_unreachable ();

  if (instance.get_pred () == PRED_void)
    snprintf (
        fn_instance->get_func_name (), NAME_MAXLEN, "%s_v_%s", buff,
        mode2data_type_suffix (TYPE_MODE (tuple_type), unsigned_p, false));
  else
    snprintf (
        fn_instance->get_func_name (), NAME_MAXLEN, "%s_v_%s_m", buff,
        mode2data_type_suffix (TYPE_MODE (tuple_type), unsigned_p, false));

  hashval_t hashval = fn_instance->hash ();
  registered_function *rfn_slot =
      function_table->find_with_hash (*fn_instance, hashval);
  tree decl = rfn_slot->decl;
  gimple *repl = gimple_build_call_vec (decl, vargs);
  
  delete fn_instance;
  return repl;
}

/* A function_base for vlseg_template functions.  */
template <unsigned int NF>
unsigned int
vlseg_template<NF>::call_properties (const function_instance &) const
{
  return CP_READ_MEMORY;
}

template <unsigned int NF>
void
vlseg_template<NF>::get_argument_types (const function_instance &instance,
                                        vec<tree> &argument_types) const
{
  push_argment_for_segment_load (instance, argument_types, NF, false);
}

template <unsigned int NF>
bool
vlseg_template<NF>::has_dest_arg_p (predication_index) const
{
  return false;
}

template <unsigned int NF>
size_t
vlseg_template<NF>::get_position_of_mask_arg (predication_index) const
{
  return NF;
}

template <unsigned int NF>
gimple *
vlseg_template<NF>::fold (const function_instance &instance,
                          gimple_stmt_iterator *gsi_in, gcall *call_in) const
{
  return fold_non_tuple_segment_load (instance, gsi_in, call_in, NF, false);
}

template <unsigned int NF>
rtx
vlseg_template<NF>::expand (const function_instance &, tree, rtx) const
{
  gcc_unreachable ();
}

template class vlseg_template<2>;
template class vlseg_template<3>;
template class vlseg_template<4>;
template class vlseg_template<5>;
template class vlseg_template<6>;
template class vlseg_template<7>;
template class vlseg_template<8>;

/* A function_base for vlsegff_template functions.  */
template <unsigned int NF>
unsigned int
vlsegff_template<NF>::call_properties (const function_instance &) const
{
  return CP_READ_MEMORY | CP_RAISE_LD_EXCEPTIONS;
}

template <unsigned int NF>
void
vlsegff_template<NF>::get_argument_types (const function_instance &instance,
                                          vec<tree> &argument_types) const
{
  push_argment_for_segment_load (instance, argument_types, NF, false);
  argument_types.quick_push (build_pointer_type (size_type_node));
}

template <unsigned int NF>
bool
vlsegff_template<NF>::has_dest_arg_p (predication_index) const
{
  return false;
}

template <unsigned int NF>
size_t
vlsegff_template<NF>::get_position_of_mask_arg (predication_index) const
{
  return NF;
}

template <unsigned int NF>
gimple *
vlsegff_template<NF>::fold (const function_instance &instance,
                            gimple_stmt_iterator *gsi_in, gcall *call_in) const
{
  return fold_non_tuple_segment_load (instance, gsi_in, call_in, NF, true);
}

template <unsigned int NF>
rtx
vlsegff_template<NF>::expand (const function_instance &, tree, rtx) const
{
  gcc_unreachable ();
}

template class vlsegff_template<2>;
template class vlsegff_template<3>;
template class vlsegff_template<4>;
template class vlsegff_template<5>;
template class vlsegff_template<6>;
template class vlsegff_template<7>;
template class vlsegff_template<8>;

/* A function_base for vsseg_template functions.  */
template <unsigned int NF>
unsigned int
vsseg_template<NF>::call_properties (const function_instance &) const
{
  return CP_WRITE_MEMORY;
}

template <unsigned int NF>
void
vsseg_template<NF>::get_argument_types (const function_instance &instance,
                                        vec<tree> &argument_types) const
{
  push_argment_for_segment_store (instance, argument_types, NF, false);
}

template <unsigned int NF>
gimple *
vsseg_template<NF>::fold (const function_instance &instance,
                          gimple_stmt_iterator *gsi_in, gcall *call_in) const
{
  return fold_non_tuple_segment_store (instance, gsi_in, call_in, NF);
}

template <unsigned int NF>
rtx
vsseg_template<NF>::expand (const function_instance &, tree, rtx) const
{
  gcc_unreachable ();
}

template class vsseg_template<2>;
template class vsseg_template<3>;
template class vsseg_template<4>;
template class vsseg_template<5>;
template class vsseg_template<6>;
template class vsseg_template<7>;
template class vsseg_template<8>;

/* A function_base for vlsseg_template functions.  */
template <unsigned int NF>
void
vlsseg_template<NF>::get_argument_types (const function_instance &instance,
                                         vec<tree> &argument_types) const
{
  push_argment_for_segment_load (instance, argument_types, NF, false);
  argument_types.quick_push (ptrdiff_type_node);
}

template <unsigned int NF>
bool
vlsseg_template<NF>::has_dest_arg_p (predication_index) const
{
  return false;
}

template <unsigned int NF>
size_t
vlsseg_template<NF>::get_position_of_mask_arg (predication_index) const
{
  return NF;
}

template <unsigned int NF>
gimple *
vlsseg_template<NF>::fold (const function_instance &instance,
                           gimple_stmt_iterator *gsi_in, gcall *call_in) const
{
  return fold_non_tuple_segment_load (instance, gsi_in, call_in, NF, false);
}

template <unsigned int NF>
rtx
vlsseg_template<NF>::expand (const function_instance &, tree, rtx) const
{
  gcc_unreachable ();
}

template class vlsseg_template<2>;
template class vlsseg_template<3>;
template class vlsseg_template<4>;
template class vlsseg_template<5>;
template class vlsseg_template<6>;
template class vlsseg_template<7>;
template class vlsseg_template<8>;

/* A function_base for vssseg_template functions.  */
template <unsigned int NF>
unsigned int
vssseg_template<NF>::call_properties (const function_instance &) const
{
  return CP_WRITE_MEMORY;
}

template <unsigned int NF>
void
vssseg_template<NF>::get_argument_types (const function_instance &instance,
                                         vec<tree> &argument_types) const
{
  push_argment_for_segment_store (instance, argument_types, NF, false);
  argument_types.quick_insert (1, ptrdiff_type_node);
}

template <unsigned int NF>
gimple *
vssseg_template<NF>::fold (const function_instance &instance,
                           gimple_stmt_iterator *gsi_in, gcall *call_in) const
{
  return fold_non_tuple_segment_store (instance, gsi_in, call_in, NF);
}

template <unsigned int NF>
rtx
vssseg_template<NF>::expand (const function_instance &, tree, rtx) const
{
  gcc_unreachable ();
}

template class vssseg_template<2>;
template class vssseg_template<3>;
template class vssseg_template<4>;
template class vssseg_template<5>;
template class vssseg_template<6>;
template class vssseg_template<7>;
template class vssseg_template<8>;

/* A function_base for vlxseg_template functions.  */
template <unsigned int NF, indexed_mode uo>
unsigned int
vlxseg_template<NF, uo>::call_properties (const function_instance &) const
{
  return CP_READ_MEMORY;
}

template <unsigned int NF, indexed_mode uo>
void
vlxseg_template<NF, uo>::get_argument_types (const function_instance &instance,
                                             vec<tree> &argument_types) const
{
  push_argment_for_segment_load (instance, argument_types, NF, true);
}

template <unsigned int NF, indexed_mode uo>
bool
vlxseg_template<NF, uo>::has_dest_arg_p (predication_index) const
{
  return false;
}

template <unsigned int NF, indexed_mode uo>
size_t
vlxseg_template<NF, uo>::get_position_of_mask_arg (predication_index) const
{
  return NF;
}

template <unsigned int NF, indexed_mode uo>
gimple *
vlxseg_template<NF, uo>::fold (const function_instance &instance,
                               gimple_stmt_iterator *gsi_in,
                               gcall *call_in) const
{
  return fold_non_tuple_segment_load (instance, gsi_in, call_in, NF, false);
}

template <unsigned int NF, indexed_mode uo>
rtx
vlxseg_template<NF, uo>::expand (const function_instance &, tree, rtx) const
{
  gcc_unreachable ();
}

template class vlxseg_template<2, INDEXED_u>;
template class vlxseg_template<3, INDEXED_u>;
template class vlxseg_template<4, INDEXED_u>;
template class vlxseg_template<5, INDEXED_u>;
template class vlxseg_template<6, INDEXED_u>;
template class vlxseg_template<7, INDEXED_u>;
template class vlxseg_template<8, INDEXED_u>;
template class vlxseg_template<2, INDEXED_o>;
template class vlxseg_template<3, INDEXED_o>;
template class vlxseg_template<4, INDEXED_o>;
template class vlxseg_template<5, INDEXED_o>;
template class vlxseg_template<6, INDEXED_o>;
template class vlxseg_template<7, INDEXED_o>;
template class vlxseg_template<8, INDEXED_o>;

/* A function_base for vsxseg_template functions.  */
template <unsigned int NF, indexed_mode uo>
unsigned int
vsxseg_template<NF, uo>::call_properties (const function_instance &) const
{
  return CP_WRITE_MEMORY;
}

template <unsigned int NF, indexed_mode uo>
void
vsxseg_template<NF, uo>::get_argument_types (const function_instance &instance,
                                             vec<tree> &argument_types) const
{
  push_argment_for_segment_store (instance, argument_types, NF, true);
}

template <unsigned int NF, indexed_mode uo>
gimple *
vsxseg_template<NF, uo>::fold (const function_instance &instance,
                               gimple_stmt_iterator *gsi_in,
                               gcall *call_in) const
{
  return fold_non_tuple_segment_store (instance, gsi_in, call_in, NF);
}

template <unsigned int NF, indexed_mode uo>
rtx
vsxseg_template<NF, uo>::expand (const function_instance &, tree, rtx) const
{
  gcc_unreachable ();
}

template class vsxseg_template<2, INDEXED_u>;
template class vsxseg_template<3, INDEXED_u>;
template class vsxseg_template<4, INDEXED_u>;
template class vsxseg_template<5, INDEXED_u>;
template class vsxseg_template<6, INDEXED_u>;
template class vsxseg_template<7, INDEXED_u>;
template class vsxseg_template<8, INDEXED_u>;
template class vsxseg_template<2, INDEXED_o>;
template class vsxseg_template<3, INDEXED_o>;
template class vsxseg_template<4, INDEXED_o>;
template class vsxseg_template<5, INDEXED_o>;
template class vsxseg_template<6, INDEXED_o>;
template class vsxseg_template<7, INDEXED_o>;
template class vsxseg_template<8, INDEXED_o>;

} // end namespace riscv_vector

using namespace riscv_vector;

inline void
gt_ggc_mx (function_instance *)
{
}

inline void
gt_pch_nx (function_instance *)
{
}

inline void
gt_pch_nx (function_instance *, gt_pointer_operator, void *)
{
}

#include "gt-riscv-vector-builtins-functions.h"