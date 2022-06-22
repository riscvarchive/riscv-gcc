/* Intrinsic definitions for RISC-V 'V' Extension for GNU compiler.
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

#ifndef GCC_RISCV_VECTOR_BUILTINS_FUNCTIONS_H
#define GCC_RISCV_VECTOR_BUILTINS_FUNCTIONS_H

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
#include "riscv-vector.h"
#include <string>
#include <vector>

namespace riscv_vector {

/* The macro defines the maximum length of name string. */
static const unsigned int NAME_MAXLEN = 32;
/* The macro defines the maxmum number of tuple. For
   RISC-V 'V' Extension, the maxmum tuple number is 8. */
static const unsigned int MAX_TUPLE_NUM = 8;

/* Describes the various of data_type.
   Used by riscv-vector-builtins-iterators.def. */
enum data_type_index
{
  /* signed data. */
  DT_signed,
  /* unsigned data. */
  DT_unsigned,
  /* signed data pointer. */
  DT_ptr,
  /* unsigned data pointer. */
  DT_uptr,
  /* const signed data pointer. */
  DT_c_ptr,
  /* const unsigned data pointer. */
  DT_c_uptr,
};

/* Describes the various uses of a governing predicate.
   Used by riscv-vector-builtins-iterators.def.  */
enum predication_index
{
  /* No governing predicate is present.  */
  PRED_none = 1 << 0,
  /* tail agnostic, ignore mask policy */
  PRED_ta = 1 << 3,
  /* tail undisturbed, ignore mask policy */
  PRED_tu = 1 << 4,
  /* mask agnostic, ignore tail policy */
  PRED_ma = 1 << 5,
  /* mask undisturbed, ignore tail policy */
  PRED_mu = 1 << 6,
  /* mask and tail both agnostic */
  PRED_tama = 1 << 7,
  /* mask undisturbed and tail agnostic */
  PRED_tamu = 1 << 8,
  /* mask agnostic and tail undisturbed */
  PRED_tuma = 1 << 9,
  /* mask and tail both undisturbed */
  PRED_tumu = 1 << 10,
  /* No governing predicate is present.  */
  PRED_void = 1 << 11,
  /* mask and tail both undisturbed */
  PRED_m = 1 << 12,
  /* tail agnostic, ignore mask policy */
  PRED_tam = 1 << 13,
  /* tail undisturbed, ignore mask policy */
  PRED_tum = 1 << 14,

  NUM_PREDS
};

/* Describes the various intrinsic types.  */
enum intrinsic_pattern
{
  /* other intrinsic */
  PAT_none = 1 << 0,
  PAT_mask = 1 << 1,
  PAT_tail = 1 << 2,
  PAT_dest = 1 << 3,
  PAT_void_dest = 1 << 4,
  PAT_ignore_mask_policy = 1 << 5,
  PAT_ignore_tail_policy = 1 << 6,
  PAT_ignore_policy = 1 << 7,
  PAT_merge = 1 << 8,
};

/* Describes the various operation types.  */
enum operation_index
{
  OP_none = 1 << 0,
  OP_vv = 1 << 1,
  OP_vx = 1 << 2,
  OP_v = 1 << 3,
  OP_wv = 1 << 4,
  OP_wx = 1 << 5,
  OP_x_x_v = 1 << 6,
  OP_vf2 = 1 << 7,
  OP_vf4 = 1 << 8,
  OP_vf8 = 1 << 9,
  OP_vvm = 1 << 10,
  OP_vxm = 1 << 11,
  OP_x_x_w = 1 << 12,
  OP_v_v = 1 << 13,
  OP_v_x = 1 << 14,
  OP_vs = 1 << 15,
  OP_mm = 1 << 16,
  OP_m = 1 << 17,
  OP_vf = 1 << 18,
  OP_vm = 1 << 19,
  OP_wf = 1 << 20,
  OP_vfm = 1 << 21,
  OP_v_f = 1 << 22,
  NUM_OP
};

/* Describe indexed-ordered or indexed-unordered load store.  */
enum indexed_mode
{
  INDEXED_u,
  INDEXED_o,
};

/* Describe vector policy.  */
enum vector_policy
{
  undisturbed = 0,
  agnostic = 1,
  any = 2,
};

/* Enumerates the VECTOR (data) vector types, together called
   "vector types" for brevity.  */
enum vector_type_index
{
#define DEF_RVV_TYPE(ELEM_TYPE, NODE) VECTOR_TYPE_##ELEM_TYPE,
#include "riscv-vector-builtins.def"
  NUM_VECTOR_TYPES
#undef DEF_RVV_TYPE
};

struct vector_vlmul_info
{
  enum vlmul_field_enum vlmul;
  const char *suffix;
  const char *boolnum;
};

struct vector_type_info
{
  enum vector_type_index type;
  const char *elem_name;
};

// for function arg mode infomation, include return type
struct vector_mode_attr
{
  machine_mode mode;
  machine_mode attr;
  // the extension like TARGET_VECTOR
  uint64_t extension;
};

// the total variable pack for function arg mode infomation, include return
// type
struct vector_mode_attr_list
{
  unsigned int attr_len;
  vector_mode_attr *attr_list;
};

// for VATTR(OP, MODE_ATTR)
struct vector_arg_attr_info
{
  int target_op;
  enum data_type_index dt;
  vector_mode_attr_list *mode_attr_list;
};

struct vector_arg_all_modes
{
  unsigned int arg_len;
  data_type_index *dt_list;
  int *target_op_list;
  // arg_list[0] is always return type
  vector_mode_attr_list **arg_list;
};

struct vector_arg_modes
{
  uint64_t arg_extensions;
  unsigned int arg_len;
  // arg_list[0] is always return type
  machine_mode *arg_list;
};

constexpr unsigned int
get_vma_vta (vector_policy vma, vector_policy vta)
{
  return (vma << 2) | vta;
}

constexpr vector_policy
get_vma (unsigned int vma_vta)
{
  return (vector_policy) ((vma_vta >> 2) & 0b11);
}

constexpr vector_policy
get_vta (unsigned int vma_vta)
{
  return (vector_policy) (vma_vta & 0b11);
}

const unsigned int tama_policy
  = get_vma_vta (vector_policy::agnostic, vector_policy::agnostic);
const unsigned int tamu_policy
  = get_vma_vta (vector_policy::undisturbed, vector_policy::agnostic);
const unsigned int tuma_policy
  = get_vma_vta (vector_policy::agnostic, vector_policy::undisturbed);
const unsigned int tumu_policy
  = get_vma_vta (vector_policy::undisturbed, vector_policy::undisturbed);
const unsigned int ta_policy
  = get_vma_vta (vector_policy::any, vector_policy::agnostic);
const unsigned int tu_policy
  = get_vma_vta (vector_policy::any, vector_policy::undisturbed);
const unsigned int ma_policy
  = get_vma_vta (vector_policy::agnostic, vector_policy::any);
const unsigned int mu_policy
  = get_vma_vta (vector_policy::undisturbed, vector_policy::any);
const unsigned int any_policy
  = get_vma_vta (vector_policy::any, vector_policy::any);

inline rtx
gen_tama_policy ()
{
  return gen_rtx_CONST_INT (Pmode, tama_policy);
}

inline rtx
gen_tamu_policy ()
{
  return gen_rtx_CONST_INT (Pmode, tamu_policy);
}

inline rtx
gen_tuma_policy ()
{
  return gen_rtx_CONST_INT (Pmode, tuma_policy);
}

inline rtx
gen_tumu_policy ()
{
  return gen_rtx_CONST_INT (Pmode, tumu_policy);
}

inline rtx
gen_ta_policy ()
{
  return gen_rtx_CONST_INT (Pmode, ta_policy);
}

inline rtx
gen_tu_policy ()
{
  return gen_rtx_CONST_INT (Pmode, tu_policy);
}

inline rtx
gen_ma_policy ()
{
  return gen_rtx_CONST_INT (Pmode, ma_policy);
}

inline rtx
gen_mu_policy ()
{
  return gen_rtx_CONST_INT (Pmode, mu_policy);
}

inline rtx
gen_any_policy ()
{
  return gen_rtx_CONST_INT (Pmode, any_policy);
}

class function_builder;

class GTY ((user)) function_instance
{
public:
  function_instance (function_builder *, const char *, vector_arg_modes &,
		     enum predication_index, enum operation_index);
  function_instance (const char *__name);
  ~function_instance ();

  bool operator== (const function_instance &) const;
  bool operator!= (const function_instance &) const;

  hashval_t hash () const;
  bool check (location_t, tree, tree, unsigned int, tree *) const;
  unsigned int call_properties () const;
  bool reads_global_state_p () const;
  bool modifies_global_state_p () const;
  bool could_trap_p () const;

  const char *get_base_name () const;
  vector_arg_modes get_arg_pattern () const;
  enum predication_index get_pred () const;
  unsigned int get_vma_vta () const;
  enum operation_index get_operation () const;
  enum data_type_index *get_data_type_list () const;
  function_builder *builder () const;

  char function_name[NAME_MAXLEN];

private:
  function_builder *m_builder;
  const char *m_base_name;
  vector_arg_modes m_target_arg_pattern;
  enum predication_index m_target_pred;
  enum operation_index m_target_operation;
};

/* Describes a function decl.  */
class GTY (()) registered_function
{
public:
  function_instance GTY ((skip)) instance;

  /* The decl itself.  */
  tree GTY ((skip)) decl;

  /* The architecture extensions that the function requires, as a set of
     RISCV_TARGET_* flags.  */
  uint64_t required_extensions;

  /* True if the decl represents an overloaded function that needs to be
     resolved.  */
  bool overloaded_p;
};

/* A class for building and registering function decls.  */
class function_builder
{
public:
  function_builder (const char *, vector_arg_all_modes &, uint64_t, uint64_t,
		    uint64_t, const unsigned int);

  virtual ~function_builder ();

  void register_function ();

  /* Try to fold the given gimple call.  Return the new gimple statement
     on success, otherwise return null.  */
  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const;

  /* Expand the given call into rtl.  Return the result of the function,
     or an arbitrary value if the function doesn't return a result.  */
  virtual rtx expand (const function_instance &, tree, rtx) const = 0;

  rtx expand_builtin_insn (enum insn_code, tree, rtx,
			   const function_instance &) const;

  virtual tree get_return_type (const function_instance &) const;

  virtual tree get_mask_type (tree, const function_instance &,
			      const vec<tree> &) const;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const;

  virtual size_t get_dest_arguments_length () const;

  uint64_t get_pattern () const;
  /* check if need add mask operand for corresponding rtl */
  bool need_mask_operand_p () const;
  /* check if need add dest operand for corresponding rtl */
  bool need_dest_operand_p () const;
  /* check if has mask arg for corresponding function decl */
  bool has_mask_arg_p (enum predication_index) const;
  /* check if has dest arg for corresponding function decl */
  virtual bool has_dest_arg_p (enum predication_index) const;
  unsigned int get_policy (enum predication_index) const;
  /* get parameter position of mask arg */
  virtual size_t get_position_of_mask_arg (enum predication_index) const;
  /* get parameter position of dest arg */
  virtual size_t get_position_of_dest_arg (enum predication_index) const;

  void apply_predication (const function_instance &, tree, vec<tree> &) const;

  virtual unsigned int call_properties () const;

  vector_arg_modes &get_arg_modes_by_iter_idx (unsigned int) const;

  enum data_type_index *get_data_type_list () const;

  bool check_required_extensions (location_t, tree, uint64_t) const;
  virtual char *assemble_name (function_instance &);
  void append_name (const char *);
  char *finish_name ();

  /* Return true if the function can be overloaded. */
  virtual bool can_be_overloaded_p (const function_instance &) const;

private:
  void add_unique_function (function_instance &, tree, vec<tree> &);
  void build_one (function_instance &);
  tree get_attributes (const function_instance &) const;

  registered_function &add_function (const function_instance &, const char *,
				     tree, tree, bool, bool) const;

  /* The base name, as a string.  */
  const char *m_base_name;
  vector_arg_all_modes m_target_arg_patterns;
  uint64_t m_target_pattern;
  uint64_t m_target_preds;
  uint64_t m_target_op_types;
  uint64_t m_required_extensions;

  unsigned int m_iter_idx_cnt;
  unsigned int m_iter_arg_cnt;
  unsigned int *m_iter_arg_idx_list;

  /* True if we should create a separate decl for each instance of an
     overloaded function, instead of using function_builder.  */
  bool m_direct_overloads;

  /* Used for building up function names.  */
  obstack m_string_obstack;
};

/* Hash traits for registered_function.  */
struct registered_function_hasher : nofree_ptr_hash<registered_function>
{
  typedef function_instance compare_type;

  static hashval_t hash (value_type);
  static bool equal (value_type, const compare_type &);
};

/* A function_base for config functions.  */
class config : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;
};

/* A function_base for vsetvl functions.  */
class vsetvl : public config
{
public:
  // use the same construction function as the config
  using config::config;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for config functions.  */
class vsetvlmax : public config
{
public:
  // use the same construction function as the config
  using config::config;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for readvl functions.  */
class readvl : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for handle_store_pointer functions.  */
class handle_store_pointer : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for Miscellaneous functions.  */
class misc : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;
};

/* A function_base for vreinterpret functions.  */
class vreinterpret : public misc
{
public:
  // use the same construction function as the misc
  using misc::misc;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlmul_ext functions.  */
class vlmul_ext : public misc
{
public:
  // use the same construction function as the misc
  using misc::misc;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlmul_trunc functions.  */
class vlmul_trunc : public misc
{
public:
  // use the same construction function as the misc
  using misc::misc;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vset functions.  */
class vset : public misc
{
public:
  // use the same construction function as the misc
  using misc::misc;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vget functions.  */
class vget : public misc
{
public:
  // use the same construction function as the misc
  using misc::misc;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vundefined functions.  */
class vundefined : public misc
{
public:
  // use the same construction function as the misc
  using misc::misc;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for loadstore functions.  */
class loadstore : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;
};

/* A function_base for indexed loadstore functions.  */
class indexedloadstore : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;
};

/* A function_base for basic_alu functions.  */
class basic_alu : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;
};

/* A function_base for unary functions.  */
class unop : public basic_alu
{
public:
  // use the same construction function as the basic_alu
  using basic_alu::basic_alu;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;
};

/* A function_base for binary functions.  */
class binop : public basic_alu
{
public:
  // use the same construction function as the basic_alu
  using basic_alu::basic_alu;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;
};

/* A function_base for widen binary functions.  */
class wbinop : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual char *assemble_name (function_instance &) OVERRIDE;
};

/* A function_base for ternary functions.  */
class ternop : public basic_alu
{
public:
  // use the same construction function as the function_builder
  using basic_alu::basic_alu;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;
};

/* A function_base for reduction functions.  */
class reduceop : public basic_alu
{
public:
  // use the same construction function as the basic_alu
  using basic_alu::basic_alu;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual tree get_mask_type (tree, const function_instance &,
			      const vec<tree> &) const OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;
};

/* A function_base for vle functions.  */
class vle : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vse functions.  */
class vse : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlse functions.  */
class vlse : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsse functions.  */
class vsse : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlm functions.  */
class vlm : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsm functions.  */
class vsm : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlxei functions.  */
class vlxei : public indexedloadstore
{
public:
  // use the same construction function as the indexedloadstore
  using indexedloadstore::indexedloadstore;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;
};

/* A function_base for vluxei functions.  */
class vluxei : public vlxei
{
public:
  // use the same construction function as the vlxei
  using vlxei::vlxei;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vloxei functions.  */
class vloxei : public vlxei
{
public:
  // use the same construction function as the vlxei
  using vlxei::vlxei;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsuxei functions.  */
class vsuxei : public indexedloadstore
{
public:
  // use the same construction function as the indexedloadstore
  using indexedloadstore::indexedloadstore;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsoxei functions.  */
class vsoxei : public indexedloadstore
{
public:
  // use the same construction function as the indexedloadstore
  using indexedloadstore::indexedloadstore;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vleff functions.  */
class vleff : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlseg functions.  */
class vlseg : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlsegff functions.  */
class vlsegff : public vlseg
{
public:
  // use the same construction function as the vlseg
  using vlseg::vlseg;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsseg functions.  */
class vsseg : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlsseg functions.  */
class vlsseg : public vlseg
{
public:
  // use the same construction function as the vlseg
  using vlseg::vlseg;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vssseg functions.  */
class vssseg : public vsseg
{
public:
  // use the same construction function as the vlseg
  using vsseg::vsseg;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vlxseg functions.  */
class vlxseg : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;
};

/* A function_base for vluxseg functions.  */
class vluxseg : public vlxseg
{
public:
  // use the same construction function as the vlxseg
  using vlxseg::vlxseg;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vloxseg functions.  */
class vloxseg : public vlxseg
{
public:
  // use the same construction function as the vlxseg
  using vlxseg::vlxseg;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsxseg functions.  */
class vsxseg : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;
};

/* A function_base for vsuxseg functions.  */
class vsuxseg : public vsxseg
{
public:
  // use the same construction function as the vsxseg
  using vsxseg::vsxseg;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsoxseg functions.  */
class vsoxseg : public vsxseg
{
public:
  // use the same construction function as the vsxseg
  using vsxseg::vsxseg;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vadd functions.  */
class vadd : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsub functions.  */
class vsub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vrsub functions.  */
class vrsub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vneg functions.  */
class vneg : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwadd functions.  */
class vwadd : public wbinop
{
public:
  // use the same construction function as the wbinop
  using wbinop::wbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwsub functions.  */
class vwsub : public wbinop
{
public:
  // use the same construction function as the wbinop
  using wbinop::wbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwaddu functions.  */
class vwaddu : public wbinop
{
public:
  // use the same construction function as the wbinop
  using wbinop::wbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwsubu functions.  */
class vwsubu : public wbinop
{
public:
  // use the same construction function as the wbinop
  using wbinop::wbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwcvt functions.  */
class vwcvt : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwcvtu functions.  */
class vwcvtu : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsext functions.  */
class vsext : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vzext functions.  */
class vzext : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vadc functions.  */
class vadc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsbc functions.  */
class vsbc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmadc functions.  */
class vmadc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsbc functions.  */
class vmsbc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vand functions.  */
class vand : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vor functions.  */
class vor : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vxor functions.  */
class vxor : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vnot functions.  */
class vnot : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vshift functions.  */
class vshift : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;
};

/* A function_base for vsll functions.  */
class vsll : public vshift
{
public:
  // use the same construction function as the vshift
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsrl functions.  */
class vsrl : public vshift
{
public:
  // use the same construction function as the vshift
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsra functions.  */
class vsra : public vshift
{
public:
  // use the same construction function as the vshift
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vnsrl functions.  */
class vnsrl : public vshift
{
public:
  // use the same construction function as the binop
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vnsra functions.  */
class vnsra : public vshift
{
public:
  // use the same construction function as the binop
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vncvt functions.  */
class vncvt : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vcmp functions.  */
class vcmp : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual char *assemble_name (function_instance &) OVERRIDE;
};

/* A function_base for vmseq functions.  */
class vmseq : public vcmp
{
public:
  // use the same construction function as the binop
  using vcmp::vcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsne functions.  */
class vmsne : public vcmp
{
public:
  // use the same construction function as the binop
  using vcmp::vcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmslt functions.  */
class vmslt : public vcmp
{
public:
  // use the same construction function as the binop
  using vcmp::vcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsltu functions.  */
class vmsltu : public vcmp
{
public:
  // use the same construction function as the binop
  using vcmp::vcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsgt functions.  */
class vmsgt : public vcmp
{
public:
  // use the same construction function as the binop
  using vcmp::vcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsgtu functions.  */
class vmsgtu : public vcmp
{
public:
  // use the same construction function as the binop
  using vcmp::vcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsle functions.  */
class vmsle : public vcmp
{
public:
  // use the same construction function as the binop
  using vcmp::vcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsleu functions.  */
class vmsleu : public vcmp
{
public:
  // use the same construction function as the binop
  using vcmp::vcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsge functions.  */
class vmsge : public vcmp
{
public:
  // use the same construction function as the binop
  using vcmp::vcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsgeu functions.  */
class vmsgeu : public vcmp
{
public:
  // use the same construction function as the binop
  using vcmp::vcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmin functions.  */
class vmin : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vminu functions.  */
class vminu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmax functions.  */
class vmax : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmaxu functions.  */
class vmaxu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmul functions.  */
class vmul : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmulh functions.  */
class vmulh : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmulhu functions.  */
class vmulhu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmulhsu functions.  */
class vmulhsu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vdiv functions.  */
class vdiv : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vdivu functions.  */
class vdivu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vrem functions.  */
class vrem : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vremu functions.  */
class vremu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmul functions.  */
class vwmul : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmulu functions.  */
class vwmulu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmulsusu functions.  */
class vwmulsu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmacc functions.  */
class vmacc : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vnmsac functions.  */
class vnmsac : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmadd functions.  */
class vmadd : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vnmsub functions.  */
class vnmsub : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmacc functions.  */
class vwmacc : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmaccu functions.  */
class vwmaccu : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmaccsu functions.  */
class vwmaccsu : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwmaccus functions.  */
class vwmaccus : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmerge functions.  */
class vmerge : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual size_t
    get_position_of_dest_arg (enum predication_index) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmv functions.  */
class vmv : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsadd functions.  */
class vsadd : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsaddu functions.  */
class vsaddu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vaadd functions.  */
class vaadd : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vaaddu functions.  */
class vaaddu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vssub functions.  */
class vssub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vssubu functions.  */
class vssubu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vasub functions.  */
class vasub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vasubu functions.  */
class vasubu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vssrl functions.  */
class vssrl : public vshift
{
public:
  // use the same construction function as the vshift
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vssra functions.  */
class vssra : public vshift
{
public:
  // use the same construction function as the vshift
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vsmul functions.  */
class vsmul : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vnclip functions.  */
class vnclip : public vshift
{
public:
  // use the same construction function as the vshift
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vnclipu functions.  */
class vnclipu : public vshift
{
public:
  // use the same construction function as the vshift
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for funop functions.  */
class funop : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual unsigned int call_properties () const OVERRIDE;
};

/* A function_base for fbinop functions.  */
class fbinop : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual unsigned int call_properties () const OVERRIDE;
};

/* A function_base for fbinop functions.  */
class fwbinop : public wbinop
{
public:
  // use the same construction function as the wbinop
  using wbinop::wbinop;

  virtual unsigned int call_properties () const OVERRIDE;
};

/* A function_base for fternop functions.  */
class fternop : public ternop
{
public:
  // use the same construction function as the binop
  using ternop::ternop;

  virtual unsigned int call_properties () const OVERRIDE;
};

/* A function_base for vfadd functions.  */
class vfadd : public fbinop
{
public:
  // use the same construction function as the fbinop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfsub functions.  */
class vfsub : public fbinop
{
public:
  // use the same construction function as the fbinop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmul functions.  */
class vfmul : public fbinop
{
public:
  // use the same construction function as the fbinop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfdiv functions.  */
class vfdiv : public fbinop
{
public:
  // use the same construction function as the fbinop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfrsub functions.  */
class vfrsub : public fbinop
{
public:
  // use the same construction function as the binop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfrdiv functions.  */
class vfrdiv : public fbinop
{
public:
  // use the same construction function as the binop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfneg functions.  */
class vfneg : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwadd functions.  */
class vfwadd : public fwbinop
{
public:
  // use the same construction function as the fwbinop
  using fwbinop::fwbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwsub functions.  */
class vfwsub : public fwbinop
{
public:
  // use the same construction function as the fwbinop
  using fwbinop::fwbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwmul functions.  */
class vfwmul : public fbinop
{
public:
  // use the same construction function as the fbinop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmacc functions.  */
class vfmacc : public fternop
{
public:
  // use the same construction function as the fternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmsac functions.  */
class vfmsac : public fternop
{
public:
  // use the same construction function as the fternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfnmacc functions.  */
class vfnmacc : public fternop
{
public:
  // use the same construction function as the fternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfnmsac functions.  */
class vfnmsac : public fternop
{
public:
  // use the same construction function as the fternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmadd functions.  */
class vfmadd : public fternop
{
public:
  // use the same construction function as the fternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfnmadd functions.  */
class vfnmadd : public fternop
{
public:
  // use the same construction function as the fternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmsub functions.  */
class vfmsub : public fternop
{
public:
  // use the same construction function as the fternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfnmsub functions.  */
class vfnmsub : public fternop
{
public:
  // use the same construction function as the fternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwmacc functions.  */
class vfwmacc : public fternop
{
public:
  // use the same construction function as the ternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwmsac functions.  */
class vfwmsac : public fternop
{
public:
  // use the same construction function as the ternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwnmacc functions.  */
class vfwnmacc : public fternop
{
public:
  // use the same construction function as the ternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwnmsac functions.  */
class vfwnmsac : public fternop
{
public:
  // use the same construction function as the ternop
  using fternop::fternop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfsqrt functions.  */
class vfsqrt : public funop
{
public:
  // use the same construction function as the unop
  using funop::funop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfrsqrt7 functions.  */
class vfrsqrt7 : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfrec7 functions.  */
class vfrec7 : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmax functions.  */
class vfmax : public fbinop
{
public:
  // use the same construction function as the fbinop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmin functions.  */
class vfmin : public fbinop
{
public:
  // use the same construction function as the fbinop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfsgnj, vfsgnjn and vfsgnjx functions.  */
class vfsgnj : public fbinop
{
public:
  // use the same construction function as the fbinop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfsgnjn functions.  */
class vfsgnjn : public fbinop
{
public:
  // use the same construction function as the fbinop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfsgnjx functions.  */
class vfsgnjx : public fbinop
{
public:
  // use the same construction function as the fbinop
  using fbinop::fbinop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfabs functions.  */
class vfabs : public funop
{
public:
  // use the same construction function as the unop
  using funop::funop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcmp functions.  */
class vfcmp : public fbinop
{
public:
  // use the same construction function as the fbinop
  using fbinop::fbinop;

  virtual char *assemble_name (function_instance &) OVERRIDE;
};

/* A function_base for vmfeq functions.  */
class vmfeq : public vfcmp
{
public:
  // use the same construction function as the vfcmp
  using vfcmp::vfcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmfne functions.  */
class vmfne : public vfcmp
{
public:
  // use the same construction function as the vfcmp
  using vfcmp::vfcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmflt functions.  */
class vmflt : public vfcmp
{
public:
  // use the same construction function as the vfcmp
  using vfcmp::vfcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmfle functions.  */
class vmfle : public vfcmp
{
public:
  // use the same construction function as the vfcmp
  using vfcmp::vfcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmfgt functions.  */
class vmfgt : public vfcmp
{
public:
  // use the same construction function as the vfcmp
  using vfcmp::vfcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmfge functions.  */
class vmfge : public vfcmp
{
public:
  // use the same construction function as the vfcmp
  using vfcmp::vfcmp;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfclass functions.  */
class vfclass : public unop
{
public:
  // use the same construction function as the binop
  using unop::unop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmerge functions.  */
class vfmerge : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual size_t
    get_position_of_dest_arg (enum predication_index) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmv functions.  */
class vfmv : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_x_f_v functions.  */
class vfcvt_f2i : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_xu_f_v functions.  */
class vfcvt_f2u : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_rtz_x_f_v functions.  */
class vfcvt_rtz_f2i : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_rtz_xu_f_v functions.  */
class vfcvt_rtz_f2u : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_f_x_v functions.  */
class vfcvt_i2f : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfcvt_f_xu_v functions.  */
class vfcvt_u2f : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_x_f_v functions.  */
class vfwcvt_f2i : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_xu_f_v functions.  */
class vfwcvt_f2u : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_rtz_x_f_v functions.  */
class vfwcvt_rtz_f2i : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_rtz_xu_f_v functions.  */
class vfwcvt_rtz_f2u : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_f_x_v functions.  */
class vfwcvt_i2f : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_f_xu_v functions.  */
class vfwcvt_u2f : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwcvt_f_f_v functions.  */
class vfwcvt_f2f : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_x_f_w functions.  */
class vfncvt_f2i : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_xu_f_w functions.  */
class vfncvt_f2u : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_rtz_x_f_w functions.  */
class vfncvt_rtz_f2i : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_rtz_xu_f_w functions.  */
class vfncvt_rtz_f2u : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_f_x_w functions.  */
class vfncvt_i2f : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_f_xu_w functions.  */
class vfncvt_u2f : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_f_f_w functions.  */
class vfncvt_f2f : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfncvt_rod_f_f_w functions.  */
class vfncvt_f2rodf : public funop
{
public:
  // use the same construction function as the funop
  using funop::funop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vredsum functions.  */
class vredsum : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vredmax functions.  */
class vredmax : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vredmaxu functions.  */
class vredmaxu : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vredmin functions.  */
class vredmin : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vredminu functions.  */
class vredminu : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vredand functions.  */
class vredand : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vredor functions.  */
class vredor : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vredxor functions.  */
class vredxor : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwredsum functions.  */
class vwredsum : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vwredsumu functions.  */
class vwredsumu : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for freduceop functions.  */
class freduceop : public reduceop
{
public:
  // use the same construction function as the reduceop
  using reduceop::reduceop;

  virtual unsigned int call_properties () const OVERRIDE;
};

/* A function_base for vfredosum functions.  */
class vfredosum : public freduceop
{
public:
  // use the same construction function as the freduceop
  using freduceop::freduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfredusum functions.  */
class vfredusum : public freduceop
{
public:
  // use the same construction function as the freduceop
  using freduceop::freduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfredmax functions.  */
class vfredmax : public freduceop
{
public:
  // use the same construction function as the freduceop
  using freduceop::freduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfredmin functions.  */
class vfredmin : public freduceop
{
public:
  // use the same construction function as the freduceop
  using freduceop::freduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwredosum functions.  */
class vfwredosum : public freduceop
{
public:
  // use the same construction function as the freduceop
  using freduceop::freduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfwredusum functions.  */
class vfwredusum : public freduceop
{
public:
  // use the same construction function as the freduceop
  using freduceop::freduceop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmand functions.  */
class vmand : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmor functions.  */
class vmor : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmxor functions.  */
class vmxor : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmnand functions.  */
class vmnand : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmnor functions.  */
class vmnor : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmxnor functions.  */
class vmxnor : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmandn functions.  */
class vmandn : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmorn functions.  */
class vmorn : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmmv functions.  */
class vmmv : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmnot functions.  */
class vmnot : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmclr functions.  */
class vmclr : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmset functions.  */
class vmset : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vcpop functions.  */
class vcpop : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfirst functions.  */
class vfirst : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual tree get_return_type (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsbf functions.  */
class vmsbf : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsif functions.  */
class vmsif : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmsof functions.  */
class vmsof : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for viota functions.  */
class viota : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vid functions.  */
class vid : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual bool can_be_overloaded_p (const function_instance &) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmv_x_s functions.  */
class vmv_x_s : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vmv_s_x functions.  */
class vmv_s_x : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmv_f_s functions.  */
class vfmv_f_s : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfmv_s_f functions.  */
class vfmv_s_f : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vslideup functions.  */
class vslideup : public vshift
{
public:
  // use the same construction function as the vshift
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vslidedown functions.  */
class vslidedown : public vshift
{
public:
  // use the same construction function as the vshift
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vslide1up functions.  */
class vslide1up : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vslide1down functions.  */
class vslide1down : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfslide1up functions.  */
class vfslide1up : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vfslide1down functions.  */
class vfslide1down : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vrgather functions.  */
class vrgather : public vshift
{
public:
  // use the same construction function as the vshift
  using vshift::vshift;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* A function_base for vrgather functions.  */
class vrgatherei16 : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

class vcompress : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;

  virtual size_t
    get_position_of_dest_arg (enum predication_index) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

/* Non-tuple type segement load/store */

/* A function_base for vlseg_template functions.  */
template <unsigned int NF> class vlseg_template : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  bool has_dest_arg_p (enum predication_index) const OVERRIDE;

  size_t get_position_of_mask_arg (enum predication_index) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vlseg2 = vlseg_template<2>;
using vlseg3 = vlseg_template<3>;
using vlseg4 = vlseg_template<4>;
using vlseg5 = vlseg_template<5>;
using vlseg6 = vlseg_template<6>;
using vlseg7 = vlseg_template<7>;
using vlseg8 = vlseg_template<8>;

/* A function_base for vlsegff_template functions.  */
template <unsigned int NF> class vlsegff_template : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  bool has_dest_arg_p (enum predication_index) const OVERRIDE;

  size_t get_position_of_mask_arg (enum predication_index) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vlseg2ff = vlsegff_template<2>;
using vlseg3ff = vlsegff_template<3>;
using vlseg4ff = vlsegff_template<4>;
using vlseg5ff = vlsegff_template<5>;
using vlseg6ff = vlsegff_template<6>;
using vlseg7ff = vlsegff_template<7>;
using vlseg8ff = vlsegff_template<8>;

/* A function_base for vsseg_template functions.  */
template <unsigned int NF> class vsseg_template : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vsseg2 = vsseg_template<2>;
using vsseg3 = vsseg_template<3>;
using vsseg4 = vsseg_template<4>;
using vsseg5 = vsseg_template<5>;
using vsseg6 = vsseg_template<6>;
using vsseg7 = vsseg_template<7>;
using vsseg8 = vsseg_template<8>;

/* A function_base for vlsseg_template functions.  */
template <unsigned int NF> class vlsseg_template : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  bool has_dest_arg_p (enum predication_index) const OVERRIDE;

  size_t get_position_of_mask_arg (enum predication_index) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vlsseg2 = vlsseg_template<2>;
using vlsseg3 = vlsseg_template<3>;
using vlsseg4 = vlsseg_template<4>;
using vlsseg5 = vlsseg_template<5>;
using vlsseg6 = vlsseg_template<6>;
using vlsseg7 = vlsseg_template<7>;
using vlsseg8 = vlsseg_template<8>;

/* A function_base for vssseg_template functions.  */
template <unsigned int NF> class vssseg_template : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vssseg2 = vssseg_template<2>;
using vssseg3 = vssseg_template<3>;
using vssseg4 = vssseg_template<4>;
using vssseg5 = vssseg_template<5>;
using vssseg6 = vssseg_template<6>;
using vssseg7 = vssseg_template<7>;
using vssseg8 = vssseg_template<8>;

/* A function_base for vlxseg_template functions.  */
template <unsigned int NF, indexed_mode uo>
class vlxseg_template : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  bool has_dest_arg_p (enum predication_index) const OVERRIDE;

  size_t get_position_of_mask_arg (enum predication_index) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vluxseg2 = vlxseg_template<2, INDEXED_u>;
using vluxseg3 = vlxseg_template<3, INDEXED_u>;
using vluxseg4 = vlxseg_template<4, INDEXED_u>;
using vluxseg5 = vlxseg_template<5, INDEXED_u>;
using vluxseg6 = vlxseg_template<6, INDEXED_u>;
using vluxseg7 = vlxseg_template<7, INDEXED_u>;
using vluxseg8 = vlxseg_template<8, INDEXED_u>;
using vloxseg2 = vlxseg_template<2, INDEXED_o>;
using vloxseg3 = vlxseg_template<3, INDEXED_o>;
using vloxseg4 = vlxseg_template<4, INDEXED_o>;
using vloxseg5 = vlxseg_template<5, INDEXED_o>;
using vloxseg6 = vlxseg_template<6, INDEXED_o>;
using vloxseg7 = vlxseg_template<7, INDEXED_o>;
using vloxseg8 = vlxseg_template<8, INDEXED_o>;

/* A function_base for vsxseg_template functions.  */
template <unsigned int NF, indexed_mode uo>
class vsxseg_template : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  virtual unsigned int call_properties () const OVERRIDE;

  virtual char *assemble_name (function_instance &) OVERRIDE;

  virtual void get_argument_types (const function_instance &,
				   vec<tree> &) const OVERRIDE;

  virtual gimple *fold (const function_instance &, gimple_stmt_iterator *,
			gcall *) const OVERRIDE;

  virtual rtx expand (const function_instance &, tree, rtx) const OVERRIDE;
};

using vsuxseg2 = vsxseg_template<2, INDEXED_u>;
using vsuxseg3 = vsxseg_template<3, INDEXED_u>;
using vsuxseg4 = vsxseg_template<4, INDEXED_u>;
using vsuxseg5 = vsxseg_template<5, INDEXED_u>;
using vsuxseg6 = vsxseg_template<6, INDEXED_u>;
using vsuxseg7 = vsxseg_template<7, INDEXED_u>;
using vsuxseg8 = vsxseg_template<8, INDEXED_u>;
using vsoxseg2 = vsxseg_template<2, INDEXED_o>;
using vsoxseg3 = vsxseg_template<3, INDEXED_o>;
using vsoxseg4 = vsxseg_template<4, INDEXED_o>;
using vsoxseg5 = vsxseg_template<5, INDEXED_o>;
using vsoxseg6 = vsxseg_template<6, INDEXED_o>;
using vsoxseg7 = vsxseg_template<7, INDEXED_o>;
using vsoxseg8 = vsxseg_template<8, INDEXED_o>;

} // namespace riscv_vector

#endif // end GCC_RISCV_VECTOR_BUILTINS_FUNCTIONS_H
