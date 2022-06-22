/* Intrinsic implementation for RISC-V 'V' Extension for GNU compiler.
   Copyright (C) 2022-2022 Free Software Foundation, Inc.
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
namespace riscv_vector
{

extern hash_table<registered_function_hasher> *function_table;
extern GTY (()) tree
    vector_types[MAX_TUPLE_NUM][NUM_VECTOR_TYPES + 1][MAX_VLMUL_FIELD];
extern GTY (()) tree
    vector_pointer_types[NUM_VECTOR_TYPES + 1][MAX_VLMUL_FIELD];
extern GTY(()) tree scalar_types[NUM_VECTOR_TYPES];
extern GTY(()) tree scalar_pointer_types[NUM_VECTOR_TYPES];
extern GTY(()) tree const_scalar_pointer_types[NUM_VECTOR_TYPES];

extern GTY (()) vec<registered_function *, va_gc> *registered_functions;

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
get_pred_str (enum predication_index pred, bool overloaded_p = false)
{
  switch (pred)
    {
    case PRED_void:
    case PRED_none:
      return "";

    case PRED_m:
      return overloaded_p ? "" : "_m";

    case PRED_tam:
      return "_tam";

    case PRED_tum:
      return "_tum";

    case PRED_tu:
      return "_tu";

    case PRED_ta:
      return "_ta";

    case PRED_ma:
      return "_ma";

    case PRED_mu:
      return "_mu";

    case PRED_tama:
      return "_tama";

    case PRED_tamu:
      return "_tamu";

    case PRED_tuma:
      return "_tuma";

    case PRED_tumu:
      return "_tumu";

    default:
      gcc_unreachable ();
    }
}

static const char *
get_operation_str (enum operation_index op)
{
  switch (op)
    {
    case OP_vv:
      return "_vv";

    case OP_vx:
      return "_vx";

    case OP_v:
      return "_v";

    case OP_wv:
      return "_wv";

    case OP_wx:
      return "_wx";

    case OP_x_x_v:
      return "_x_x_v";

    case OP_vf2:
      return "_vf2";

    case OP_vf4:
      return "_vf4";

    case OP_vf8:
      return "_vf8";

    case OP_vvm:
      return "_vvm";

    case OP_vxm:
      return "_vxm";

    case OP_x_x_w:
      return "_x_x_w";

    case OP_v_v:
      return "_v_v";

    case OP_v_x:
      return "_v_x";

    case OP_v_f:
      return "_v_f";

    case OP_vs:
      return "_vs";

    case OP_vf:
      return "_vf";

    case OP_wf:
      return "_wf";

    case OP_vfm:
      return "_vfm";

    case OP_vm:
      return "_vm";

    case OP_mm:
      return "_mm";

    case OP_m:
      return "_m";

    default:
      break;
    }

  return "";
}

static const char *
mode2data_type_str (machine_mode mode, bool u, bool ie)
{
  switch (mode)
    {
  #define MODE2DATA_TYPE_STR_TUPLE8(MODE, NBITS, LMUL) \
    case VNx##MODE##mode: \
      return ie ? "_e"#NBITS""#LMUL"" : u ? "_u"#NBITS""#LMUL"" : "_i"#NBITS""#LMUL""; \
    case VNx2x##MODE##mode: \
      return u ? "_u"#NBITS""#LMUL"x2" : "_i"#NBITS""#LMUL"x2"; \
    case VNx3x##MODE##mode: \
      return u ? "_u"#NBITS""#LMUL"x3" : "_i"#NBITS""#LMUL"x3"; \
    case VNx4x##MODE##mode: \
      return u ? "_u"#NBITS""#LMUL"x4" : "_i"#NBITS""#LMUL"x4"; \
    case VNx5x##MODE##mode: \
      return u ? "_u"#NBITS""#LMUL"x5" : "_i"#NBITS""#LMUL"x5"; \
    case VNx6x##MODE##mode: \
      return u ? "_u"#NBITS""#LMUL"x6" : "_i"#NBITS""#LMUL"x6"; \
    case VNx7x##MODE##mode: \
      return u ? "_u"#NBITS""#LMUL"x7" : "_i"#NBITS""#LMUL"x7"; \
    case VNx8x##MODE##mode: \
      return u ? "_u"#NBITS""#LMUL"x8" : "_i"#NBITS""#LMUL"x8";
  #define MODE2DATA_TYPE_STR_TUPLE4(MODE, NBITS, LMUL) \
    case VNx##MODE##mode: \
      return ie ? "_e"#NBITS""#LMUL"" : u ? "_u"#NBITS""#LMUL"" : "_i"#NBITS""#LMUL""; \
    case VNx2x##MODE##mode: \
      return u ? "_u"#NBITS""#LMUL"x2" : "_i"#NBITS""#LMUL"x2"; \
    case VNx3x##MODE##mode: \
      return u ? "_u"#NBITS""#LMUL"x3" : "_i"#NBITS""#LMUL"x3"; \
    case VNx4x##MODE##mode: \
      return u ? "_u"#NBITS""#LMUL"x4" : "_i"#NBITS""#LMUL"x4";
  #define MODE2DATA_TYPE_STR_TUPLE2(MODE, NBITS, LMUL) \
    case VNx##MODE##mode: \
      return ie ? "_e"#NBITS""#LMUL"" : u ? "_u"#NBITS""#LMUL"" : "_i"#NBITS""#LMUL""; \
    case VNx2x##MODE##mode: \
      return u ? "_u"#NBITS""#LMUL"x2" : "_i"#NBITS""#LMUL"x2";
  #define MODE2DATA_TYPE_STR_TUPLE1(MODE, NBITS, LMUL) \
    case VNx##MODE##mode: \
      return ie ? "_e"#NBITS""#LMUL"" : u ? "_u"#NBITS""#LMUL"" : "_i"#NBITS""#LMUL"";
    MODE2DATA_TYPE_STR_TUPLE8 (2QI, 8, mf8)
    MODE2DATA_TYPE_STR_TUPLE8 (4QI, 8, mf4)
    MODE2DATA_TYPE_STR_TUPLE8 (8QI, 8, mf2)
    MODE2DATA_TYPE_STR_TUPLE8 (16QI, 8, m1)
    MODE2DATA_TYPE_STR_TUPLE4 (32QI, 8, m2)
    MODE2DATA_TYPE_STR_TUPLE2 (64QI, 8, m4)
    MODE2DATA_TYPE_STR_TUPLE1 (128QI, 8, m8)
    MODE2DATA_TYPE_STR_TUPLE8 (2HI, 16, mf4)
    MODE2DATA_TYPE_STR_TUPLE8 (4HI, 16, mf2)
    MODE2DATA_TYPE_STR_TUPLE8 (8HI, 16, m1)
    MODE2DATA_TYPE_STR_TUPLE4 (16HI, 16, m2)
    MODE2DATA_TYPE_STR_TUPLE2 (32HI, 16, m4)
    MODE2DATA_TYPE_STR_TUPLE1 (64HI, 16, m8)
    MODE2DATA_TYPE_STR_TUPLE8 (2SI, 32, mf2)
    MODE2DATA_TYPE_STR_TUPLE8 (4SI, 32, m1)
    MODE2DATA_TYPE_STR_TUPLE4 (8SI, 32, m2)
    MODE2DATA_TYPE_STR_TUPLE2 (16SI, 32, m4)
    MODE2DATA_TYPE_STR_TUPLE1 (32SI, 32, m8)
    MODE2DATA_TYPE_STR_TUPLE8 (2DI, 64, m1)
    MODE2DATA_TYPE_STR_TUPLE4 (4DI, 64, m2)
    MODE2DATA_TYPE_STR_TUPLE2 (8DI, 64, m4)
    MODE2DATA_TYPE_STR_TUPLE1 (16DI, 64, m8)
  #undef MODE2DATA_TYPE_STR_TUPLE8
  #undef MODE2DATA_TYPE_STR_TUPLE4
  #undef MODE2DATA_TYPE_STR_TUPLE2
  #undef MODE2DATA_TYPE_STR_TUPLE1
  #define MODE2DATA_TYPE_STR_TUPLE8(MODE, NBITS, LMUL) \
    case VNx##MODE##mode: \
      return "_f"#NBITS""#LMUL""; \
    case VNx2x##MODE##mode: \
      return "_f"#NBITS""#LMUL"x2"; \
    case VNx3x##MODE##mode: \
      return "_f"#NBITS""#LMUL"x3"; \
    case VNx4x##MODE##mode: \
      return "_f"#NBITS""#LMUL"x4"; \
    case VNx5x##MODE##mode: \
      return "_f"#NBITS""#LMUL"x5"; \
    case VNx6x##MODE##mode: \
      return "_f"#NBITS""#LMUL"x6"; \
    case VNx7x##MODE##mode: \
      return "_f"#NBITS""#LMUL"x7"; \
    case VNx8x##MODE##mode: \
      return "_f"#NBITS""#LMUL"x8";
  #define MODE2DATA_TYPE_STR_TUPLE4(MODE, NBITS, LMUL) \
    case VNx##MODE##mode: \
      return "_f"#NBITS""#LMUL""; \
    case VNx2x##MODE##mode: \
      return "_f"#NBITS""#LMUL"x2"; \
    case VNx3x##MODE##mode: \
      return "_f"#NBITS""#LMUL"x3"; \
    case VNx4x##MODE##mode: \
      return "_f"#NBITS""#LMUL"x4";
  #define MODE2DATA_TYPE_STR_TUPLE2(MODE, NBITS, LMUL) \
    case VNx##MODE##mode: \
      return "_f"#NBITS""#LMUL""; \
    case VNx2x##MODE##mode: \
      return "_f"#NBITS""#LMUL"x2";
  #define MODE2DATA_TYPE_STR_TUPLE1(MODE, NBITS, LMUL) \
    case VNx##MODE##mode: \
      return "_f"#NBITS""#LMUL""; 
    MODE2DATA_TYPE_STR_TUPLE8 (2HF, 16, mf4)
    MODE2DATA_TYPE_STR_TUPLE8 (4HF, 16, mf2)
    MODE2DATA_TYPE_STR_TUPLE8 (8HF, 16, m1)
    MODE2DATA_TYPE_STR_TUPLE4 (16HF, 16, m2)
    MODE2DATA_TYPE_STR_TUPLE2 (32HF, 16, m4)
    MODE2DATA_TYPE_STR_TUPLE1 (64HF, 16, m8)
    MODE2DATA_TYPE_STR_TUPLE8 (2SF, 32, mf2)
    MODE2DATA_TYPE_STR_TUPLE8 (4SF, 32, m1)
    MODE2DATA_TYPE_STR_TUPLE4 (8SF, 32, m2)
    MODE2DATA_TYPE_STR_TUPLE2 (16SF, 32, m4)
    MODE2DATA_TYPE_STR_TUPLE1 (32SF, 32, m8)
    MODE2DATA_TYPE_STR_TUPLE8 (2DF, 64, m1)
    MODE2DATA_TYPE_STR_TUPLE4 (4DF, 64, m2)
    MODE2DATA_TYPE_STR_TUPLE2 (8DF, 64, m4)
    MODE2DATA_TYPE_STR_TUPLE1 (16DF, 64, m8)
  #undef MODE2DATA_TYPE_STR_TUPLE8
  #undef MODE2DATA_TYPE_STR_TUPLE4
  #undef MODE2DATA_TYPE_STR_TUPLE2
  #undef MODE2DATA_TYPE_STR_TUPLE1
  case VNx2BImode: return "_b64";
  case VNx4BImode: return "_b32";
  case VNx8BImode: return "_b16";
  case VNx16BImode: return "_b8"; 
  case VNx32BImode: return "_b4"; 
  case VNx64BImode: return "_b2"; 
  case VNx128BImode: return "_b1";
  case QImode: return u ? "_u8" : "_i8";
  case HImode: return u ? "_u16" : "_i16";
  case SImode: return u ? "_u32" : "_i32";
  case DImode: return u ? "_u64" : "_i64";
  case HFmode: return "_f16";
  case SFmode: return "_f32";
  case DFmode: return "_f64";
    default:
      break;
    }

  gcc_unreachable ();
}

static tree
mode2mask_t (machine_mode mode)
{
  int factor = exact_div (GET_MODE_NUNITS (mode), GET_MODE_NUNITS (VNx2BImode))
                   .to_constant ();
  factor = exact_log2 (factor);
  return vector_types[0][VECTOR_TYPE_bool][factor];
}

static enum vector_type_index
get_type_idx (machine_mode mode, bool u)
{
  #define RVV_INT_TYPE(MODE, TYPE, SEW) \
    case MODE: \
      return u ? VECTOR_TYPE_u##TYPE##SEW : VECTOR_TYPE_##TYPE##SEW; \
      break;
  #define RVV_FLOAT_TYPE(MODE, TYPE, SEW) \
    case MODE: \
      return VECTOR_TYPE_##TYPE##SEW; \
      break;
  
  switch (mode)
    {
    case BImode:
      return VECTOR_TYPE_bool;
    RVV_INT_TYPE (QImode, int, 8)
    RVV_INT_TYPE (HImode, int, 16)
    RVV_INT_TYPE (SImode, int, 32)
    RVV_INT_TYPE (DImode, int, 64)
    RVV_FLOAT_TYPE (HFmode, float, 16)
    RVV_FLOAT_TYPE (SFmode, float, 32)
    RVV_FLOAT_TYPE (DFmode, float, 64)
    default:
      gcc_unreachable ();
    }
  
  return (enum vector_type_index) 0;
}

static int
get_lmul_idx (machine_mode mode)
{
  machine_mode innermode = GET_MODE_INNER (mode);
  bool is_bool_p = GET_MODE_CLASS (mode) == MODE_VECTOR_BOOL ? true : false;
  machine_mode base_mode = is_bool_p ? VNx2QImode : VNx2BImode;
  int offset = exact_div (GET_MODE_NUNITS (mode), GET_MODE_NUNITS (base_mode))
                   .to_constant ();
  if (is_bool_p)
    return exact_log2 (offset);
  else
    {
      int nf = riscv_classify_nf (mode);
      offset = exact_log2 (offset / nf);
      int factor = exact_log2 (GET_MODE_BITSIZE (innermode).to_constant () /
                               GET_MODE_BITSIZE (QImode));
      return offset + factor;
    }
}

static tree
get_tuple_t (machine_mode mode, bool u)
{
  gcc_assert (VECTOR_MODE_P (mode));
  machine_mode innermode = GET_MODE_INNER (mode);
  int nf = riscv_classify_nf (mode);
  enum vector_type_index base = get_type_idx (innermode, u);
  int offset = get_lmul_idx (mode);
  tree type = vector_types[nf - 1][base][offset];
  gcc_assert (TYPE_MODE (type) == mode);
  return type;
}

static tree
get_dt_t (machine_mode mode, bool u, bool ptr = false, bool c = false)
{
  if (riscv_tuple_mode_p (mode))
    return get_tuple_t (mode, u);
  
  if (mode == VOIDmode)
    return void_type_node;
    
  machine_mode innermode = GET_MODE_INNER (mode);
  enum vector_type_index base = get_type_idx (innermode, u);
  tree type = NULL_TREE;
  if (VECTOR_MODE_P (mode))
    {
      int offset = get_lmul_idx (mode);      
      if (ptr)
        type = vector_pointer_types[base][offset];
      else
        type = vector_types[0][base][offset];
      
      gcc_assert (type);
      return type;
    }
  
  if (ptr)
    {
      if (c)
        type = const_scalar_pointer_types[base];
      else
        type = scalar_pointer_types[base];
    }
  else
    type = scalar_types[base];
  
  gcc_assert (type);
  return type;
}

/* Helper functions to get datatype of arg. */

static bool
is_dt_ptr (enum data_type_index dt)
{
  return dt == DT_ptr || dt == DT_uptr || dt == DT_c_ptr || dt == DT_c_uptr;
}

static bool
is_dt_unsigned (enum data_type_index dt)
{
  return dt == DT_unsigned || dt == DT_uptr || dt == DT_c_uptr;
}

static bool
is_dt_const (enum data_type_index dt)
{
  return dt == DT_c_ptr || dt == DT_c_uptr;
}

/* Helper functions for builder implementation. */
static void
intrinsic_naming_rule_1 (function_instance &instance, int index)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[index];
  bool unsigned_p = instance.get_data_type_list ()[index] == DT_unsigned;
  const char *name = instance.get_base_name ();
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
}

static void
intrinsic_naming_rule_2 (function_instance &instance, int index1, int index2)
{
  machine_mode dst_mode = instance.get_arg_pattern ().arg_list[index1];
  machine_mode src_mode = instance.get_arg_pattern ().arg_list[index2];
  bool dst_unsigned_p = instance.get_data_type_list ()[index1] == DT_unsigned;
  bool src_unsigned_p = instance.get_data_type_list ()[index2] == DT_unsigned;
  const char *name = instance.get_base_name ();
  const char *op = get_operation_str (instance.get_operation ());
  const char *src_suffix = mode2data_type_str (src_mode, src_unsigned_p, false);
  const char *dst_suffix = mode2data_type_str (dst_mode, dst_unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s%s", name, op, src_suffix, dst_suffix, pred);
}

static tree
get_dt_t_with_index (const function_instance &instance, int index)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[index];
  bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[index]);
  bool ptr_p = is_dt_ptr (instance.get_data_type_list ()[index]);
  bool c_p = is_dt_const (instance.get_data_type_list ()[index]);
  return get_dt_t (mode, unsigned_p, ptr_p, c_p);
}

static bool
vector_scalar_operation_p (enum operation_index op)
{
  return op == OP_vx || op == OP_wx || op == OP_vxm || op == OP_vf ||
         op == OP_wf || op == OP_vfm;
}

static bool
segment_skip_p (const char *base_name, machine_mode mode)
{
  unsigned int nf = riscv_classify_nf (mode);
  std::string str = base_name;
  str = str.substr (str.length() - 1, str.length() - 1);
  if (strcmp (std::to_string (nf).c_str (), str.c_str ()) != 0)
    return true;
  return false;
}

/* Helper for GCC IR fold, to get lhs. */
static tree
get_lhs (const function_instance &instance, gcall *call_in)
{
  tree lhs;
  if (gimple_has_lhs (call_in))
    lhs = gimple_call_lhs (call_in);
  else
    {
      tree type = get_dt_t_with_index (instance, 0);
      lhs = make_ssa_name (type);
    }
  return lhs;
}

/* Return true if the function has no return value.  */
static bool
function_returns_void_p (tree fndecl)
{
  return TREE_TYPE (TREE_TYPE (fndecl)) == void_type_node;
}

/* Take argument ARGNO from EXP's argument list and convert it into
   an expand operand.  Store the operand in *OP.  */

static void
add_input_operand (struct expand_operand *op, tree exp, unsigned argno)
{
  tree arg = CALL_EXPR_ARG (exp, argno);
  rtx x = expand_normal (arg);
  create_input_operand (op, x, TYPE_MODE (TREE_TYPE (arg)));
}

/* Expand instruction ICODE as part of a built-in function sequence.
   Use the first NOPS elements of OPS as the instruction's operands.
   HAS_TARGET_P is true if operand 0 is a target; it is false if the
   instruction has no target.

   Return the target rtx if HAS_TARGET_P, otherwise return const0_rtx.  */

static rtx
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

/* Return the single field in tuple type TYPE.  */
static tree
tuple_type_field (tree type)
{
  for (tree field = TYPE_FIELDS (type); field; field = DECL_CHAIN (field))
    if (TREE_CODE (field) == FIELD_DECL)
      return field;

  gcc_unreachable ();
}

/* Return a hash code for a function_instance.  */
static hashval_t
get_string_hash (const char * input_string)
{
  if (!input_string || strlen (input_string) == 0)
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

/* Subroutine of handle_sew64_on_rv32 function which helps to
   get index of scalar operand. */
   
static unsigned int
parse_scalar_index (const function_instance &instance)
{
  switch (instance.get_pred ())
    {
    case PRED_void:
    case PRED_ta:
      return 1;
    
    case PRED_tu:
    case PRED_tama:
      return 2;
      
    case PRED_m:
    case PRED_ma:
    case PRED_mu:
    case PRED_tamu:
    case PRED_tuma:
    case PRED_tumu:
      return 3;

    default:
      break;
    }
  return 1;
}

/* Handle SEW=64 vector-scalar instruction on RV32 system. */
/* Fold GCC IR for the following cases on RV32 system. 
   vint64m8_t foo (vint64m8_t v, int64_t s) {
    v = vadd_vx_i64m8 (v,s,128);
    v = vadd_vx_i64m8 (v,s,128);
    v = vadd_vx_i64m8 (v,s,128);
    v = vadd_vx_i64m8 (v,s,128);
    v = vadd_vx_i64m8 (v,s,128);
    return vadd_vx_i64m8 (v,s,128);
   }
                ||
                ||
                ||
                \/
   vint64m8_t foo (vint64m8_t v, int64_t s) {
      vint64m8_t _1;
      vint64m8_t _9;
    
      <bb 2> [local count: 1073741824]:
      _1 = vmv_v_x_i64m8 (s, 128);
      v_4 = vadd_vv_i64m8 (v_3(D), _1, 128);
      v_5 = vadd_vv_i64m8 (v_4, _1, 128);
      v_6 = vadd_vv_i64m8 (v_5, _1, 128);
      v_7 = vadd_vv_i64m8 (v_6, _1, 128);
      v_8 = vadd_vv_i64m8 (v_7, _1, 128);
      _9 = vadd_vv_i64m8 (v_8, _1, 128);
      return _9;
    } 
*/

static gimple *
handle_sew64_on_rv32 (const function_instance &instance,
                      gimple_stmt_iterator *gsi_in,
                      gcall *call_in, int offset, bool reverse_p=false)
{
  /* Don't fold GCC IR on RV64 system. */
  if (TARGET_64BIT)
    return NULL;
  
  enum operation_index operation = instance.get_operation ();
  /* Only fold GCC IR for vector-scalar instructions. */
  if (operation != OP_vx && operation != OP_vxm)
    return NULL;
  
  unsigned int i;
  unsigned int index = parse_scalar_index (instance) + offset;
  unsigned int nargs = gimple_call_num_args (call_in);
  tree scalar = gimple_call_arg (call_in, index);
  tree lhs = get_lhs (instance, call_in);
  tree vectype = TREE_TYPE (lhs);
  const char *dt2 = "";
  if (GET_MODE_CLASS (TYPE_MODE (vectype)) == MODE_VECTOR_BOOL)
    {
      dt2 = mode2data_type_str (TYPE_MODE (vectype), false, false);
      vectype = get_dt_t_with_index (instance, 1);
    }
  
  if (GET_MODE_BITSIZE (as_a <scalar_mode> (TYPE_MODE (TREE_TYPE (scalar)))) < DOUBLE_TYPE_SIZE)
    return NULL;
    
  tree min = TYPE_MIN_VALUE (intSI_type_node);
  tree max = TYPE_MAX_VALUE (intSI_type_node);
  if (TREE_CODE (scalar) == INTEGER_CST)
    {
      if (TYPE_UNSIGNED (TREE_TYPE (scalar)))
        {
          if (tree_fits_uhwi_p (scalar))
            {
              unsigned HOST_WIDE_INT val = tree_to_uhwi (scalar);
              if (val <= 0x7FFFFFFFULL || val >= 0xFFFFFFFF80000000ULL)
                return NULL;
            }
        }
      else
        {
          bool overflow_down = tree_int_cst_compare (scalar, min) == -1;
          bool overflow_up = tree_int_cst_compare (scalar, max) == 1;
          if (!overflow_down && !overflow_up)
            return NULL;
        }
    }
  
  tree vector = create_tmp_var (vectype);
  vector = make_ssa_name (vector);
  auto_vec<tree, 8> vargs;
  char resolver[NAME_MAXLEN];
  const char *op = get_operation_str (operation == OP_vxm ? OP_vvm : OP_vv);
  bool unsigned_p = TYPE_UNSIGNED (vectype);
  const char *dt1 = mode2data_type_str (TYPE_MODE (vectype), unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (resolver, NAME_MAXLEN, "vmv_v_x%s", dt1);
  vargs.quick_push (scalar);
  vargs.quick_push (gimple_call_arg (call_in, nargs - 1));
  function_instance fn_instance (resolver);
  hashval_t hashval = fn_instance.hash ();
  registered_function *rfn_slot =
      function_table->find_with_hash (fn_instance, hashval);
  tree decl = rfn_slot->decl;
  gimple *call = gimple_build_call_vec (decl, vargs);
  gimple_call_set_lhs (call, vector);
  gsi_insert_before (gsi_in, call, GSI_SAME_STMT);
  
  vargs.release ();
  for (i = 0; i < nargs; i++)
    {
      if (i == index)
        vargs.quick_push (vector);
      else
        vargs.quick_push (gimple_call_arg (call_in, i));
    }
  
  if (reverse_p)
    std::swap (vargs[index], vargs[index - 1]);
    
  snprintf (resolver, NAME_MAXLEN, "%s%s%s%s%s", instance.get_base_name (), op, dt1, dt2, pred);
  function_instance fn_instance2 (resolver);
  hashval = fn_instance2.hash ();
  rfn_slot = function_table->find_with_hash (fn_instance2, hashval);
  decl = rfn_slot->decl;
  gimple *repl = gimple_build_call_vec (decl, vargs);
  gimple_call_set_lhs (repl, lhs);
  return repl;
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

function_instance::function_instance (function_builder *__builder,
                                      const char *__base_name,
                                      vector_arg_modes &__arg_pattern,
                                      enum predication_index __pred,
                                      enum operation_index __operation)
    : m_builder (__builder), m_base_name (__base_name),
      m_target_arg_pattern (__arg_pattern), m_target_pred (__pred),
      m_target_operation (__operation)
{
  function_name[0] = '\0';
}

function_instance::function_instance (const char *__name)
{
  memcpy (function_name, __name, NAME_MAXLEN);
}

function_instance::~function_instance ()
{
}

inline bool
function_instance::operator== (const function_instance &other) const
{
  return (strcmp (function_name, other.function_name) == 0);
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
  return get_string_hash (function_name);
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
  unsigned int flags = m_builder->call_properties ();

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

enum predication_index
function_instance::get_pred () const
{
  return m_target_pred;
}

unsigned int
function_instance::get_vma_vta () const
{
  return any_policy;
}

enum operation_index
function_instance::get_operation () const
{
  return m_target_operation;
}

enum data_type_index *
function_instance::get_data_type_list () const
{
  return m_builder->get_data_type_list ();
}

function_builder *
function_instance::builder () const
{
  return m_builder;
}

/* function_builder class implemention */

function_builder::function_builder (const char *__base_name,
                                    vector_arg_all_modes &__arg_patterns,
                                    uint64_t __pattern,
                                    uint64_t __preds,
                                    uint64_t __op_types,
                                    const unsigned int __extensions)
    : m_base_name (__base_name), m_target_arg_patterns (__arg_patterns),
      m_target_pattern (__pattern), m_target_preds (__preds),
      m_target_op_types (__op_types), m_required_extensions (__extensions)
{
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

  m_direct_overloads = lang_GNU_CXX ();

  gcc_assert (m_iter_arg_cnt > 0);
  gcc_assert (m_iter_idx_cnt > 0);
  
  gcc_obstack_init (&m_string_obstack);
}

function_builder::~function_builder ()
{
  free (m_iter_arg_idx_list);
  obstack_free (&m_string_obstack, NULL);
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
  return (char *) obstack_finish (&m_string_obstack);
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
  enum predication_index pred = instance.get_pred ();

  /* Map any target to operand 0.  */
  int opno = 0;
  int offset = 0;

  if (!function_returns_void_p (fndecl))
    create_output_operand (&ops[opno++], target, mode);

  if (need_mask_operand_p ())
    {
      if (has_mask_arg_p (pred))
        add_input_operand (&ops[opno++], exp, offset++);
      else
        create_input_operand (&ops[opno++], const0_rtx, Pmode);
    }

  if (need_dest_operand_p ())
    {
      if (has_dest_arg_p (pred))
        add_input_operand (&ops[opno++], exp, offset++);
      else
        create_input_operand (&ops[opno++], const0_rtx, Pmode);
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
function_builder::get_mask_type (tree return_type,
                                 const function_instance &instance,
                                 const vec<tree> &) const
{
  tree type = return_type;
  if (!VECTOR_MODE_P (TYPE_MODE (type)))
    {
      /* Fetch the vector mode start from arg[0]. */
      for (unsigned int i = 0; i < instance.get_arg_pattern ().arg_len; i++)
        {
          if (VECTOR_MODE_P (instance.get_arg_pattern ().arg_list[i]))
            {
              type =
                  get_dt_t (instance.get_arg_pattern ().arg_list[i],
                            instance.get_data_type_list ()[i] == DT_unsigned);
              break;
            }
        }
    }
  gcc_assert (VECTOR_MODE_P (TYPE_MODE (type)));
  if (GET_MODE_CLASS (TYPE_MODE (type)) == MODE_VECTOR_BOOL)
    return type;
  else
    {
      machine_mode mask_mode;
      gcc_assert (
          riscv_vector_get_mask_mode (TYPE_MODE (type)).exists (&mask_mode));
      return mode2mask_t (mask_mode);
    }
}

void
function_builder::get_argument_types (const function_instance &,
                                      vec<tree> &) const
{
}

char *
function_builder::assemble_name (function_instance &)
{
  return nullptr;
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
function_builder::has_mask_arg_p (enum predication_index pred) const
{
  uint64_t pat = get_pattern ();

  return pred == PRED_m || pred == PRED_tam || pred == PRED_tum ||
         pred == PRED_tama || pred == PRED_tamu || pred == PRED_tuma ||
         pred == PRED_tumu || pred == PRED_ma || pred == PRED_mu ||
         (pat & PAT_merge);
}

bool
function_builder::has_dest_arg_p (enum predication_index pred) const
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
    case PRED_tum:
    case PRED_mu:
    case PRED_tamu:
    case PRED_tuma:
    case PRED_tumu:
      return true;
    default:
      return false;
    }
}

bool
function_builder::can_be_overloaded_p (const function_instance &) const
{
  return false;
}

unsigned int
function_builder::get_policy (enum predication_index pred) const
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
    case PRED_tam:
      return ta_policy;
    case PRED_tu:
    case PRED_tum:
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
function_builder::get_position_of_mask_arg (enum predication_index) const
{
  return 0;
}

size_t
function_builder::get_position_of_dest_arg (enum predication_index pred) const
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
function_builder::call_properties () const
{
  return 0;
}

enum data_type_index *
function_builder::get_data_type_list () const
{
  return m_target_arg_patterns.dt_list;
}

/* Return the appropriate function attributes for INSTANCE.  */
tree
function_builder::get_attributes (const function_instance &instance) const
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
                                bool overloaded_p,
                                bool placeholder_p) const
{
  unsigned int code = vec_safe_length (registered_functions);
  code = (code << RISCV_BUILTIN_SHIFT) + RISCV_BUILTIN_VECTOR;
  
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
  rfn.overloaded_p = overloaded_p;
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
function_builder::add_unique_function (function_instance &instance,
                                       tree return_type,
                                       vec<tree> &argument_types)
{
  /* Add the function under its full (unique) name.  */
  char *overloaded_name = this->assemble_name (instance);
  if (instance.function_name[0] == '\0')
    return;
    
  tree fntype = build_function_type_array (
      return_type, argument_types.length (), argument_types.address ());
  tree attrs = get_attributes (instance);
  registered_function &rfn =
      add_function (instance, instance.function_name, fntype, attrs, false, false);

  /* Enter the function into the hash table.  */
  hashval_t hashval = instance.hash ();
  registered_function **rfn_slot =
      function_table->find_slot_with_hash (instance, hashval, INSERT);
  
  if (*rfn_slot)
    {
      error ("duplicate function name: %s", instance.function_name);
      gcc_unreachable ();
    }

  *rfn_slot = &rfn;

  if (overloaded_name)
    {
      /* Attribute lists shouldn't be shared.  */
      tree attrs = get_attributes (instance);
      bool placeholder_p = !m_direct_overloads;
        add_function (instance, overloaded_name, fntype, attrs,
                      false, placeholder_p);
      obstack_free (&m_string_obstack, overloaded_name);
    }
}

/* Check whether all the RISCV_* values in REQUIRED_EXTENSIONS are
   enabled, given that those extensions are required for function FNDECL.
   Report an error against LOCATION if not.  */
bool
function_builder::check_required_extensions (location_t location, tree fndecl,
                                             uint64_t required_extensions) const
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
function_builder::apply_predication (const function_instance &instance,
                                     tree return_type,
                                     vec<tree> &argument_types) const
{
  /* check if mask parameter need. */
  if (has_mask_arg_p (instance.get_pred ()))
    {
      argument_types.quick_insert (
          get_position_of_mask_arg (instance.get_pred ()),
          get_mask_type (return_type, instance, argument_types));
    }

  /* check if dest parameter need. */
  if (has_dest_arg_p (instance.get_pred ()))
    {
      size_t size = get_dest_arguments_length ();
      if (argument_types.is_empty ())
        for (size_t i = 0; i < size; i += 1)
          argument_types.quick_push (return_type);
      else
        for (size_t i = 0; i < size; i += 1)
          argument_types.quick_insert (get_position_of_dest_arg (instance.get_pred ()) + i,
                                       return_type);
    }

  /* check if vl parameter need  */
  if (instance.get_pred () != PRED_none)
    argument_types.quick_push (size_type_node);
}

void
function_builder::build_one (function_instance &instance)
{
  /* Byte forms of vlxusegei take 21 arguments.  */
  auto_vec<tree, 21> argument_types;
  tree return_type = get_return_type (instance);
  get_argument_types (instance, argument_types);
  apply_predication (instance, return_type, argument_types);
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

void
function_builder::register_function ()
{
  for (unsigned iter_idx = 0; iter_idx < m_iter_idx_cnt; iter_idx++)
    {
      vector_arg_modes &arg_modes = get_arg_modes_by_iter_idx (iter_idx);
      
      bool skip_p = false;
      if (arg_modes.arg_len == 0)
        skip_p = true;
        
      if (FLOAT_MODE_P (arg_modes.arg_list[0]) && 
        get_data_type_list ()[0] == DT_unsigned)
        skip_p = true;

      if (skip_p)
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

              function_instance instance (
                  this, m_base_name, arg_modes,
                  (enum predication_index) (m_target_preds & pred),
                  (enum operation_index) (m_target_op_types & op_type));
              build_one (instance);
            }
        }
    }
}

/* A function implementation for config builder */
unsigned int
config::call_properties () const
{
  return CP_READ_CSR | CP_WRITE_CSR;
}

char *
config::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  const char *name = instance.get_base_name ();
  const char *dt = mode2data_type_str (mode, false, true);
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s", name, dt);
  return nullptr;
}

tree
config::get_return_type (const function_instance &) const
{
  return size_type_node;
}

/* A function implementation for vsetvl builder */
void
vsetvl::get_argument_types (const function_instance &,
                            vec<tree> &argument_types) const
{
  argument_types.quick_push (size_type_node);
}

rtx
vsetvl::expand (const function_instance &instance, tree exp, rtx target) const
{
  struct expand_operand ops[MAX_RECOG_OPERANDS];
  tree fndecl = TREE_OPERAND (CALL_EXPR_FN (exp), 0);

  /* Map any target to operand 0.  */
  int opno = 0;
  create_output_operand (&ops[opno++], target, Pmode);
  unsigned int vtype =
      get_vtype_for_mode (instance.get_arg_pattern ().arg_list[0]);
  enum insn_code icode = code_for_vsetvl (Pmode);
  add_input_operand (&ops[opno++], exp, 0);
  /* create vtype input operand.  */
  create_input_operand (&ops[opno++], GEN_INT (vtype), Pmode);
  /* Map the arguments to the other operands.  */
  gcc_assert (opno == insn_data[icode].n_generator_args);
  return generate_builtin_insn (icode, opno, ops,
                                !function_returns_void_p (fndecl));
}

/* A function implementation for vsetvlmax builder */
rtx
vsetvlmax::expand (const function_instance &instance, tree exp, rtx target) const
{
  struct expand_operand ops[MAX_RECOG_OPERANDS];
  tree fndecl = TREE_OPERAND (CALL_EXPR_FN (exp), 0);

  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  if (target && GET_MODE_NUNITS (mode).is_constant ())
    {
      riscv_emit_move (target, GEN_INT (GET_MODE_NUNITS (mode).to_constant ()));
      return target;
    }

  /* Map any target to operand 0.  */
  int opno = 0;
  create_output_operand (&ops[opno++], target, Pmode);
  unsigned int vtype = get_vtype_for_mode (mode);
  enum insn_code icode = code_for_vsetvl (Pmode);
  create_input_operand (&ops[opno++], gen_rtx_REG (Pmode, X0_REGNUM), Pmode);
  /* create vtype input operand.  */
  create_input_operand (&ops[opno++], GEN_INT (vtype), Pmode);
  /* Map the arguments to the other operands.  */
  gcc_assert (opno == insn_data[icode].n_generator_args);
  return generate_builtin_insn (icode, opno, ops,
                                !function_returns_void_p (fndecl));
}

/* A function implementation for readvl functions.  */
unsigned int
readvl::call_properties () const
{
  return CP_READ_CSR;
}

char *
readvl::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  const char *name = instance.get_base_name ();
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s", name, dt);
  return nullptr;
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
  argument_types.quick_push (get_dt_t_with_index (instance, 0));
}

rtx
readvl::expand (const function_instance &, tree exp, rtx target) const
{
  struct expand_operand ops[MAX_RECOG_OPERANDS];
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  tree fndecl = TREE_OPERAND (CALL_EXPR_FN (exp), 0);
  enum insn_code icode = code_for_readvl (Pmode);

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

/* A function implementation for Miscellaneous functions.  */
char *
misc::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  intrinsic_naming_rule_2 (instance, 0, 1);
  append_name (instance.get_base_name ());
  append_name (mode2data_type_str (mode, unsigned_p, false));
  return finish_name ();
}

tree
misc::get_return_type (const function_instance &instance) const
{
  return get_dt_t_with_index (instance, 0);
}

void
misc::get_argument_types (const function_instance &instance,
                          vec<tree> &argument_types) const
{
  argument_types.quick_push (get_dt_t_with_index (instance, 1));
}

/* A function implementation for vreinterpret functions.  */
rtx
vreinterpret::expand (const function_instance &instance, tree exp, rtx target) const
{
  enum insn_code icode = code_for_vreinterpret (instance.get_arg_pattern ().arg_list[0]);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vlmul_ext functions.  */
char *
vlmul_ext::assemble_name (function_instance &instance)
{
  machine_mode tmode = instance.get_arg_pattern ().arg_list[0];
  machine_mode smode = instance.get_arg_pattern ().arg_list[1];
  if (GET_MODE_INNER (tmode) != GET_MODE_INNER (smode))
    return nullptr;

  if (tmode == smode)
    return nullptr;
  
  if (known_lt (GET_MODE_SIZE (tmode), GET_MODE_SIZE (smode)))
    return nullptr;

  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  intrinsic_naming_rule_2 (instance, 0, 1);
  append_name (instance.get_base_name ());
  append_name (mode2data_type_str (tmode, unsigned_p, false));
  return finish_name ();
}

rtx
vlmul_ext::expand (const function_instance &instance, tree exp, rtx target) const
{
  enum insn_code icode = code_for_vlmul_ext (instance.get_arg_pattern ().arg_list[0]);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vlmul_trunc functions.  */
char *
vlmul_trunc::assemble_name (function_instance &instance)
{
  machine_mode tmode = instance.get_arg_pattern ().arg_list[0];
  machine_mode smode = instance.get_arg_pattern ().arg_list[1];
  if (GET_MODE_INNER (tmode) != GET_MODE_INNER (smode))
    return nullptr;

  if (tmode == smode)
    return nullptr;
  
  if (known_gt (GET_MODE_SIZE (tmode), GET_MODE_SIZE (smode)))
    return nullptr;

  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  intrinsic_naming_rule_2 (instance, 0, 1);
  append_name (instance.get_base_name ());
  append_name (mode2data_type_str (tmode, unsigned_p, false));
  return finish_name ();
}

rtx
vlmul_trunc::expand (const function_instance &instance, tree exp, rtx target) const
{
  enum insn_code icode = code_for_vlmul_trunc (instance.get_arg_pattern ().arg_list[0]);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vset functions.  */
char *
vset::assemble_name (function_instance &instance)
{
  machine_mode tmode = instance.get_arg_pattern ().arg_list[0];
  machine_mode smode = instance.get_arg_pattern ().arg_list[2];
  if (GET_MODE_INNER (tmode) != GET_MODE_INNER (smode))
    return nullptr;

  if (tmode == smode)
    return nullptr;
  
  if (known_lt (GET_MODE_SIZE (tmode), GET_MODE_SIZE (smode)))
    return nullptr;
    
  intrinsic_naming_rule_2 (instance, 0, 2);
  append_name (instance.get_base_name ());
  return finish_name ();
}

void
vset::get_argument_types (const function_instance &instance,
                          vec<tree> &argument_types) const
{
  misc::get_argument_types (instance, argument_types);
  argument_types.quick_push (size_type_node);
  argument_types.quick_push (get_dt_t_with_index (instance, 2));
}

gimple *
vset::fold (const function_instance &instance, gimple_stmt_iterator *gsi_in, gcall *call_in) const
{
  tree lhs = get_lhs (instance, call_in);
  tree arg0 = gimple_call_arg (call_in, 0);
  tree arg1 = gimple_call_arg (call_in, 1);
  tree arg2 = gimple_call_arg (call_in, 2);
  machine_mode base_mode = TYPE_MODE (TREE_TYPE (arg2));
  machine_mode full_mode = TYPE_MODE (TREE_TYPE (arg0));
  int index = int_cst_value (arg1);
  unsigned int num_vectors = exact_div (GET_MODE_SIZE (full_mode), GET_MODE_SIZE (base_mode)).to_constant ();
  tree array_type = build_array_type_nelts (TREE_TYPE (arg2), num_vectors);
  SET_TYPE_MODE (array_type, full_mode);
  tree array = create_tmp_var (array_type, "rvv_array");
  gassign *assign = gimple_build_assign (array, fold_build1 (VIEW_CONVERT_EXPR, TREE_TYPE (array), arg0));
  gsi_insert_before (gsi_in, assign, GSI_SAME_STMT);
  tree vector = build4 (ARRAY_REF, TREE_TYPE (arg2), array, size_int (index), NULL_TREE, NULL_TREE);
  assign = gimple_build_assign (vector, arg2);
  gsi_insert_before (gsi_in, assign, GSI_SAME_STMT);
  assign = gimple_build_assign (lhs, array);
  return assign;
}

rtx
vset::expand (const function_instance &, tree, rtx) const
{
  gcc_unreachable ();
  return NULL_RTX;
}

/* A function implementation for vget functions.  */
char *
vget::assemble_name (function_instance &instance)
{
  machine_mode tmode = instance.get_arg_pattern ().arg_list[0];
  machine_mode smode = instance.get_arg_pattern ().arg_list[1];
  if (GET_MODE_INNER (tmode) != GET_MODE_INNER (smode))
    return nullptr;

  if (tmode == smode)
    return nullptr;
  
  if (known_gt (GET_MODE_SIZE (tmode), GET_MODE_SIZE (smode)))
    return nullptr;
  
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  intrinsic_naming_rule_2 (instance, 0, 1);
  append_name (instance.get_base_name ());
  append_name (mode2data_type_str (tmode, unsigned_p, false));
  return finish_name ();
}

void
vget::get_argument_types (const function_instance &instance,
                          vec<tree> &argument_types) const
{
  misc::get_argument_types (instance, argument_types);
  argument_types.quick_push (size_type_node);
}

gimple *
vget::fold (const function_instance &instance, gimple_stmt_iterator *gsi_in, gcall *call_in) const
{
  tree lhs = get_lhs (instance, call_in);
  tree arg0 = gimple_call_arg (call_in, 0);
  tree arg1 = gimple_call_arg (call_in, 1);
  machine_mode base_mode = TYPE_MODE (TREE_TYPE (lhs));
  machine_mode full_mode = TYPE_MODE (TREE_TYPE (arg0));
  int index = int_cst_value (arg1);
  unsigned int num_vectors = exact_div (GET_MODE_SIZE (full_mode), GET_MODE_SIZE (base_mode)).to_constant ();
  tree array_type = build_array_type_nelts (TREE_TYPE (lhs), num_vectors);
  SET_TYPE_MODE (array_type, full_mode);
  tree array = create_tmp_var (array_type, "rvv_array");
  gassign *assign = gimple_build_assign (array, fold_build1 (VIEW_CONVERT_EXPR, TREE_TYPE (array), arg0));
  gsi_insert_before (gsi_in, assign, GSI_SAME_STMT);
  tree vector = build4 (ARRAY_REF, TREE_TYPE (lhs), array, size_int (index), NULL_TREE, NULL_TREE);
  assign = gimple_build_assign (lhs, vector);
  return assign;
}

rtx
vget::expand (const function_instance &, tree, rtx) const
{
  gcc_unreachable ();
  return NULL_RTX;
}

/* A function implementation for vundefined functions.  */
char *
vundefined::assemble_name (function_instance &instance)
{
  const char *name = instance.get_base_name ();
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s", name, dt);
  return nullptr;
}

void
vundefined::get_argument_types (const function_instance &,
                          vec<tree> &) const
{
}

rtx
vundefined::expand (const function_instance &, tree, rtx target) const
{
  emit_insn (gen_rtx_SET (target, const0_rtx));
  return target;
}

/* A function implementation for loadstore functions.  */
char *
loadstore::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  char name[8];
  snprintf (name, 8, "%s%d", instance.get_base_name (), sew);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  if (this->can_be_overloaded_p (instance))
    {
      append_name (name);
      append_name (get_pred_str (instance.get_pred (), true));
      return finish_name ();
    }
  return nullptr;
}

void
loadstore::get_argument_types (const function_instance &instance,
                               vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    argument_types.quick_push (get_dt_t_with_index (instance, i));
}

/* A function implementation for indexed loadstore functions.  */
char *
indexedloadstore::assemble_name (function_instance &instance)
{
  machine_mode data_mode = instance.get_arg_pattern ().arg_list[0];
  machine_mode index_mode = instance.get_arg_pattern ().arg_list[2];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (index_mode));
  char name[NAME_MAXLEN];
  snprintf (name, NAME_MAXLEN, "%s%d", instance.get_base_name (), sew);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (data_mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  append_name (name);
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

void
indexedloadstore::get_argument_types (const function_instance &instance,
                                      vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    argument_types.quick_push (get_dt_t_with_index (instance, i));
}

/* A function implementation for basic_alu functions.  */
char *
basic_alu::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  if (this->can_be_overloaded_p (instance))
    {
      append_name (instance.get_base_name ());
      if (instance.get_operation () == OP_v_x ||
          instance.get_operation () == OP_v_v ||
          instance.get_operation () == OP_v_f)
        append_name ("_v");
      if (instance.get_operation () == OP_x_x_v ||
          instance.get_operation () == OP_x_x_w)
        append_name ("_x");
      append_name (get_pred_str (instance.get_pred (), true));
      return finish_name ();
    }
  return nullptr;
}

tree
basic_alu::get_return_type (const function_instance &instance) const
{
  return get_dt_t_with_index (instance, 0);
}

/* A function implementation for unary functions.  */
void
unop::get_argument_types (const function_instance &instance,
                          vec<tree> &argument_types) const
{
  argument_types.quick_push (get_dt_t_with_index (instance, 1));
}

bool
unop::can_be_overloaded_p (const function_instance &instance) const
{
  if (instance.get_pred () == PRED_none)
    return false;
    
  return true;
}

/* A function implementation for binary functions.  */
gimple *
binop::fold (const function_instance &instance, gimple_stmt_iterator *gsi_in,
            gcall *call_in) const
{
  return handle_sew64_on_rv32 (instance, gsi_in, call_in, 0);
}

void
binop::get_argument_types (const function_instance &instance,
                           vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    {
      if (i == 2 && vector_scalar_operation_p (instance.get_operation ()))
        {
          machine_mode mode = GET_MODE_INNER (instance.get_arg_pattern ().arg_list[i]);
          bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[i]);
          argument_types.quick_push (get_dt_t (mode, unsigned_p));
        }
      else
        argument_types.quick_push (get_dt_t_with_index (instance, i));
    }
}

bool
binop::can_be_overloaded_p (const function_instance &) const
{
  return true;
}

/* A function implementation for widen binary functions.  */
char *
wbinop::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name (instance.get_base_name ());
  append_name (get_operation_str (instance.get_operation ()));
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

/* A function implementation for ternary functions.  */
void
ternop::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  if (vector_scalar_operation_p (instance.get_operation ()))
    {
      machine_mode mode = GET_MODE_INNER (instance.get_arg_pattern ().arg_list[1]);
      bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[1]);
      argument_types.quick_push (get_dt_t (mode, unsigned_p));
    }
  else
    argument_types.quick_push (get_dt_t_with_index (instance, 1));
  for (unsigned int i = 2; i < instance.get_arg_pattern ().arg_len; i++)
    argument_types.quick_push (get_dt_t_with_index (instance, i));
}

bool
ternop::can_be_overloaded_p (const function_instance &) const
{
  return true;
}

gimple *
ternop::fold (const function_instance &instance, gimple_stmt_iterator *gsi_in,
              gcall *call_in) const
{
  int offset = -1;
  enum predication_index pred = instance.get_pred ();
  
  if (pred == PRED_void || pred == PRED_ta
      || pred == PRED_tama)
    offset = 0;
  
  return handle_sew64_on_rv32 (instance, gsi_in, call_in, offset);
}

/* A function implementation for reduction functions.  */
char *
reduceop::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_2 (instance, 0, 1);
  append_name (instance.get_base_name ());
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

void
reduceop::get_argument_types (const function_instance &instance,
                              vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    argument_types.quick_push (get_dt_t_with_index (instance, i));
}

tree
reduceop::get_mask_type (tree, const function_instance &,
                         const vec<tree> &argument_types) const
{
  machine_mode mask_mode;
  gcc_assert (riscv_vector_get_mask_mode (TYPE_MODE (argument_types[0])).exists (&mask_mode));
  return mode2mask_t (mask_mode);
}

/* A function implementation for vle functions.  */
unsigned int
vle::call_properties () const
{
  return CP_READ_MEMORY;
}

tree
vle::get_return_type (const function_instance &instance) const
{
  return get_dt_t_with_index (instance, 0);
}

bool
vle::can_be_overloaded_p (const function_instance &instance) const
{
  return instance.get_pred () == PRED_m || instance.get_pred () == PRED_tu ||
         instance.get_pred () == PRED_tamu ||
         instance.get_pred () == PRED_tuma || instance.get_pred () == PRED_tumu;
}

rtx
vle::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vle (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vse functions.  */
unsigned int
vse::call_properties () const
{
  return CP_WRITE_MEMORY;
}

bool
vse::can_be_overloaded_p (const function_instance &) const
{
  return true;
}

rtx
vse::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vse (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vlse functions.  */
unsigned int
vlse::call_properties () const
{
  return CP_READ_MEMORY;
}

tree
vlse::get_return_type (const function_instance &instance) const
{
  return get_dt_t_with_index (instance, 0);
}

void
vlse::get_argument_types (const function_instance &instance,
                          vec<tree> &argument_types) const
{
  loadstore::get_argument_types (instance, argument_types);
  argument_types.quick_push (ptrdiff_type_node);
}

bool
vlse::can_be_overloaded_p (const function_instance &instance) const
{
  return instance.get_pred () == PRED_m || instance.get_pred () == PRED_tu ||
         instance.get_pred () == PRED_tamu ||
         instance.get_pred () == PRED_tuma || instance.get_pred () == PRED_tumu;
}

rtx
vlse::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vlse (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsse functions.  */
unsigned int
vsse::call_properties () const
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

bool
vsse::can_be_overloaded_p (const function_instance &) const
{
  return true;
}

rtx
vsse::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vsse (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vlm functions.  */
char *
vlm::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  const char *name = instance.get_base_name ();
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s", name, op, dt);
  return nullptr;
}

unsigned int
vlm::call_properties () const
{
  return CP_READ_MEMORY;
}

tree
vlm::get_return_type (const function_instance &instance) const
{
  return get_dt_t_with_index (instance, 0);
}

void
vlm::get_argument_types (const function_instance &,
                         vec<tree> &argument_types) const
{
  argument_types.quick_push (const_scalar_pointer_types[VECTOR_TYPE_uint8]);
}

rtx
vlm::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vlm (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsm functions.  */
char *
vsm::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  const char *name = instance.get_base_name ();
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s", name, op, dt);
  append_name (name);
  return finish_name ();
}

unsigned int
vsm::call_properties () const
{
  return CP_WRITE_MEMORY;
}

void
vsm::get_argument_types (const function_instance &instance,
                         vec<tree> &argument_types) const
{
  argument_types.quick_push (scalar_pointer_types[VECTOR_TYPE_uint8]);
  argument_types.quick_push (get_dt_t_with_index (instance, 0));
}

rtx
vsm::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vsm (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vlxei functions.  */
unsigned int
vlxei::call_properties () const
{
  return CP_READ_MEMORY;
}

tree
vlxei::get_return_type (const function_instance &instance) const
{
  return get_dt_t_with_index (instance, 0);
}

/* A function implementation for vluxei functions.  */
rtx
vluxei::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = TYPE_MODE (TREE_TYPE (exp));
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode = code_for_vlxei (UNSPEC_UNORDER_INDEXED_LOAD, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vloxei functions.  */
rtx
vloxei::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = TYPE_MODE (TREE_TYPE (exp));
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode = code_for_vlxei (UNSPEC_ORDER_INDEXED_LOAD, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsuxei functions.  */
unsigned int
vsuxei::call_properties () const
{
  return CP_WRITE_MEMORY;
}

rtx
vsuxei::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = instance.get_arg_pattern ().arg_list[3];
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode = code_for_vsxei (UNSPEC_UNORDER_INDEXED_STORE, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsoxei functions.  */
unsigned int
vsoxei::call_properties () const
{
  return CP_WRITE_MEMORY;
}

rtx
vsoxei::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = instance.get_arg_pattern ().arg_list[3];
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode = code_for_vsxei (UNSPEC_ORDER_INDEXED_STORE, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vleff functions.  */
unsigned int
vleff::call_properties () const
{
  return CP_READ_MEMORY | CP_RAISE_LD_EXCEPTIONS;
}

char *
vleff::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  unsigned int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  char name[NAME_MAXLEN];
  snprintf (name, NAME_MAXLEN, "vle%dff", sew);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  if (this->can_be_overloaded_p (instance))
    {
      append_name (name);
      append_name (get_pred_str (instance.get_pred (), true));
      return finish_name ();
    }
  return nullptr;
}

tree
vleff::get_return_type (const function_instance &instance) const
{
  return get_dt_t_with_index (instance, 0);
}

void
vleff::get_argument_types (const function_instance &instance,
                           vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    argument_types.quick_push (get_dt_t_with_index (instance, i));
  argument_types.quick_push (build_pointer_type (size_type_node));
}

bool 
vleff::can_be_overloaded_p (const function_instance &instance) const
{
  return instance.get_pred () == PRED_m || instance.get_pred () == PRED_tu ||
         instance.get_pred () == PRED_tamu ||
         instance.get_pred () == PRED_tuma || instance.get_pred () == PRED_tumu;
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
  tree lhs = get_lhs (instance, call_in);
  gimple_call_set_lhs (repl, lhs);

  tree var = create_tmp_var (size_type_node, "new_vl");
  tree tem = make_ssa_name (size_type_node);
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  char resolver[NAME_MAXLEN];
  snprintf (resolver, NAME_MAXLEN, "readvl%s", mode2data_type_str (mode, unsigned_p, false));
  function_instance fn_instance (resolver);
  hashval_t hashval = fn_instance.hash ();
  registered_function *rfn_slot =
      function_table->find_with_hash (fn_instance, hashval);
  tree decl = rfn_slot->decl;
  
  gimple *g = gimple_build_call (decl, 1, lhs);
  gimple_call_set_lhs (g, var);
  tree indirect = fold_build2 (
      MEM_REF, size_type_node,
      gimple_call_arg (call_in, gimple_call_num_args (call_in) - offset),
      build_int_cst (build_pointer_type (size_type_node), 0));
  gassign *assign = gimple_build_assign (indirect, tem);
  gsi_insert_after (gsi_in, assign, GSI_SAME_STMT);
  gsi_insert_after (gsi_in, gimple_build_assign (tem, var), GSI_SAME_STMT);
  gsi_insert_after (gsi_in, g, GSI_SAME_STMT);

  return repl;
}

rtx
vleff::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vleff (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vlseg functions.  */
unsigned int
vlseg::call_properties () const
{
  return CP_READ_MEMORY;
}

char *
vlseg::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[0]);
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  int nf = riscv_classify_nf (mode);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  char name[NAME_MAXLEN];
  snprintf (name, NAME_MAXLEN, "%s%de%d", instance.get_base_name (), nf, sew);
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  if (this->can_be_overloaded_p (instance))
    {
      append_name (name);
      append_name (get_pred_str (instance.get_pred (), true));
      return finish_name ();
    }
  return nullptr;
}

tree
vlseg::get_return_type (const function_instance &instance) const
{
  return get_dt_t_with_index (instance, 0);
}

void
vlseg::get_argument_types (const function_instance &instance,
                           vec<tree> &argument_types) const
{
  for (unsigned int i = 2; i < instance.get_arg_pattern ().arg_len; i++)
    argument_types.quick_push (get_dt_t_with_index (instance, i));
}

bool 
vlseg::can_be_overloaded_p (const function_instance &instance) const
{
  return instance.get_pred () == PRED_m || instance.get_pred () == PRED_tu ||
         instance.get_pred () == PRED_tamu ||
         instance.get_pred () == PRED_tuma || instance.get_pred () == PRED_tumu;
}

rtx
vlseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vlseg (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vlsegff functions.  */
unsigned int
vlsegff::call_properties () const
{
  return CP_READ_MEMORY | CP_RAISE_LD_EXCEPTIONS;
}

char *
vlsegff::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[0]);
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  int nf = riscv_classify_nf (mode);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  char name[NAME_MAXLEN];
  snprintf (name, NAME_MAXLEN, "vlseg%de%dff", nf, sew);
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  if (can_be_overloaded_p (instance))
    {
      append_name (name);
      append_name (get_pred_str (instance.get_pred (), true));
      return finish_name ();
    }
  return nullptr;
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
  tree lhs = get_lhs (instance, call_in);
  gimple_call_set_lhs (repl, lhs);

  tree var = create_tmp_var (size_type_node, "new_vl");
  tree tem = make_ssa_name (size_type_node);

  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_uptr;
  char resolver[NAME_MAXLEN];
  snprintf (resolver, NAME_MAXLEN, "readvl%s", mode2data_type_str (mode, unsigned_p, false));
  function_instance fn_instance (resolver);
  hashval_t hashval = fn_instance.hash ();
  registered_function *rfn_slot =
      function_table->find_with_hash (fn_instance, hashval);
  tree decl = rfn_slot->decl;
  
  gimple *g = gimple_build_call (decl, 1, lhs);
  gimple_call_set_lhs (g, var);
  tree indirect = fold_build2 (
      MEM_REF, size_type_node,
      gimple_call_arg (call_in, gimple_call_num_args (call_in) - offset),
      build_int_cst (build_pointer_type (size_type_node), 0));
  gassign *assign = gimple_build_assign (indirect, tem);
  gsi_insert_after (gsi_in, assign, GSI_SAME_STMT);
  gsi_insert_after (gsi_in, gimple_build_assign (tem, var), GSI_SAME_STMT);
  gsi_insert_after (gsi_in, g, GSI_SAME_STMT);

  return repl;
}

rtx
vlsegff::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vlsegff (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsseg functions.  */
unsigned int
vsseg::call_properties () const
{
  return CP_WRITE_MEMORY;
}

char *
vsseg::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[2]);
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  int nf = riscv_classify_nf (mode);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  char name[NAME_MAXLEN];
  snprintf (name, NAME_MAXLEN, "%s%de%d", instance.get_base_name (), nf, sew);
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  append_name (name);
  return finish_name ();
}
  
void
vsseg::get_argument_types (const function_instance &instance,
                           vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    argument_types.quick_push (get_dt_t_with_index (instance, i));
}

rtx
vsseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode = code_for_vsseg (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vlsseg functions.  */
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
  enum insn_code icode = code_for_vlsseg (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vssseg functions.  */
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
  enum insn_code icode = code_for_vssseg (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vlxseg functions.  */
unsigned int
vlxseg::call_properties () const
{
  return CP_READ_MEMORY;
}

char *
vlxseg::assemble_name (function_instance &instance)
{
  machine_mode data_mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[0]);
  machine_mode index_mode = instance.get_arg_pattern ().arg_list[3];
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (index_mode));
  int nf = riscv_classify_nf (data_mode);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (data_mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  char name[NAME_MAXLEN];
  snprintf (name, NAME_MAXLEN, "%s%dei%d", instance.get_base_name (), nf, sew);
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  append_name (name);
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

tree
vlxseg::get_return_type (const function_instance &instance) const
{
  return get_dt_t_with_index (instance, 0);
}

void
vlxseg::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  for (unsigned int i = 2; i < instance.get_arg_pattern ().arg_len; i++)
    argument_types.quick_push (get_dt_t_with_index (instance, i));
}

/* A function implementation for vluxseg functions.  */
rtx
vluxseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = TYPE_MODE (TREE_TYPE (exp));
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[3];
  enum insn_code icode = code_for_vlxsegei (UNSPEC_UNORDER_INDEXED_LOAD, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vloxseg functions.  */
rtx
vloxseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = TYPE_MODE (TREE_TYPE (exp));
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[3];
  enum insn_code icode = code_for_vlxsegei (UNSPEC_ORDER_INDEXED_LOAD, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsxseg functions.  */
unsigned int
vsxseg::call_properties () const
{
  return CP_WRITE_MEMORY;
}

char *
vsxseg::assemble_name (function_instance &instance)
{
  machine_mode data_mode = instance.get_arg_pattern ().arg_list[3];
  bool unsigned_p = is_dt_unsigned (instance.get_data_type_list ()[3]);
  machine_mode index_mode = instance.get_arg_pattern ().arg_list[2];
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (index_mode));
  int nf = riscv_classify_nf (data_mode);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (data_mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  char name[NAME_MAXLEN];
  snprintf (name, NAME_MAXLEN, "%s%dei%d", instance.get_base_name (), nf, sew);
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  append_name (name);
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

void
vsxseg::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  for (unsigned int i = 1; i < instance.get_arg_pattern ().arg_len; i++)
    argument_types.quick_push (get_dt_t_with_index (instance, i));
}

/* A function implementation for vsuxseg functions.  */
rtx
vsuxseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = instance.get_arg_pattern ().arg_list[3];
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode = code_for_vsxsegei (UNSPEC_UNORDER_INDEXED_STORE, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsoxseg functions.  */
rtx
vsoxseg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode1 = instance.get_arg_pattern ().arg_list[3];
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode = code_for_vsxsegei (UNSPEC_ORDER_INDEXED_STORE, mode1, mode2);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vadd functions.  */
rtx
vadd::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vadd_vv (mode);
  else
    icode = code_for_v_vx (UNSPEC_VADD, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsub functions.  */
rtx
vsub::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vsub_vv (mode);
  else
    icode = code_for_v_vx (UNSPEC_VSUB, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vrsub functions.  */
char *
vrsub::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  const char *name = "vrsub";
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  append_name (name);
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

gimple *
vrsub::fold (const function_instance &instance, gimple_stmt_iterator *gsi_in,
            gcall *call_in) const
{
  return handle_sew64_on_rv32 (instance, gsi_in, call_in, 0, true);
}

rtx
vrsub::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_v_vx (UNSPEC_VRSUB, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vneg functions.  */
rtx
vneg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vneg_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwadd functions.  */
rtx
vwadd::expand (const function_instance &instance, tree exp,
                     rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vw_vv (PLUS, SIGN_EXTEND, mode);
  else if (instance.get_operation () == OP_vx)
    icode = code_for_vw_vx (PLUS, SIGN_EXTEND, mode);
  else if (instance.get_operation () == OP_wv)
    icode = code_for_vw_wv (PLUS, SIGN_EXTEND, mode);
  else
    icode = code_for_vw_wx (PLUS, SIGN_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwsub functions.  */
rtx
vwsub::expand (const function_instance &instance, tree exp,
                     rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vw_vv (MINUS, SIGN_EXTEND, mode);
  else if (instance.get_operation () == OP_vx)
    icode = code_for_vw_vx (MINUS, SIGN_EXTEND, mode);
  else if (instance.get_operation () == OP_wv)
    icode = code_for_vw_wv (MINUS, SIGN_EXTEND, mode);
  else
    icode = code_for_vw_wx (MINUS, SIGN_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwaddu functions.  */
rtx
vwaddu::expand (const function_instance &instance, tree exp,
                     rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vw_vv (PLUS, ZERO_EXTEND, mode);
  else if (instance.get_operation () == OP_vx)
    icode = code_for_vw_vx (PLUS, ZERO_EXTEND, mode);
  else if (instance.get_operation () == OP_wv)
    icode = code_for_vw_wv (PLUS, ZERO_EXTEND, mode);
  else
    icode = code_for_vw_wx (PLUS, ZERO_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwsubu functions.  */
rtx
vwsubu::expand (const function_instance &instance, tree exp,
                     rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vw_vv (MINUS, ZERO_EXTEND, mode);
  else if (instance.get_operation () == OP_vx)
    icode = code_for_vw_vx (MINUS, ZERO_EXTEND, mode);
  else if (instance.get_operation () == OP_wv)
    icode = code_for_vw_wv (MINUS, ZERO_EXTEND, mode);
  else
    icode = code_for_vw_wx (MINUS, ZERO_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwcvt functions.  */
rtx
vwcvt::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vwcvt_x_x_v (SIGN_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwcvtu functions.  */
rtx
vwcvtu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vwcvt_x_x_v (ZERO_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsext functions.  */
char *
vsext::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name (instance.get_base_name ());
  append_name (get_operation_str (instance.get_operation ()));
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vsext::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vf2)
    icode = code_for_vext_vf2 (SIGN_EXTEND, mode);
  else if (instance.get_operation () == OP_vf4)
    icode = code_for_vext_vf4 (SIGN_EXTEND, mode);
  else
    icode = code_for_vext_vf8 (SIGN_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vzext functions.  */
char *
vzext::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name (instance.get_base_name ());
  append_name (get_operation_str (instance.get_operation ()));
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vzext::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vf2)
    icode = code_for_vext_vf2 (ZERO_EXTEND, mode);
  else if (instance.get_operation () == OP_vf4)
    icode = code_for_vext_vf4 (ZERO_EXTEND, mode);
  else
    icode = code_for_vext_vf8 (ZERO_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vadc functions.  */
rtx
vadc::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vvm)
    icode = code_for_vadc_vvm (mode);
  else
    icode = code_for_v_vxm (UNSPEC_VADC, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsbc functions.  */
rtx
vsbc::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vvm)
    icode = code_for_vsbc_vvm (mode);
  else
    icode = code_for_v_vxm (UNSPEC_VSBC, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmadc functions.  */
char *
vmadc::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_2 (instance, 0, 1);
  append_name (instance.get_base_name ());
  return finish_name ();
}

rtx
vmadc::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
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

/* A function implementation for vmsbc functions.  */
char *
vmsbc::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_2 (instance, 0, 1);
  append_name (instance.get_base_name ());
  return finish_name ();
}

rtx
vmsbc::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
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

/* A function implementation for vand functions.  */
rtx
vand::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (AND, mode);
  else
    icode = code_for_v_vx (UNSPEC_VAND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vor functions.  */
rtx
vor::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (IOR, mode);
  else
    icode = code_for_v_vx (UNSPEC_VIOX, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vxor functions.  */
rtx
vxor::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (XOR, mode);
  else
    icode = code_for_v_vx (UNSPEC_VXOR, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vnot functions.  */
rtx
vnot::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));

  enum insn_code icode = code_for_vnot_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vshift functions.  */
void
vshift::get_argument_types (const function_instance &instance,
                            vec<tree> &argument_types) const
{
  argument_types.quick_push (get_dt_t_with_index (instance, 1));
  if (instance.get_operation () == OP_vx || instance.get_operation () == OP_wx)
    argument_types.quick_push (size_type_node);
  else
    argument_types.quick_push (get_dt_t_with_index (instance, 2));
}

gimple *
vshift::fold (const function_instance &, gimple_stmt_iterator *,
              gcall *) const
{
  return NULL;
}

/* A function implementation for vsll functions.  */
rtx
vsll::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (ASHIFT, mode);
  else
    icode = code_for_v_vx (ASHIFT, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsrl functions.  */
rtx
vsrl::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (LSHIFTRT, mode);
  else
    icode = code_for_v_vx (LSHIFTRT, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsra functions.  */
rtx
vsra::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (ASHIFTRT, mode);
  else
    icode = code_for_v_vx (ASHIFTRT, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vnsrl functions.  */
rtx
vnsrl::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode;
  if (instance.get_operation () == OP_wv)
    icode = code_for_vn_wv (LSHIFTRT, mode);
  else
    icode = code_for_vn_wx (LSHIFTRT, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vnsra functions.  */
rtx
vnsra::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode;
  if (instance.get_operation () == OP_wv)
    icode = code_for_vn_wv (ASHIFTRT, mode);
  else
    icode = code_for_vn_wx (ASHIFTRT, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vncvt functions.  */
rtx
vncvt::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vncvt_x_x_w (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vcmp functions.  */
char *
vcmp::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_2 (instance, 0, 1);
  append_name (instance.get_base_name ());
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

/* A function implementation for vmseq functions.  */
rtx
vmseq::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vms_vv (EQ, mode);
  else
    icode = code_for_vms_vx (EQ, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmsne functions.  */
rtx
vmsne::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vms_vv (NE, mode);
  else
    icode = code_for_vms_vx (NE, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmslt functions.  */
rtx
vmslt::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vms_vv (LT, mode);
  else
    icode = code_for_vms_vx (LT, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmsltu functions.  */
rtx
vmsltu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vms_vv (LTU, mode);
  else
    icode = code_for_vms_vx (LTU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmsgt functions.  */
rtx
vmsgt::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vms_vv (GT, mode);
  else
    icode = code_for_vms_vx (GT, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmsgtu functions.  */
rtx
vmsgtu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vms_vv (GTU, mode);
  else
    icode = code_for_vms_vx (GTU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmsle functions.  */
rtx
vmsle::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vms_vv (LE, mode);
  else
    icode = code_for_vms_vx (LE, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmsleu functions.  */
rtx
vmsleu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vms_vv (LEU, mode);
  else
    icode = code_for_vms_vx (LEU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmsge functions.  */
rtx
vmsge::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vms_vv (GE, mode);
  else
    icode = code_for_vms_vx (GE, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmsgeu functions.  */
rtx
vmsgeu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vms_vv (GEU, mode);
  else
    icode = code_for_vms_vx (GEU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmin functions.  */
rtx
vmin::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (SMIN, mode);
  else
    icode = code_for_v_vx (UNSPEC_VMIN, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vminu functions.  */
rtx
vminu::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UMIN, mode);
  else
    icode = code_for_v_vx (UNSPEC_VMINU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmax functions.  */
rtx
vmax::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (SMAX, mode);
  else
    icode = code_for_v_vx (UNSPEC_VMAX, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmaxu functions.  */
rtx
vmaxu::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UMAX, mode);
  else
    icode = code_for_v_vx (UNSPEC_VMAXU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmul functions.  */
rtx
vmul::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmul_vv (mode);
  else
    icode = code_for_v_vx (UNSPEC_VMUL, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmulh functions.  */
rtx
vmulh::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmulh_vv (UNSPEC_VMULH, mode);
  else
    icode = code_for_v_vx (UNSPEC_VMULH, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmulhu functions.  */
rtx
vmulhu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmulh_vv (UNSPEC_VMULHU, mode);
  else
    icode = code_for_v_vx (UNSPEC_VMULHU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmulhsu functions.  */
rtx
vmulhsu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmulhsu_vv (mode);
  else
    icode = code_for_v_vx (UNSPEC_VMULHSU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vdiv functions.  */
rtx
vdiv::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (DIV, mode);
  else
    icode = code_for_v_vx (UNSPEC_VDIV, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vdivu functions.  */
rtx
vdivu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UDIV, mode);
  else
    icode = code_for_v_vx (UNSPEC_VDIVU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vrem functions.  */
rtx
vrem::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (MOD, mode);
  else
    icode = code_for_v_vx (UNSPEC_VREM, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vremu functions.  */
rtx
vremu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UMOD, mode);
  else
    icode = code_for_v_vx (UNSPEC_VREMU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}
                               
/* A function implementation for vwmul functions.  */
rtx
vwmul::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vwmul_vv (SIGN_EXTEND, mode);
  else
    icode = code_for_vwmul_vx (SIGN_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwmulu functions.  */
rtx
vwmulu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vwmul_vv (ZERO_EXTEND, mode);
  else
    icode = code_for_vwmul_vx (ZERO_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwmulsusu functions.  */
rtx
vwmulsu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vwmulsu_vv (mode);
  else
    icode = code_for_vwmulsu_vx (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmacc functions.  */
rtx
vmacc::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_MACC, mode);
  else
    icode = code_for_v_vx (UNSPEC_MACC, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vnmsac functions.  */
rtx
vnmsac::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_NMSAC, mode);
  else
    icode = code_for_v_vx (UNSPEC_NMSAC, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmadd functions.  */
rtx
vmadd::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_MADD, mode);
  else
    icode = code_for_v_vx (UNSPEC_MADD, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vnmsub functions.  */
rtx
vnmsub::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_NMSUB, mode);
  else
    icode = code_for_v_vx (UNSPEC_NMSUB, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwmacc functions.  */
rtx
vwmacc::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vwmacc_vv (SIGN_EXTEND, mode);
  else
    icode = code_for_vwmacc_vx (SIGN_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwmaccu functions.  */
rtx
vwmaccu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vwmacc_vv (ZERO_EXTEND, mode);
  else
    icode = code_for_vwmacc_vx (ZERO_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwmaccsu functions.  */
rtx
vwmaccsu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vwmaccsu_vv (mode);
  else
    icode = code_for_vwmaccsu_vx (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwmaccus functions.  */
rtx
vwmaccus::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vwmaccus_vx (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmerge functions.  */
gimple *
vmerge::fold (const function_instance &instance, gimple_stmt_iterator *gsi_in,
              gcall *call_in) const
{
  return handle_sew64_on_rv32 (instance, gsi_in, call_in, 1);
}

size_t
vmerge::get_position_of_dest_arg (enum predication_index) const
{
  return 1;
}

rtx
vmerge::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vvm)
    icode = code_for_vmerge_vvm (mode);
  else
   icode = code_for_v_vxm (UNSPEC_VMERGE, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmv functions.  */
void
vmv::get_argument_types (const function_instance &instance,
                         vec<tree> &argument_types) const
{
  if (instance.get_operation () == OP_v_x)
    argument_types.quick_push (get_dt_t_with_index (instance, 1));
  else
    argument_types.quick_push (get_dt_t_with_index (instance, 0));
}

bool
vmv::can_be_overloaded_p (const function_instance &instance) const
{
  if (instance.get_operation () == OP_v_v)
    return true;
  
  if (instance.get_pred () == PRED_tu)
    return true;
  
  return false;
}

rtx
vmv::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_v_x)
    icode = code_for_vmv_v_x (mode);
  else
    icode = code_for_vmv_v_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsadd functions.  */
rtx
vsadd::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (SS_PLUS, mode);
  else
    icode = code_for_v_vx (UNSPEC_VSADD, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsaddu functions.  */
rtx
vsaddu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (US_PLUS, mode);
  else
    icode = code_for_v_vx (UNSPEC_VSADDU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vaadd functions.  */
rtx
vaadd::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_AADD, mode);
  else
    icode = code_for_v_vx (UNSPEC_VAADD, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vaaddu functions.  */
rtx
vaaddu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_AADDU, mode);
  else
    icode = code_for_v_vx (UNSPEC_VAADDU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vssub functions.  */
rtx
vssub::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vsssub_vv (mode);
  else
    icode = code_for_v_vx (UNSPEC_VSSUB, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vssubu functions.  */
rtx
vssubu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vussub_vv (mode);
  else
    icode = code_for_v_vx (UNSPEC_VSSUBU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vasub functions.  */
rtx
vasub::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_ASUB, mode);
  else
    icode = code_for_v_vx (UNSPEC_VASUB, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vasubu functions.  */
rtx
vasubu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_ASUBU, mode);
  else
    icode = code_for_v_vx (UNSPEC_VASUBU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vssrl functions.  */
rtx
vssrl::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_SSRL, mode);
  else
    icode = code_for_v_vx (UNSPEC_SSRL, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vssra functions.  */
rtx
vssra::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_SSRA, mode);
  else
    icode = code_for_v_vx (UNSPEC_SSRA, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vsmul functions.  */
rtx
vsmul::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_v_vv (UNSPEC_SMUL, mode);
  else
    icode = code_for_v_vx (UNSPEC_VSMUL, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vnclip functions.  */
rtx
vnclip::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_wv)
    icode = code_for_vn_wv (UNSPEC_SIGNED_CLIP, mode);
  else
    icode = code_for_vn_wx (UNSPEC_SIGNED_CLIP, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vnclipu functions.  */
rtx
vnclipu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_wv)
    icode = code_for_vn_wv (UNSPEC_UNSIGNED_CLIP, mode);
  else
    icode = code_for_vn_wx (UNSPEC_UNSIGNED_CLIP, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for funop functions.  */
unsigned int
funop::call_properties () const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

/* A function implementation for fbinop functions.  */
unsigned int
fbinop::call_properties () const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

/* A function implementation for fwbinop functions.  */
unsigned int
fwbinop::call_properties () const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

/* A function implementation for fternop functions.  */
unsigned int
fternop::call_properties () const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

/* A function implementation for vfadd functions.  */
rtx
vfadd::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (PLUS, mode);
  else
    icode = code_for_vf_vf (PLUS, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfsub functions.  */
rtx
vfsub::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (MINUS, mode);
  else
    icode = code_for_vf_vf (MINUS, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfmul functions.  */
rtx
vfmul::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (MULT, mode);
  else
    icode = code_for_vf_vf (MULT, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfdiv functions.  */
rtx
vfdiv::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (DIV, mode);
  else
    icode = code_for_vf_vf (DIV, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}
                                                         
/* A function implementation for vfrsub and vfrdiv functions.  */
rtx
vfrsub::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vfr_vf (MINUS, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfrdiv functions.  */
rtx
vfrdiv::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vfr_vf (DIV, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfneg functions.  */
rtx
vfneg::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vfneg_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwadd functions.  */
rtx
vfwadd::expand (const function_instance &instance, tree exp,
                      rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfw_vv (PLUS, mode);
  else if (instance.get_operation () == OP_vf)
    icode = code_for_vfw_vf (PLUS, mode);
  else if (instance.get_operation () == OP_wv)
    icode = code_for_vfw_wv (PLUS, mode);
  else
    icode = code_for_vfw_wf (PLUS, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwsub functions.  */
rtx
vfwsub::expand (const function_instance &instance, tree exp,
                      rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfw_vv (MINUS, mode);
  else if (instance.get_operation () == OP_vf)
    icode = code_for_vfw_vf (MINUS, mode);
  else if (instance.get_operation () == OP_wv)
    icode = code_for_vfw_wv (MINUS, mode);
  else
    icode = code_for_vfw_wf (MINUS, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwmul functions.  */
rtx
vfwmul::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfwmul_vv (mode);
  else
    icode = code_for_vfwmul_vf (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfmacc functions.  */
rtx
vfmacc::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (UNSPEC_MACC, mode);
  else
    icode = code_for_vf_vf (UNSPEC_MACC, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfmsac functions.  */
rtx
vfmsac::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (UNSPEC_MSAC, mode);
  else
    icode = code_for_vf_vf (UNSPEC_MSAC, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfnmacc functions.  */
rtx
vfnmacc::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (UNSPEC_NMACC, mode);
  else
    icode = code_for_vf_vf (UNSPEC_NMACC, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfnmsac functions.  */
rtx
vfnmsac::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (UNSPEC_NMSAC, mode);
  else
    icode = code_for_vf_vf (UNSPEC_NMSAC, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfmadd functions.  */
rtx
vfmadd::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (UNSPEC_MADD, mode);
  else
    icode = code_for_vf_vf (UNSPEC_MADD, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfnmadd functions.  */
rtx
vfnmadd::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (UNSPEC_NMADD, mode);
  else
    icode = code_for_vf_vf (UNSPEC_NMADD, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfmsub functions.  */
rtx
vfmsub::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (UNSPEC_MSUB, mode);
  else
    icode = code_for_vf_vf (UNSPEC_MSUB, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfnmsub functions.  */
rtx
vfnmsub::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (UNSPEC_NMSUB, mode);
  else
    icode = code_for_vf_vf (UNSPEC_NMSUB, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwmacc functions.  */
rtx
vfwmacc::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfwmacc_vv (mode);
  else
    icode = code_for_vfwmacc_vf (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwnmacc functions.  */
rtx
vfwnmacc::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfwnmacc_vv (mode);
  else
    icode = code_for_vfwnmacc_vf (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwmsac functions.  */
rtx
vfwmsac::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfwmsac_vv (mode);
  else
    icode = code_for_vfwmsac_vf (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwnmsac functions.  */
rtx
vfwnmsac::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[2];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfwnmsac_vv (mode);
  else
    icode = code_for_vfwnmsac_vf (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfsqrt functions.  */
rtx
vfsqrt::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vfsqrt_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfrsqrt7 functions.  */
rtx
vfrsqrt7::expand (const function_instance &instance, tree exp,
                      rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vf_v (UNSPEC_RSQRT7, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfrec7 functions.  */
rtx
vfrec7::expand (const function_instance &instance, tree exp,
                      rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vf_v (UNSPEC_REC7, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfmax functions.  */
rtx
vfmax::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (SMAX, mode);
  else
    icode = code_for_vf_vf (SMAX, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfmin functions.  */
rtx
vfmin::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vf_vv (SMIN, mode);
  else
    icode = code_for_vf_vf (SMIN, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfsgnj functions.  */
rtx
vfsgnj::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfsgnj_vv (UNSPEC_COPYSIGN, mode);
  else
    icode = code_for_vfsgnj_vf (UNSPEC_COPYSIGN, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfsgnjn functions.  */
rtx
vfsgnjn::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfsgnj_vv (UNSPEC_NCOPYSIGN, mode);
  else
    icode = code_for_vfsgnj_vf (UNSPEC_NCOPYSIGN, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfsgnjx functions.  */
rtx
vfsgnjx::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vfsgnj_vv (UNSPEC_XORSIGN, mode);
  else
    icode = code_for_vfsgnj_vf (UNSPEC_XORSIGN, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfabs functions.  */
rtx
vfabs::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vfabs_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfcmp functions.  */
char *
vfcmp::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_2 (instance, 0, 1);
  append_name (instance.get_base_name ());
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

/* A function implementation for vmfeq functions.  */
rtx
vmfeq::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmf_vv (EQ, mode);
  else
    icode = code_for_vmf_vf (EQ, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmfne functions.  */
rtx
vmfne::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmf_vv (NE, mode);
  else
    icode = code_for_vmf_vf (NE, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmflt functions.  */
rtx
vmflt::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmf_vv (LT, mode);
  else
    icode = code_for_vmf_vf (LT, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmfgt functions.  */
rtx
vmfgt::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmf_vv (GT, mode);
  else
    icode = code_for_vmf_vf (GT, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmfle functions.  */
rtx
vmfle::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmf_vv (LE, mode);
  else
    icode = code_for_vmf_vf (LE, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmfge functions.  */
rtx
vmfge::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vmf_vv (GE, mode);
  else
    icode = code_for_vmf_vf (GE, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfclass functions.  */
rtx
vfclass::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfclass_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfmerge functions.  */
size_t
vfmerge::get_position_of_dest_arg (enum predication_index) const
{
  return 1;
}

rtx
vfmerge::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vfmerge_vfm (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfmv functions.  */
bool
vfmv::can_be_overloaded_p (const function_instance &instance) const
{
  if (instance.get_pred () == PRED_tu)
    return true;
  
  return false;
}

rtx
vfmv::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_v_f)
    icode = code_for_vfmv_v_f (mode);
  else
    icode = code_for_vmv_v_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfcvt_x_f_v functions.  */
char *
vfcvt_f2i::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfcvt_x");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfcvt_f2i::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfcvt_x_f_v (mode, UNSPEC_FLOAT_TO_SIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfcvt_xu_f_v functions.  */
char *
vfcvt_f2u::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfcvt_xu");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfcvt_f2u::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfcvt_x_f_v (mode, UNSPEC_FLOAT_TO_UNSIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfcvt_rtz_x_f_v functions.  */
char *
vfcvt_rtz_f2i::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfcvt_rtz_x");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfcvt_rtz_f2i::expand (const function_instance &instance, tree exp,
                       rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfcvt_rtz_x_f_v (mode, FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfcvt_rtz_xu_f_v functions.  */
char *
vfcvt_rtz_f2u::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfcvt_rtz_xu");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfcvt_rtz_f2u::expand (const function_instance &instance, tree exp,
                       rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfcvt_rtz_x_f_v (mode, UNSIGNED_FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfcvt_f_x_v functions.  */
char *
vfcvt_i2f::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfcvt_f");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfcvt_i2f::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vfcvt_f_x_v (mode, FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfcvt_f_xu_v functions.  */
char *
vfcvt_u2f::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfcvt_f");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfcvt_u2f::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vfcvt_f_x_v (mode, UNSIGNED_FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwcvt_x_f_v functions.  */
char *
vfwcvt_f2i::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfwcvt_x");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfwcvt_f2i::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfwcvt_x_f_v (mode, UNSPEC_FLOAT_TO_SIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwcvt_xu_f_v functions.  */
char *
vfwcvt_f2u::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfwcvt_xu");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfwcvt_f2u::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfwcvt_x_f_v (mode, UNSPEC_FLOAT_TO_UNSIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwcvt_rtz_x_f_v functions.  */
char *
vfwcvt_rtz_f2i::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfwcvt_rtz_x");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfwcvt_rtz_f2i::expand (const function_instance &instance, tree exp,
                        rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfwcvt_rtz_x_f_v (mode, FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwcvt_rtz_xu_f_v functions.  */
char *
vfwcvt_rtz_f2u::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfwcvt_rtz_xu");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfwcvt_rtz_f2u::expand (const function_instance &instance, tree exp,
                        rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfwcvt_rtz_x_f_v (mode, UNSIGNED_FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwcvt_f_x_v functions.  */
char *
vfwcvt_i2f::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfwcvt_f");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfwcvt_i2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfwcvt_f_x_v (mode, FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwcvt_f_xu_v functions.  */
char *
vfwcvt_u2f::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfwcvt_f");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfwcvt_u2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfwcvt_f_x_v (mode, UNSIGNED_FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwcvt_f_f_v functions.  */
char *
vfwcvt_f2f::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfwcvt_f");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfwcvt_f2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfwcvt_f_f_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfncvt_x_f_w functions.  */
char *
vfncvt_f2i::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfncvt_x");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfncvt_f2i::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vfncvt_x_f_w (mode, UNSPEC_FLOAT_TO_SIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfncvt_xu_f_w functions.  */
char *
vfncvt_f2u::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfncvt_xu");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfncvt_f2u::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vfncvt_x_f_w (mode, UNSPEC_FLOAT_TO_UNSIGNED_INT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfncvt_rtz_x_f_w functions.  */
char *
vfncvt_rtz_f2i::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfncvt_rtz_x");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfncvt_rtz_f2i::expand (const function_instance &instance, tree exp,
                        rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vfncvt_rtz_x_f_w (mode, FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfncvt_rtz_xu_f_w functions.  */
char *
vfncvt_rtz_f2u::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfncvt_rtz_xu");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfncvt_rtz_f2u::expand (const function_instance &instance, tree exp,
                        rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vfncvt_rtz_x_f_w (mode, UNSIGNED_FIX);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfncvt_f_x_w functions.  */
char *
vfncvt_i2f::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfncvt_f");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfncvt_i2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vfncvt_f_x_w (mode, FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfncvt_f_xu_w functions.  */
char *
vfncvt_u2f::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfncvt_f");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfncvt_u2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vfncvt_f_x_w (mode, UNSIGNED_FLOAT);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfncvt_f_f_w functions.  */
char *
vfncvt_f2f::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfncvt_f");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfncvt_f2f::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vfncvt_f_f_w (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfncvt_rod_f_f_w functions.  */
char *
vfncvt_f2rodf::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  append_name ("vfncvt_rod_f");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfncvt_f2rodf::expand (const function_instance &instance, tree exp,
                       rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vfncvt_rod_f_f_w (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vredsum functions.  */
rtx
vredsum::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vred_vs (UNSPEC_REDUC_SUM, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vredmax functions.  */
rtx
vredmax::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vred_vs (UNSPEC_REDUC_MAX, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vredmaxu functions.  */
rtx
vredmaxu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vred_vs (UNSPEC_REDUC_MAXU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vredmin functions.  */
rtx
vredmin::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vred_vs (UNSPEC_REDUC_MIN, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vredminu functions.  */
rtx
vredminu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vred_vs (UNSPEC_REDUC_MINU, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vredand functions.  */
rtx
vredand::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vred_vs (UNSPEC_REDUC_AND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vredor functions.  */
rtx
vredor::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vred_vs (UNSPEC_REDUC_OR, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vredxor functions.  */
rtx
vredxor::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vred_vs (UNSPEC_REDUC_XOR, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwredsum functions.  */
rtx
vwredsum::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vwredsum_vs (SIGN_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vwredsumu functions.  */
rtx
vwredsumu::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vwredsum_vs (ZERO_EXTEND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for freduceop functions.  */
unsigned int
freduceop::call_properties () const
{
  return CP_RAISE_FP_EXCEPTIONS;
}

/* A function implementation for vfredosum functions.  */
rtx
vfredosum::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfred_vs (UNSPEC_REDUC_ORDERED_SUM, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfredusum functions.  */
rtx
vfredusum::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfred_vs (UNSPEC_REDUC_UNORDERED_SUM, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfredmax functions.  */
rtx
vfredmax::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfred_vs (UNSPEC_REDUC_MAX, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfredmin functions.  */
rtx
vfredmin::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfred_vs (UNSPEC_REDUC_MIN, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwredosum functions.  */
rtx
vfwredosum::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfwredosum_vs (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfwredusum functions.  */
rtx
vfwredusum::expand (const function_instance &instance, tree exp,
                    rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfwredusum_vs (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmand functions.  */
rtx
vmand::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vm_mm (AND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmor functions.  */
rtx
vmor::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vm_mm (IOR, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmxor functions.  */
rtx
vmxor::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vm_mm (XOR, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmnand functions.  */
rtx
vmnand::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vmn_mm (AND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmnor functions.  */
rtx
vmnor::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vmn_mm (IOR, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmxnor functions.  */
rtx
vmxnor::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vmn_mm (XOR, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}
 
/* A function implementation for vmlogicn functions.  */
rtx
vmandn::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vmnot_mm (AND, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmorn functions.  */
rtx
vmorn::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vmnot_mm (IOR, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmmv functions.  */
rtx
vmmv::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vmmv_m (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmnot functions.  */
rtx
vmnot::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vmnot_m (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmclr functions.  */
void
vmclr::get_argument_types (const function_instance &,
                          vec<tree> &) const
{
}

bool
vmclr::can_be_overloaded_p (const function_instance &) const
{
  return false;
}

rtx
vmclr::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vmclr_m (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmset functions.  */
void
vmset::get_argument_types (const function_instance &,
                          vec<tree> &) const
{
}

bool
vmset::can_be_overloaded_p (const function_instance &) const
{
  return false;
}

rtx
vmset::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vmset_m (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vcpop functions.  */
tree
vcpop::get_return_type (const function_instance &) const
{
  return long_unsigned_type_node;
}

rtx
vcpop::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vcpop_m (mode, Pmode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfirst functions.  */
tree
vfirst::get_return_type (const function_instance &) const
{
  return long_integer_type_node;
}

rtx
vfirst::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  enum insn_code icode = code_for_vfirst_m (mode, Pmode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmsbf functions.  */
rtx
vmsbf::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vm_m (UNSPEC_SBF, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmsif functions.  */
rtx
vmsif::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vm_m (UNSPEC_SIF, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmsof functions.  */
rtx
vmsof::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vm_m (UNSPEC_SOF, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for viota functions.  */
bool
viota::can_be_overloaded_p (const function_instance &instance) const
{
  if (instance.get_pred () == PRED_void || instance.get_pred () == PRED_ta ||
      instance.get_pred () == PRED_tama)
    return false;

  return true;
}

rtx
viota::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_viota_m (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vid functions.  */
void
vid::get_argument_types (const function_instance &,
                          vec<tree> &) const
{
}

bool
vid::can_be_overloaded_p (const function_instance &instance) const
{
  if (instance.get_pred () == PRED_void || instance.get_pred () == PRED_ta ||
      instance.get_pred () == PRED_tama)
    return false;

  return true;
}

rtx
vid::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vid_v (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmv_x_s functions.  */
char *
vmv_x_s::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_2 (instance, 0, 1);
  append_name ("vmv_x");
  return finish_name ();
}

rtx
vmv_x_s::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vmv_x_s (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vmv_s_x functions.  */
char *
vmv_s_x::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  if (instance.get_pred () == PRED_ta)
    return nullptr;
  append_name ("vmv_s");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vmv_s_x::expand (const function_instance &instance, tree exp, rtx target) const
{

  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_v_s_x (UNSPEC_VMVS, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfmv_f_s functions.  */
char *
vfmv_f_s::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_2 (instance, 0, 1);
  append_name ("vfmv_f");
  return finish_name ();
}

rtx
vfmv_f_s::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  enum insn_code icode = code_for_vfmv_f_s (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfmv_s_f functions.  */
char *
vfmv_s_f::assemble_name (function_instance &instance)
{
  intrinsic_naming_rule_1 (instance, 0);
  if (instance.get_pred () == PRED_ta)
    return nullptr;
  append_name ("vfmv_s");
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
}

rtx
vfmv_s_f::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vfmv_s_f (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vslideup functions.  */
rtx
vslideup::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vslide_vx (UNSPEC_SLIDEUP, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vslidedown functions.  */
rtx
vslidedown::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vslide_vx (UNSPEC_SLIDEDOWN, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vslide1up functions.  */
gimple *
vslide1up::fold (const function_instance &, gimple_stmt_iterator *,
                 gcall *) const
{
  return NULL;
}

rtx
vslide1up::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vslide1_vx (UNSPEC_SLIDE1UP, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vslide1down functions.  */
gimple *
vslide1down::fold (const function_instance &, gimple_stmt_iterator *,
                   gcall *) const
{
  return NULL;
}

rtx
vslide1down::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vslide1_vx (UNSPEC_SLIDE1DOWN, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfslide1up functions.  */
rtx
vfslide1up::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vfslide1_vf (UNSPEC_SLIDE1UP, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vfslide1down functions.  */
rtx
vfslide1down::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vfslide1_vf (UNSPEC_SLIDE1DOWN, mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vrgather functions.  */
rtx
vrgather::expand (const function_instance &instance, tree exp, rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode;
  if (instance.get_operation () == OP_vv)
    icode = code_for_vrgather_vv (mode);
  else
    icode = code_for_vrgather_vx (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vrgather functions.  */
rtx
vrgatherei16::expand (const function_instance &instance, tree exp,
                      rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vrgatherei16_vv (mode);
  return expand_builtin_insn (icode, exp, target, instance);
}

/* A function implementation for vcompress functions.  */
size_t
vcompress::get_position_of_dest_arg (enum predication_index) const
{
  return 1;
}

rtx
vcompress::expand (const function_instance &instance, tree exp,
                   rtx target) const
{
  machine_mode mode = TYPE_MODE (TREE_TYPE (exp));
  enum insn_code icode = code_for_vcompress_vm (mode);
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
  machine_mode mode0 = instance.get_arg_pattern ().arg_list[offset];
  machine_mode mode1 = instance.get_arg_pattern ().arg_list[offset + 1];
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[offset + 2];
  for (unsigned int i = 0; i < nf; i++)
    argument_types.quick_push (get_dt_t (mode0, unsigned_p, true, false));

  if (instance.get_pred () != PRED_void && instance.get_pred () != PRED_ta &&
      instance.get_pred () != PRED_tama)
    {
      for (unsigned int i = 0; i < nf; i++)
        argument_types.quick_push (get_dt_t (mode0, unsigned_p, false, false));
    }
  argument_types.quick_push (get_dt_t (mode1, unsigned_p, true, true));
  if (indexed_p)
    argument_types.quick_push (get_dt_t (mode2, true, false, false));
}

static gimple *
fold_non_tuple_segment_load (const function_instance &instance,
                             gimple_stmt_iterator *gsi_in, gcall *call_in,
                             unsigned int nf, bool ff, bool indexed_p, bool strided_p)
{
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  int offset = indexed_p ? 1 : 0;
  machine_mode mode = instance.get_arg_pattern ().arg_list[offset];
  tree vector_type = get_dt_t (mode, unsigned_p, false, false);
  machine_mode tuple_mode;
  gcc_assert (riscv_vector_tuple_mode (TYPE_MODE (vector_type), nf).exists (&tuple_mode)); 
  tree tuple_type = get_tuple_t (tuple_mode, unsigned_p);
  tree tuple = create_tmp_var (tuple_type, "tuple");
  auto_vec<tree, 16> vargs;

  if (instance.get_pred () != PRED_void && instance.get_pred () != PRED_tama &&
      instance.get_pred () != PRED_ta)
    {
      for (unsigned int i = 0; i < nf; i++)
        {
          tree rhs_vector;
          if (instance.get_pred () == PRED_tu)
            rhs_vector = gimple_call_arg (call_in, i + nf);
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
  if (instance.get_pred () == PRED_m || instance.get_pred () == PRED_tamu ||
      instance.get_pred () == PRED_tuma || instance.get_pred () == PRED_tumu)
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

  if (!strided_p && !ff && !indexed_p)
    vargs.quick_push (
        gimple_call_arg (call_in, gimple_call_num_args (call_in) - 2));
  else
    {
      vargs.quick_push (
          gimple_call_arg (call_in, gimple_call_num_args (call_in) - 3));
      vargs.quick_push (
          gimple_call_arg (call_in, gimple_call_num_args (call_in) - 2));
    }
  /* push the vl. */
  vargs.quick_push (
      gimple_call_arg (call_in, gimple_call_num_args (call_in) - 1));

  char name[16];
  
  if (indexed_p)
    {
      machine_mode indexed_mode =
          instance.get_arg_pattern ()
              .arg_list[instance.get_arg_pattern ().arg_len - 1];
      snprintf (name, 16, "%sei%d", instance.get_base_name (),
                GET_MODE_BITSIZE (GET_MODE_INNER (indexed_mode)));
    }
  else
    {
      if (ff)
        snprintf (name, 16, "vlseg%de%dff", nf, GET_MODE_BITSIZE (GET_MODE_INNER (TYPE_MODE (vector_type))));
      else
        snprintf (name, 16, "%se%d", instance.get_base_name (),
                  GET_MODE_BITSIZE (GET_MODE_INNER (TYPE_MODE (vector_type))));
    }
  
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (tuple_mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  
  char resolver[NAME_MAXLEN];
  snprintf (resolver, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
              
  function_instance fn_instance (resolver);
  hashval_t hashval = fn_instance.hash ();
  registered_function *rfn_slot =
      function_table->find_with_hash (fn_instance, hashval);
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

  return repl;
}

static void
push_argment_for_segment_store (const function_instance &instance,
                                vec<tree> &argument_types, unsigned int nf,
                                bool indexed_p)
{
  unsigned int offset = indexed_p ? 3 : 1;
  bool unsigned_p = instance.get_data_type_list ()[offset] == DT_unsigned;
  machine_mode mode0 = instance.get_arg_pattern ().arg_list[0];
  machine_mode mode1 = instance.get_arg_pattern ().arg_list[1];
  machine_mode mode2 = instance.get_arg_pattern ().arg_list[2];
  machine_mode mode3 = instance.get_arg_pattern ().arg_list[offset];
  
  if (indexed_p)
    {
      argument_types.quick_push (get_dt_t (mode1, unsigned_p, true, false));
      argument_types.quick_push (get_dt_t (mode2, true, false, false));
    }
  else
    argument_types.quick_push (get_dt_t (mode0, unsigned_p, true, false));

  for (unsigned int i = 0; i < nf; i++)
    argument_types.quick_push (get_dt_t (mode3, unsigned_p, false, false));
}

static gimple *
fold_non_tuple_segment_store (const function_instance &instance,
                              gimple_stmt_iterator *gsi_in, gcall *call_in,
                              unsigned int nf, bool indexed_p, bool unit_stride_p)
{
  bool unsigned_p =
      instance.get_data_type_list ()[instance.get_arg_pattern ().arg_len - 1] ==
      DT_unsigned;
  tree vector_type =
      get_dt_t (instance.get_arg_pattern ()
                    .arg_list[instance.get_arg_pattern ().arg_len - 1],
                unsigned_p, false, false);
  machine_mode tuple_mode;
  gcc_assert (riscv_vector_tuple_mode (TYPE_MODE (vector_type), nf).exists (&tuple_mode)); 
  tree tuple_type = get_tuple_t (tuple_mode, unsigned_p);
  tree tuple = create_tmp_var (tuple_type, "tuple");
  auto_vec<tree, 16> vargs;

  unsigned int offset = instance.get_pred () == PRED_m ? 2 : 1;
  for (unsigned int i = 0; i < offset; i++)
    vargs.quick_push (gimple_call_arg (call_in, i));

  if (!unit_stride_p)
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
  vargs.quick_push (
      gimple_call_arg (call_in, gimple_call_num_args (call_in) - 1));
  
  char name[16];
  
  if (indexed_p)
    {
      machine_mode indexed_mode = instance.get_arg_pattern ().arg_list[2];
      snprintf (name, 16, "%sei%d", instance.get_base_name (),
                GET_MODE_BITSIZE (GET_MODE_INNER (indexed_mode)));
    }
  else
    snprintf (name, 16, "%se%d", instance.get_base_name (),
                  GET_MODE_BITSIZE (GET_MODE_INNER (TYPE_MODE (vector_type))));
    
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (tuple_mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  
  char resolver[NAME_MAXLEN];
  snprintf (resolver, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
              
  function_instance fn_instance (resolver);
  hashval_t hashval = fn_instance.hash ();
  registered_function *rfn_slot =
      function_table->find_with_hash (fn_instance, hashval);
  tree decl = rfn_slot->decl;
  gimple *repl = gimple_build_call_vec (decl, vargs);
  
  return repl;
}

/* A function implementation for vlseg_template functions.  */
template <unsigned int NF>
unsigned int
vlseg_template<NF>::call_properties () const
{
  return CP_READ_MEMORY;
}

template <unsigned int NF>
char *
vlseg_template<NF>::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  char name[16];
  snprintf (name, 16, "%se%d", instance.get_base_name (), sew);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  if (instance.get_pred () != PRED_void && instance.get_pred () != PRED_tama &&
      instance.get_pred () != PRED_ta)
    {
      append_name (name);
      append_name (get_pred_str (instance.get_pred (), true));
      return finish_name ();
    } 
  return nullptr;
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
vlseg_template<NF>::has_dest_arg_p (enum predication_index) const
{
  return false;
}

template <unsigned int NF>
size_t
vlseg_template<NF>::get_position_of_mask_arg (enum predication_index) const
{
  return NF;
}

template <unsigned int NF>
gimple *
vlseg_template<NF>::fold (const function_instance &instance,
                          gimple_stmt_iterator *gsi_in, gcall *call_in) const
{
  return fold_non_tuple_segment_load (instance, gsi_in, call_in, NF, false, false, false);
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

/* A function implementation for vlsegff_template functions.  */
template <unsigned int NF>
unsigned int
vlsegff_template<NF>::call_properties () const
{
  return CP_READ_MEMORY | CP_RAISE_LD_EXCEPTIONS;
}

template <unsigned int NF>
char *
vlsegff_template<NF>::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  char name[16];
  snprintf (name, 16, "%se%dff", instance.get_base_name (), sew);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  if (instance.get_pred () != PRED_void && instance.get_pred () != PRED_tama &&
      instance.get_pred () != PRED_ta)
    {
      append_name (name);
      append_name (get_pred_str (instance.get_pred (), true));
      return finish_name ();
    } 
  return nullptr;
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
vlsegff_template<NF>::has_dest_arg_p (enum predication_index) const
{
  return false;
}

template <unsigned int NF>
size_t
vlsegff_template<NF>::get_position_of_mask_arg (enum predication_index) const
{
  return NF;
}

template <unsigned int NF>
gimple *
vlsegff_template<NF>::fold (const function_instance &instance,
                            gimple_stmt_iterator *gsi_in, gcall *call_in) const
{
  return fold_non_tuple_segment_load (instance, gsi_in, call_in, NF, true, false, false);
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

/* A function implementation for vsseg_template functions.  */
template <unsigned int NF>
unsigned int
vsseg_template<NF>::call_properties () const
{
  return CP_WRITE_MEMORY;
}

template <unsigned int NF>
char *
vsseg_template<NF>::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  bool unsigned_p = instance.get_data_type_list ()[1] == DT_unsigned;
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  char name[16];
  snprintf (name, 16, "%se%d", instance.get_base_name (), sew);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  append_name (name);
  return finish_name ();
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
  return fold_non_tuple_segment_store (instance, gsi_in, call_in, NF, false, true);
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

/* A function implementation for vlsseg_template functions.  */
template <unsigned int NF>
unsigned int
vlsseg_template<NF>::call_properties () const
{
  return CP_READ_MEMORY;
}

template <unsigned int NF>
char *
vlsseg_template<NF>::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[0];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  char name[16];
  snprintf (name, 16, "%se%d", instance.get_base_name (), sew);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  if (instance.get_pred () != PRED_void && instance.get_pred () != PRED_tama &&
      instance.get_pred () != PRED_ta)
    {
      append_name (name);
      append_name (get_pred_str (instance.get_pred (), true));
      return finish_name ();
    } 
  return nullptr;
}

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
vlsseg_template<NF>::has_dest_arg_p (enum predication_index) const
{
  return false;
}

template <unsigned int NF>
size_t
vlsseg_template<NF>::get_position_of_mask_arg (enum predication_index) const
{
  return NF;
}

template <unsigned int NF>
gimple *
vlsseg_template<NF>::fold (const function_instance &instance,
                           gimple_stmt_iterator *gsi_in, gcall *call_in) const
{
  return fold_non_tuple_segment_load (instance, gsi_in, call_in, NF, false, false, true);
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

/* A function implementation for vssseg_template functions.  */
template <unsigned int NF>
unsigned int
vssseg_template<NF>::call_properties () const
{
  return CP_WRITE_MEMORY;
}

template <unsigned int NF>
char *
vssseg_template<NF>::assemble_name (function_instance &instance)
{
  machine_mode mode = instance.get_arg_pattern ().arg_list[1];
  bool unsigned_p = instance.get_data_type_list ()[1] == DT_unsigned;
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (mode));
  char name[16];
  snprintf (name, 16, "%se%d", instance.get_base_name (), sew);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  append_name (name);
  return finish_name ();
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
  return fold_non_tuple_segment_store (instance, gsi_in, call_in, NF, false, false);
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

/* A function implementation for vlxseg_template functions.  */
template <unsigned int NF, indexed_mode uo>
unsigned int
vlxseg_template<NF, uo>::call_properties () const
{
  return CP_READ_MEMORY;
}

template <unsigned int NF, indexed_mode uo>
char *
vlxseg_template<NF, uo>::assemble_name (function_instance &instance)
{
  if (segment_skip_p (instance.get_base_name (),
                      instance.get_arg_pattern ().arg_list[0]))
    return nullptr;
  machine_mode data_mode = instance.get_arg_pattern ().arg_list[1];
  machine_mode index_mode = instance.get_arg_pattern ().arg_list[3];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (index_mode));
  char name[NAME_MAXLEN];
  snprintf (name, NAME_MAXLEN, "%sei%d", instance.get_base_name (), sew);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (data_mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt,
            pred);
  append_name (name);
  append_name (get_pred_str (instance.get_pred (), true));
  return finish_name ();
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
vlxseg_template<NF, uo>::has_dest_arg_p (enum predication_index) const
{
  return false;
}

template <unsigned int NF, indexed_mode uo>
size_t
vlxseg_template<NF, uo>::get_position_of_mask_arg (enum predication_index) const
{
  return NF;
}

template <unsigned int NF, indexed_mode uo>
gimple *
vlxseg_template<NF, uo>::fold (const function_instance &instance,
                               gimple_stmt_iterator *gsi_in,
                               gcall *call_in) const
{
  return fold_non_tuple_segment_load (instance, gsi_in, call_in, NF, false, true, false);
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

/* A function implementation for vsxseg_template functions.  */
template <unsigned int NF, indexed_mode uo>
unsigned int
vsxseg_template<NF, uo>::call_properties () const
{
  return CP_WRITE_MEMORY;
}

template <unsigned int NF, indexed_mode uo>
char *
vsxseg_template<NF, uo>::assemble_name (function_instance &instance)
{
  if (segment_skip_p (instance.get_base_name (),
                      instance.get_arg_pattern ().arg_list[0]))
    return nullptr;
  machine_mode data_mode = instance.get_arg_pattern ().arg_list[3];
  machine_mode index_mode = instance.get_arg_pattern ().arg_list[2];
  bool unsigned_p = instance.get_data_type_list ()[0] == DT_unsigned;
  int sew = GET_MODE_BITSIZE (GET_MODE_INNER (index_mode));
  char name[NAME_MAXLEN];
  snprintf (name, NAME_MAXLEN, "%sei%d", instance.get_base_name (), sew);
  const char *op = get_operation_str (instance.get_operation ());
  const char *dt = mode2data_type_str (data_mode, unsigned_p, false);
  const char *pred = get_pred_str (instance.get_pred ());
  snprintf (instance.function_name, NAME_MAXLEN, "%s%s%s%s", name, op, dt, pred);
  append_name (name);
  return finish_name ();
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
  return fold_non_tuple_segment_store (instance, gsi_in, call_in, NF, true, false);
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