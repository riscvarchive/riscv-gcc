/* RVV support
   Copyright (C) 2018-2020 Free Software Foundation, Inc.
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

namespace riscv_vector
{

enum lmul_value_index
{
  LMUL_1F8 = 0,
  LMUL_1F4,
  LMUL_1F2,
  LMUL_1,
  LMUL_2,
  LMUL_4,
  LMUL_8,
  NUM_LMUL
};

enum data_type_index
{
  DT_signed,
  DT_unsigned,
  DT_ptr,
  DT_uptr,
  DT_c_ptr,
  DT_c_uptr,
};

enum intrinsic_type_index
{
  IT_none,
  IT_mask_tail,
  IT_tail_only,
  IT_tail_only_mask_first,
  IT_mask_only,
  IT_mask_only_no_vd,
  IT_mask_tail_vd,
  IT_segment,
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

struct vector_lmul_info
{
  lmul_value_index type;
  const char *suffix;
  const char *boolnum;
};

struct vector_type_info
{
  vector_type_index type;
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
  data_type_index dt;
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

struct vector_intrinsic_info
{
  enum intrinsic_type_index intrinsic_type;
  int predicate;
};

/* Describes the various uses of a governing predicate.  */
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

  PRED_void = 1 << 11,

  PRED_m = 1 << 12,

  PRED_m_ta = 1 << 13,
  PRED_m_tu = 1 << 14,

  NUM_PREDS
};

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

enum vector_policy {
  undisturbed = 0,
  agnostic = 1,
  any = 2,
};

constexpr unsigned int
get_vma_vta (vector_policy vma, vector_policy vta)
{
  return (vma << 2) | vta;
}

constexpr vector_policy
get_vma (unsigned int vma_vta)
{
  return (vector_policy)((vma_vta >> 2) & 0b11);
}

constexpr vector_policy
get_vta (unsigned int vma_vta)
{
  return (vector_policy)(vma_vta & 0b11);
}

const unsigned int tama_policy = get_vma_vta(vector_policy::agnostic, vector_policy::agnostic);
const unsigned int tamu_policy = get_vma_vta(vector_policy::undisturbed, vector_policy::agnostic);
const unsigned int tuma_policy = get_vma_vta(vector_policy::agnostic, vector_policy::undisturbed);
const unsigned int tumu_policy = get_vma_vta(vector_policy::undisturbed, vector_policy::undisturbed);
const unsigned int ta_policy = get_vma_vta(vector_policy::any, vector_policy::agnostic);
const unsigned int tu_policy = get_vma_vta(vector_policy::any, vector_policy::undisturbed);
const unsigned int ma_policy = get_vma_vta(vector_policy::agnostic, vector_policy::any);
const unsigned int mu_policy = get_vma_vta(vector_policy::undisturbed, vector_policy::any);
const unsigned int any_policy = get_vma_vta(vector_policy::any, vector_policy::any);

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

class function_builder;

class GTY((user)) function_instance
{
public:
  function_instance (function_builder *_builder, const char *_base_name,
                     vector_arg_modes &_target_arg_pattern,
                     predication_index _target_pred,
                     operation_index _target_operation);

  function_instance ();

  ~function_instance ();

  bool operator== (const function_instance &) const;
  bool operator!= (const function_instance &) const;

  hashval_t hash () const;
  bool check(location_t, tree, tree, unsigned int, tree *) const;
  unsigned int call_properties () const;
  bool reads_global_state_p () const;
  bool modifies_global_state_p () const;
  bool could_trap_p () const;

  const char * get_base_name () const;
  vector_arg_modes get_arg_pattern () const;
  predication_index get_pred () const;
  unsigned int get_vma_vta () const;
  operation_index get_operation () const;
  data_type_index * get_data_type_list () const;
  function_builder * builder () const;
  char * get_func_name () const;
  void clear_func_name () const;

private:
  function_builder *m_builder;
  const char *m_base_name;
  vector_arg_modes m_target_arg_pattern;
  predication_index m_target_pred;
  operation_index m_target_operation;
  char *m_function_name;
  hashval_t *m_hashval;
  bool m_need_free = false;
};

/* Describes a function decl.  */
class GTY (()) registered_function
{
public:
  function_instance GTY ((skip)) instance;

  /* The decl itself.  */
  tree GTY ((skip)) decl;

  /* The architecture extensions that the function requires, as a set of
     RVV_FL_* flags.  */
  uint64_t required_extensions;
};

/* A class for building and registering function decls.  */
class function_builder
{
public:
  function_builder (const char *_base_name,
                    vector_arg_all_modes &_target_arg_patterns,
                    uint64_t _target_pattern,
                    uint64_t _target_preds, uint64_t _target_op_types,
                    const unsigned int _extensions);

  ~function_builder ();

  void register_function ();

  /* Try to fold the given gimple call.  Return the new gimple statement
     on success, otherwise return null.  */
  virtual gimple *
  fold (const function_instance &, gimple_stmt_iterator *, gcall *) const;

  /* Expand the given call into rtl.  Return the result of the function,
     or an arbitrary value if the function doesn't return a result.  */
  virtual rtx expand (const function_instance &, tree, rtx) const = 0;

  rtx expand_builtin_insn (enum insn_code icode, tree exp, rtx target, const function_instance &instance) const;

  virtual tree
  get_return_type (const function_instance &) const;

  virtual tree
  get_dest_type (const tree &return_type, const vec<tree> &argument_types,
                 lmul_value_index lmul) const;

  virtual tree
  get_mask_type (const tree &return_type, const tree &first_type,
                 const vec<tree> &argument_types, lmul_value_index lmul) const;

  virtual void
  get_argument_types (const function_instance &, vec<tree> &) const;

  virtual size_t
  get_dest_arguments_length () const;

  virtual void
  get_name (char *, const function_instance &) const;

  uint64_t get_pattern () const;
  /* check if need add mask operand for corresponding rtl */
  bool need_mask_operand_p () const;
  /* check if need add dest operand for corresponding rtl */
  bool need_dest_operand_p () const;
  /* check if has mask arg for corresponding function decl */
  bool has_mask_arg_p (predication_index pred) const;
  /* check if has dest arg for corresponding function decl */
  virtual bool has_dest_arg_p (predication_index pred) const;
  unsigned int get_policy (predication_index pred) const;
  /* get parameter position of mask arg */
  virtual size_t get_position_of_mask_arg (predication_index pred) const;
  /* get parameter position of dest arg */
  virtual size_t get_position_of_dest_arg (predication_index pred) const;

  void
  apply_predication (tree &, tree &, vec<tree> &, lmul_value_index, predication_index) const;

  virtual unsigned int call_properties (const function_instance &) const;

  vector_arg_modes &
  get_arg_modes_by_iter_idx (unsigned int) const;

  data_type_index *
  get_data_type_list () const;

  bool check_required_extensions (location_t, tree, uint64_t);
  void append_name (const char *);
  char *finish_name ();

private:
  void add_unique_function (const function_instance &, tree, vec<tree> &);
  void build_one (const function_instance &);
  tree get_attributes (const function_instance &);

  registered_function &add_function (const function_instance &, const char *,
                                     tree, tree, bool);

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

enum indexed_mode
{
  INDEXED_u,
  INDEXED_o,
};

/* A function_base for config functions.  */
class config : public function_builder {
public:
// use the same construction function as the function_builder
  using function_builder::function_builder;
  // use the same construction function as the function_builder
  unsigned int
  call_properties (const function_instance &) const OVERRIDE;
  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;
  tree
  get_return_type (const function_instance &) const OVERRIDE;
  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for readvl functions.  */
class readvl : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;

  tree
  get_return_type (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &, tree exp, rtx target) const OVERRIDE;
};

/* A function_base for Miscellaneous functions.  */
class misc : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;

  tree
  get_return_type (const function_instance &instance) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for loadstore functions.  */
class loadstore : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;
};

/* A function_base for indexed loadstore functions.  */
class indexedloadstore : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;
};

/* A function_base for segment functions.  */
class segment : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;
};

/* A function_base for single-width unary functions.  */
class unop : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;

  tree
  get_return_type (const function_instance &instance) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;
};

/* A function_base for single-width binary functions.  */
class binop : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;

  tree
  get_return_type (const function_instance &instance) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;
};

/* A function_base for single-width ternary functions.  */
class ternop : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;
  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;

  tree
  get_return_type (const function_instance &instance) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;
};
/* A function_base for vle functions.  */
class vle : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &instance) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vse functions.  */
class vse : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vlse functions.  */
class vlse : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &instance) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vsse functions.  */
class vsse : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vlm functions.  */
class vlm : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &instance) const OVERRIDE;

  void
  get_argument_types (const function_instance &,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &, tree exp, rtx target) const OVERRIDE;
};

/* A function_base for vsm functions.  */
class vsm : public loadstore
{
public:
  // use the same construction function as the loadstore
  using loadstore::loadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vlxei functions.  */
class vlxei : public indexedloadstore
{
public:
  // use the same construction function as the indexedloadstore
  using indexedloadstore::indexedloadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &instance) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vsxei functions.  */
class vsxei : public indexedloadstore
{
public:
  // use the same construction function as the indexedloadstore
  using indexedloadstore::indexedloadstore;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vleff functions.  */
class vleff : public function_builder
{
public:
  // use the same construction function as the function_builder
  using function_builder::function_builder;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;

  tree
  get_return_type (const function_instance &instance) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  gimple *
  fold (const function_instance &instance, gimple_stmt_iterator *gsi_in,
        gcall *call_in) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vlseg functions.  */
class vlseg : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &instance) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vlsegff functions.  */
class vlsegff : public vlseg
{
public:
  // use the same construction function as the function_builder
  using vlseg::vlseg;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  gimple *
  fold (const function_instance &instance, gimple_stmt_iterator *gsi_in,
        gcall *call_in) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vsseg functions.  */
class vsseg : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vlsseg functions.  */
class vlsseg : public vlseg
{
public:
  // use the same construction function as the vlseg
  using vlseg::vlseg;
  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vssseg functions.  */
class vssseg : public vsseg
{
public:
  // use the same construction function as the vlseg
  using vsseg::vsseg;
  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vlxseg functions.  */
class vlxseg : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  tree
  get_return_type (const function_instance &instance) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vsxseg functions.  */
class vsxseg : public segment
{
public:
  // use the same construction function as the function_builder
  using segment::segment;

  unsigned int
  call_properties (const function_instance &) const OVERRIDE;

  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vadd functions.  */
class vadd : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vsub functions.  */
class vsub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vrsub functions.  */
class vrsub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vneg functions.  */
class vneg : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vwadd and vwsub functions.  */
class vwadd_vwsub : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vwcvt functions.  */
class vwcvt : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vsext/vzext functions.  */
class vext : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vadc functions.  */
class vadc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vsbc functions.  */
class vsbc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vmadc functions.  */
class vmadc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vmsbc functions.  */
class vmsbc : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vlogic functions.  */
class vlogic : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vnot functions.  */
class vnot : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vshift functions.  */
class vshift : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vnshift functions.  */
class vnshift : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vncvt functions.  */
class vncvt : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vcmp functions.  */
class vcmp : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_name (char *name, const function_instance &instance) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vmin/vmax functions.  */
class vmin_vmax : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vmul functions.  */
class vmul : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vmulh functions.  */
class vmulh : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vmulhsu functions.  */
class vmulhsu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vdiv functions.  */
class vdiv : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vwmul functions.  */
class vwmul : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vwmulsusu functions.  */
class vwmulsu : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vimac functions.  */
class vimac : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vwmacc functions.  */
class vwmacc : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vwmaccsu functions.  */
class vwmaccsu : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vwmaccus functions.  */
class vwmaccus : public ternop
{
public:
  // use the same construction function as the ternop
  using ternop::ternop;
  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vmerge functions.  */
class vmerge : public binop
{
public:
  // use the same construction function as the binop
  using binop::binop;
  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  size_t get_position_of_dest_arg (predication_index pred) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};

/* A function_base for vmv functions.  */
class vmv : public unop
{
public:
  // use the same construction function as the unop
  using unop::unop;
  void
  get_argument_types (const function_instance &instance,
                      vec<tree> &argument_types) const OVERRIDE;

  rtx
  expand (const function_instance &instance, tree exp,
          rtx target) const OVERRIDE;
};
} // namespace riscv_vector

#endif // end GCC_RISCV_VECTOR_BUILTINS_FUNCTIONS_H
