/* { dg-do compile } */
/* { dg-additional-options "-O3" } */

#include <riscv_vector.h>
#include "macro.h"

vint16m1_t 
test_vle16_v (vbool16_t mask, int16_t *base)
{
  start_clobber();

  vint16m1_t result;
  result = vle16_v_i16m1_tama(mask, base, 32);

  end_clobber();

  return result;
}

void 
test_vse16_v (vbool16_t mask, int16_t *base, vint16m1_t op1)
{
  start_clobber();

  vse16_v_i16m1_m(mask, base, op1, 32);

  end_clobber();
}

/* cannot cause crash */
vbool64_t 
test_vlm_v (vbool64_t mask, vint8mf8_t op1, uint8_t *base, uint8_t *m)
{
  start_clobber();

  vbool64_t result = vlm_v_b64(base, 32);

  end_clobber();

  return result;
}

void 
test_vsm_v (vbool64_t mask, uint8_t *base)
{
  start_clobber();

  vsm_v_b64(base, mask, 32);

  end_clobber();
}

vint16m1_t 
test_vadd_vv (vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vadd_vv_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vsub_vv (vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vsub_vv_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vadd_vx (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vadd_vx_i16m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t 
test_vadd_vx_rv32 (vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vadd_vx_i64m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vsub_vx (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vsub_vx_i16m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t 
test_vsub_vx_rv32 (vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vsub_vx_i64m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vrsub_vx (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vrsub_vx_i16m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t 
test_vrsub_vx_rv32 (vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vrsub_vx_i64m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vneg_v (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vneg_v_i16m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vint32m2_t 
test_vwadd_vv (vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint32m2_t result;
  result = vwadd_vv_i32m2_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m2_t 
test_vwadd_vx (vbool16_t mask, vint16m1_t op1, int16_t op2)
{
  start_clobber();

  vint32m2_t result;
  result = vwadd_vx_i32m2_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m2_t 
test_vwadd_wv (vbool16_t mask, vint32m2_t op1, vint16m1_t op2)
{
  start_clobber();

  vint32m2_t result;
  result = vwadd_wv_i32m2_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m2_t 
test_vwadd_wx (vbool16_t mask, vint32m2_t op1, int16_t op2)
{
  start_clobber();

  vint32m2_t result;
  result = vwadd_wx_i32m2_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m2_t 
test_vwcvt_x_x_v (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint32m2_t result;
  result = vwcvt_x_x_v_i32m2_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vint16m2_t 
test_vsext_vf2 (vbool8_t mask, vint8m1_t op1)
{
  start_clobber();

  vint16m2_t result;
  result = vsext_vf2_i16m2_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vint32m4_t 
test_vsext_vf4 (vbool8_t mask, vint8m1_t op1)
{
  start_clobber();

  vint32m4_t result;
  result = vsext_vf4_i32m4_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vint64m8_t 
test_vsext_vf8 (vbool8_t mask, vint8m1_t op1)
{
  start_clobber();

  vint64m8_t result;
  result = vsext_vf8_i64m8_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vint16m1_t
test_vadc_vvm (vbool16_t carryin, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vadc_vvm_i16m1(op1, op2, carryin, 32);

  end_clobber();

  return result;
}

vint16m1_t
test_vsbc_vvm (vbool16_t carryin, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vsbc_vvm_i16m1(op1, op2, carryin, 32);

  end_clobber();

  return result;
}

vint16m1_t
test_vadc_vxm (vbool16_t carryin, vint16m1_t op1, int16_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vadc_vxm_i16m1(op1, op2, carryin, 32);

  end_clobber();

  return result;
}

vint64m1_t
test_vadc_vxm_rv32 (vbool64_t carryin, vint64m1_t op1, int64_t op2)
{
  start_clobber();

  vint64m1_t result;
  result = vadc_vxm_i64m1(op1, 1, carryin, 32);

  end_clobber();

  return result;
}

vint16m1_t
test_vsbc_vxm (vbool16_t carryin, vint16m1_t op1, int16_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vsbc_vxm_i16m1(op1, op2, carryin, 32);

  end_clobber();

  return result;
}

vint64m1_t
test_vsbc_vxm_rv32 (vbool64_t carryin, vint64m1_t op1, int64_t op2)
{
  start_clobber();

  vint64m1_t result;
  result = vsbc_vxm_i64m1(op1, 1, carryin, 32);

  end_clobber();

  return result;
}

vbool16_t
test_vmadc_vvm (vbool16_t carryin, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vbool16_t result;
  result = vmadc_vvm_i16m1_b16(op1, op2, carryin, 32);

  end_clobber();

  return result;
}

vbool16_t
test_vmsbc_vvm (vbool16_t carryin, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vbool16_t result;
  result = vmsbc_vvm_i16m1_b16(op1, op2, carryin, 32);

  end_clobber();

  return result;
}

vbool16_t
test_vmadc_vxm (vbool16_t carryin, vint16m1_t op1, int16_t op2)
{
  start_clobber();

  vbool16_t result;
  result = vmadc_vxm_i16m1_b16(op1, op2, carryin, 32);

  end_clobber();

  return result;
}

vbool64_t
test_vmadc_vxm_rv32 (vbool64_t carryin, vint64m1_t op1)
{
  start_clobber();

  vbool64_t result;
  result = vmadc_vxm_i64m1_b64(op1, 1, carryin, 32);

  end_clobber();

  return result;
}

vbool16_t
test_vmsbc_vxm (vbool16_t carryin, vint16m1_t op1, int16_t op2)
{
  start_clobber();

  vbool16_t result;
  result = vmsbc_vxm_i16m1_b16(op1, op2, carryin, 32);

  end_clobber();

  return result;
}

vbool64_t
test_vmsbc_vxm_rv32 (vbool64_t carryin, vint64m1_t op1)
{
  start_clobber();

  vbool64_t result;
  result = vmsbc_vxm_i64m1_b64(op1, 1, carryin, 32);

  end_clobber();

  return result;
}


/* these without mask cannot case crash */
vbool16_t
test_vmadc_vv (vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vbool16_t result;
  result = vmadc_vv_i16m1_b16(op1, op2, 32);

  end_clobber();

  return result;
}

vbool16_t
test_vmsbc_vv (vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vbool16_t result;
  result = vmsbc_vv_i16m1_b16(op1, op2, 32);

  end_clobber();

  return result;
}

vbool16_t
test_vmadc_vx (vint16m1_t op1, int16_t op2)
{
  start_clobber();

  vbool16_t result;
  result = vmadc_vx_i16m1_b16(op1, op2, 32);

  end_clobber();

  return result;
}

vbool64_t
test_vmadc_vx_rv32 (vint64m1_t op1)
{
  start_clobber();

  vbool64_t result;
  result = vmadc_vx_i64m1_b64(op1, 1, 32);

  end_clobber();

  return result;
}

vbool16_t
test_vmsbc_vx (vint16m1_t op1, int16_t op2)
{
  start_clobber();

  vbool16_t result;
  result = vmsbc_vx_i16m1_b16(op1, op2, 32);

  end_clobber();

  return result;
}

vbool64_t
test_vmsbc_vx_rv32 (vint64m1_t op1)
{
  start_clobber();

  vbool64_t result;
  result = vmsbc_vx_i64m1_b64(op1, 1, 32);

  end_clobber();

  return result;
}


vint16m1_t 
test_vand_vv (vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vand_vv_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vand_vx (vbool16_t mask, vint16m1_t op1, int16_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vand_vx_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint64m1_t 
test_vand_vx_rv32 (vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vand_vx_i64m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vnot_v (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vnot_v_i16m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}


vint16m1_t 
test_vsll_vv (vbool16_t mask, vint16m1_t op1, vuint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vsll_vv_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vsll_vx (vbool16_t mask, vint16m1_t op1, size_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vsll_vx_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vnsra_wv (vbool16_t mask, vint32m2_t op1, vuint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vnsra_wv_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vnsra_wx (vbool16_t mask, vint32m2_t op1, size_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vnsra_wx_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vuint16m1_t 
test_vncvt_x_x_w (vbool16_t mask, vuint32m2_t op1)
{
  start_clobber();

  vuint16m1_t result;
  result = vncvt_x_x_w_u16m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}


vbool16_t
test_vmseq_vv (vbool16_t m, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vbool16_t result;
  result = vmseq_vv_i16m1_b16_ma (m, op1, op2, 32);

  end_clobber();

  return result;
}

vbool16_t
test_vmslt_vv (vbool16_t m, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vbool16_t result;
  result = vmslt_vv_i16m1_b16_ma (m, op1, op2, 32);

  end_clobber();

  return result;
}

vbool16_t
test_vmseq_vx (vbool16_t m, vint16m1_t op1)
{
  start_clobber();

  vbool16_t result;
  result = vmseq_vx_i16m1_b16_ma (m, op1, 1, 32);

  end_clobber();

  return result;
}

vbool64_t
test_vmseq_vx_rv32 (vbool64_t m, vint64m1_t op1)
{
  start_clobber();

  vbool64_t result;
  result = vmseq_vx_i64m1_b64_ma (m, op1, 1, 32);

  end_clobber();

  return result;
}

vbool16_t
test_vmslt_vx (vbool16_t m, vint16m1_t op1)
{
  start_clobber();

  vbool16_t result;
  result = vmslt_vx_i16m1_b16_ma (m, op1, 1, 32);

  end_clobber();

  return result;
}

vbool64_t
test_vmslt_vx_rv32 (vbool64_t m, vint64m1_t op1)
{
  start_clobber();

  vbool64_t result;
  result = vmslt_vx_i64m1_b64_ma (m, op1, 1, 32);

  end_clobber();

  return result;
}

vbool16_t
test_vmsge_vx (vbool16_t m, vint16m1_t op1)
{
  start_clobber();

  vbool16_t result;
  result = vmsge_vx_i16m1_b16_ma (m, op1, 1, 32);

  end_clobber();

  return result;
}

vbool64_t
test_vmsge_vx_rv32 (vbool64_t m, vint64m1_t op1)
{
  start_clobber();

  vbool64_t result;
  result = vmsge_vx_i64m1_b64_ma (m, op1, 1, 32);

  end_clobber();

  return result;
}


vint16m1_t 
test_vmin_vv (vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vmin_vv_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vmin_vx (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vmin_vx_i16m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t 
test_vmin_vx_rv32 (vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vmin_vx_i64m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vmul_vv (vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vmul_vv_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vmul_vx (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vmul_vx_i16m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t 
test_vmul_vx_rv32 (vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vmul_vx_i64m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vmulh_vv (vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vmulh_vv_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vmulh_vx (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vmulh_vx_i16m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t 
test_vmulh_vx_rv32 (vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vmulh_vx_i64m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vmulhsu_vv (vbool16_t mask, vint16m1_t op1, vuint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vmulhsu_vv_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vmulhsu_vx (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vmulhsu_vx_i16m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t 
test_vmulhsu_vx_rv32 (vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vmulhsu_vx_i64m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vdiv_vv (vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vdiv_vv_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vdiv_vx (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vdiv_vx_i16m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t 
test_vdiv_vx_rv32 (vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vdiv_vx_i64m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}


vint32m2_t 
test_vwmul_vv (vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint32m2_t result;
  result = vwmul_vv_i32m2_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m2_t 
test_vwmul_vx (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint32m2_t result;
  result = vwmul_vx_i32m2_tama(mask, op1, 2, 32);

  end_clobber();

  return result;
}

vint32m2_t 
test_vwmulsu_vv (vbool16_t mask, vint16m1_t op1, vuint16m1_t op2)
{
  start_clobber();

  vint32m2_t result;
  result = vwmulsu_vv_i32m2_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m2_t 
test_vwmulsu_vx (vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint32m2_t result;
  result = vwmulsu_vx_i32m2_tama(mask, op1, 2, 32);

  end_clobber();

  return result;
}


vint16m1_t 
test_vmacc_vv (vint16m1_t dest, vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vmacc_vv_i16m1_tama(mask, dest, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t 
test_vmacc_vx (vint16m1_t dest, vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vmacc_vx_i16m1_tama(mask, dest, 1, op1, 32);

  end_clobber();

  return result;
}

vint64m1_t 
test_vmacc_vx_rv32 (vint64m1_t dest, vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vmacc_vx_i64m1_tama(mask, dest, 1, op1, 32);

  end_clobber();

  return result;
}


vint32m2_t 
test_vwmacc_vv (vint32m2_t dest, vbool16_t mask, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint32m2_t result;
  result = vwmacc_vv_i32m2_tama(mask, dest, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m2_t 
test_vwmacc_vx (vint32m2_t dest, vbool16_t mask, vint16m1_t op1)
{
  start_clobber();

  vint32m2_t result;
  result = vwmacc_vx_i32m2_tama(mask, dest, 1, op1, 32);

  end_clobber();

  return result;
}


vint32m2_t 
test_vwmaccsu_vv (vint32m2_t dest, vbool16_t mask, vint16m1_t op1, vuint16m1_t op2)
{
  start_clobber();

  vint32m2_t result;
  result = vwmaccsu_vv_i32m2_tama(mask, dest, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m2_t 
test_vwmaccsu_vx (vint32m2_t dest, vbool16_t mask, vuint16m1_t op2)
{
  start_clobber();

  vint32m2_t result;
  result = vwmaccsu_vx_i32m2_tama(mask, dest, 1, op2, 32);

  end_clobber();

  return result;
}

vint32m2_t 
test_vwmaccus_vx (vint32m2_t dest, vbool16_t mask, vint16m1_t op2)
{
  start_clobber();

  vint32m2_t result;
  result = vwmaccus_vx_i32m2_tama(mask, dest, 1, op2, 32);

  end_clobber();

  return result;
}


vint16m1_t
test_vmerge_vvm (vbool16_t select, vint16m1_t op1, vint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vmerge_vvm_i16m1(select, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t
test_vmerge_vxm (vbool16_t select, vint16m1_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vmerge_vxm_i16m1(select, op1, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t
test_vmerge_vxm_rv32 (vbool64_t select, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vmerge_vxm_i64m1(select, op1, 1, 32);

  end_clobber();

  return result;
}

vint16mf2_t
test_vmv_v_v (vint16mf2_t dest, vint16mf2_t op)
{
  start_clobber();

  vint16mf2_t result;
  result = vmv_v_v_i16mf2_tu(dest, op, 32);

  end_clobber();

  return result;
}

vint16mf2_t
test_vmv_v_x (vint16mf2_t dest)
{
  start_clobber();

  vint16mf2_t result;
  result = vmv_v_x_i16mf2_tu(dest, 1, 32);

  end_clobber();

  return result;
}

/* cannot cause crash */
vint64m1_t
test_vmv_v_x_rv32 (vint64m1_t dest)
{
  start_clobber();

  vint64m1_t result;
  result = vmv_v_x_i64m1_tu(dest, 1, 32);

  end_clobber();

  return result;
}


vint32m1_t
test_vsadd_vv (vbool32_t mask, vint32m1_t op1, vint32m1_t op2)
{
  start_clobber();

  vint32m1_t result;
  result = vsadd_vv_i32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vssub_vv (vbool32_t mask, vint32m1_t op1, vint32m1_t op2)
{
  start_clobber();

  vint32m1_t result;
  result = vssub_vv_i32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vsadd_vx (vbool32_t mask, vint32m1_t op1)
{
  start_clobber();

  vint32m1_t result;
  result = vsadd_vx_i32m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t
test_vsadd_vx_rv32 (vbool64_t mask, vint64m1_t op1, int64_t op2)
{
  start_clobber();

  vint64m1_t result;
  result = vsadd_vx_i64m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vssub_vx (vbool32_t mask, vint32m1_t op1, int32_t op2)
{
  start_clobber();

  vint32m1_t result;
  result = vssub_vx_i32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint64m1_t
test_vssub_vx_rv32 (vbool64_t mask, vint64m1_t op1, int64_t op2)
{
  start_clobber();

  vint64m1_t result;
  result = vssub_vx_i64m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vaadd_vv (vbool32_t mask, vint32m1_t op1, vint32m1_t op2)
{
  start_clobber();

  vint32m1_t result;
  result = vaadd_vv_i32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vaadd_vx (vbool32_t mask, vint32m1_t op1, int32_t op2)
{
  start_clobber();

  vint32m1_t result;
  result = vaadd_vx_i32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint64m1_t
test_vaadd_vx_rv32 (vbool64_t mask, vint64m1_t op1, int64_t op2)
{
  start_clobber();

  vint64m1_t result;
  result = vaadd_vx_i64m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vuint32m1_t
test_vssrl_vv (vbool32_t mask, vuint32m1_t op1, vuint32m1_t op2)
{
  start_clobber();

  vuint32m1_t result;
  result = vssrl_vv_u32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vuint32m1_t
test_vssrl_vx (vbool32_t mask, vuint32m1_t op1)
{
  start_clobber();

  vuint32m1_t result;
  result = vssrl_vx_u32m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint16m1_t
test_vnclip_wv (vbool16_t mask, vint32m2_t op1, vuint16m1_t op2)
{
  start_clobber();

  vint16m1_t result;
  result = vnclip_wv_i16m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint16m1_t
test_vnclip_wx (vbool16_t mask, vint32m2_t op1)
{
  start_clobber();

  vint16m1_t result;
  result = vnclip_wx_i16m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}


vfloat32m1_t
test_vfadd_vv (vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfadd_vv_f32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfadd_vf (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfadd_vf_f32m1_tama(mask, op1, 1.0, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfrsub_vf (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfrsub_vf_f32m1_tama(mask, op1, 1.0, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwadd_vv (vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwadd_vv_f64m2_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwadd_vf (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwadd_vf_f64m2_tama(mask, op1, 1.0, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwadd_wv (vbool32_t mask, vfloat64m2_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwadd_wv_f64m2_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwadd_wf (vbool32_t mask, vfloat64m2_t op1)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwadd_wf_f64m2_tama(mask, op1, 1.0, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwmul_vv (vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwmul_vv_f64m2_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwmul_vf (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwmul_vf_f64m2_tama(mask, op1, 1.0, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfmacc_vv (vbool32_t mask, vfloat32m1_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfmacc_vv_f32m1_tama(mask, dest, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfmacc_vf (vbool32_t mask, vfloat32m1_t dest, vfloat32m1_t op2)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfmacc_vf_f32m1_tama(mask, dest, 1.0, op2, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwmacc_vv (vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwmacc_vv_f64m2_tama(mask, dest, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwmsac_vv (vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwmsac_vv_f64m2_tama(mask, dest, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwmacc_vf (vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op2)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwmacc_vf_f64m2_tama(mask, dest, 1.0, op2, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwmsac_vf (vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op2)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwmsac_vf_f64m2_tama(mask, dest, 1.0, op2, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwnmacc_vv (vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwnmacc_vv_f64m2_tama(mask, dest, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwnmsac_vv (vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwnmsac_vv_f64m2_tama(mask, dest, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwnmacc_vf (vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op2)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwnmacc_vf_f64m2_tama(mask, dest, 1.0, op2, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwnmsac_vf (vbool32_t mask, vfloat64m2_t dest, vfloat32m1_t op2)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwnmsac_vf_f64m2_tama(mask, dest, 1.0, op2, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfsqrt_v (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfsqrt_v_f32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfrsqrt7_v (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfrsqrt7_v_f32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfsgnj_vv (vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfsgnj_vv_f32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfsgnj_vf (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfsgnj_vf_f32m1_tama(mask, op1, 1.0, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfneg_v (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfneg_v_f32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfabs_v (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfabs_v_f32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vbool32_t
test_vmfeq_vv (vbool32_t mask, vfloat32m1_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vbool32_t result;
  result = vmfeq_vv_f32m1_b32_ma(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vbool32_t
test_vmfeq_vf (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vbool32_t result;
  result = vmfeq_vf_f32m1_b32_ma(mask, op1, 1.0, 32);

  end_clobber();

  return result;
}

vuint32m1_t
test_vfclass_v (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vuint32m1_t result;
  result = vfclass_v_u32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfmerge_vf (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfmerge_vfm_f32m1(mask, op1, 1.0, 32);

  end_clobber();

  return result;
}

/* cannot cause crash */
vfloat32m1_t
test_vfmv_v_f (vfloat32m1_t dest, vfloat32m1_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfmv_v_f_f32m1_tu(dest, 1.0, 32);

  end_clobber();

  return result;
}


vint32m1_t
test_vfcvt_x_f_v (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vint32m1_t result;
  result = vfcvt_x_f_v_i32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vfcvt_rtz_x_f_v (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vint32m1_t result;
  result = vfcvt_rtz_x_f_v_i32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfcvt_f_x_v (vbool32_t mask, vint32m1_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfcvt_f_x_v_f32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vint64m2_t
test_vfwcvt_x_f_v (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vint64m2_t result;
  result = vfwcvt_x_f_v_i64m2_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vint64m2_t
test_vfwcvt_rtz_x_f_v (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vint64m2_t result;
  result = vfwcvt_rtz_x_f_v_i64m2_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwcvt_f_x_v (vbool32_t mask, vint32m1_t op1)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwcvt_f_x_v_f64m2_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vfloat64m2_t
test_vfwcvt_f_f_v (vbool32_t mask, vfloat32m1_t op1)
{
  start_clobber();

  vfloat64m2_t result;
  result = vfwcvt_f_f_v_f64m2_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vfncvt_x_f_w (vbool32_t mask, vfloat64m2_t op1)
{
  start_clobber();

  vint32m1_t result;
  result = vfncvt_x_f_w_i32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vfncvt_rtz_x_f_w (vbool32_t mask, vfloat64m2_t op1)
{
  start_clobber();

  vint32m1_t result;
  result = vfncvt_rtz_x_f_w_i32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfwcvt_f_x_w (vbool32_t mask, vint64m2_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfncvt_f_x_w_f32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfwcvt_f_f_w (vbool32_t mask, vfloat64m2_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfncvt_f_f_w_f32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfwcvt_rod_f_f_w (vbool32_t mask, vfloat64m2_t op1)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfncvt_rod_f_f_w_f32m1_tama(mask, op1, 32);

  end_clobber();

  return result;
}


vint32m1_t
test_vredsum_vs (vbool16_t mask, vint32m2_t op1, vint32m1_t op2)
{
  start_clobber();

  vint32m1_t result;
  result = vredsum_vs_i32m2_i32m1_tam(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint64m1_t
test_vwredsum_vs (vbool16_t mask, vint32m2_t op1, vint64m1_t op2)
{
  start_clobber();

  vint64m1_t result;
  result = vwredsum_vs_i32m2_i64m1_tam(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfredusum_vs (vbool16_t mask, vfloat32m2_t op1, vfloat32m1_t op2)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfredusum_vs_f32m2_f32m1_tam(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat64m1_t
test_vfwredusum_vs (vbool16_t mask, vfloat32m2_t op1, vfloat64m1_t op2)
{
  start_clobber();

  vfloat64m1_t result;
  result = vfwredusum_vs_f32m2_f64m1_tam(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat64m1_t
test_vfwredosum_vs (vbool16_t mask, vfloat32m2_t op1, vfloat64m1_t op2)
{
  start_clobber();

  vfloat64m1_t result;
  result = vfwredosum_vs_f32m2_f64m1_tam(mask, op1, op2, 32);

  end_clobber();

  return result;
}


vbool1_t
test_vmand_mm (vbool1_t op1, vbool1_t op2)
{
  start_clobber();

  vbool1_t result;
  result = vmand_mm_b1(op1, op2, 32);

  end_clobber();

  return result;
}

vbool1_t
test_vmnand_mm (vbool1_t op1, vbool1_t op2)
{
  start_clobber();

  vbool1_t result;
  result = vmnand_mm_b1(op1, op2, 32);

  end_clobber();

  return result;
}

vbool1_t
test_vmandn_mm (vbool1_t op1, vbool1_t op2)
{
  start_clobber();

  vbool1_t result;
  result = vmandn_mm_b1(op1, op2, 32);

  end_clobber();

  return result;
}

vbool1_t
test_vmmv_m (vbool1_t op1)
{
  start_clobber();

  vbool1_t result;
  result = vmmv_m_b1(op1, 32);

  end_clobber();

  return result;
}

vbool1_t
test_vmclr_m ()
{
  start_clobber();

  vbool1_t result;
  result = vmclr_m_b1(32);

  end_clobber();

  return result;
}

vbool1_t
test_vmset_m ()
{
  start_clobber();

  vbool1_t result;
  result = vmset_m_b1(32);

  end_clobber();

  return result;
}

vbool1_t
test_vmnot_m (vbool1_t op1)
{
  start_clobber();

  vbool1_t result;
  result = vmnot_m_b1(op1, 32);

  end_clobber();

  return result;
}

unsigned long
test_vcpop_m (vbool1_t op1)
{
  start_clobber();

  unsigned long result;
  result = vcpop_m_b1(op1, 32);

  end_clobber();

  return result;
}

unsigned long
test_vfirst_m (vbool1_t op1)
{
  start_clobber();

  unsigned long result;
  result = vfirst_m_b1(op1, 32);

  end_clobber();

  return result;
}

vbool1_t
test_vmsbf_m (vbool1_t op1)
{
  start_clobber();

  vbool1_t result;
  result = vmsbf_m_b1(op1, 32);

  end_clobber();

  return result;
}

vuint32m1_t
test_viota_m (vbool32_t op1)
{
  start_clobber();

  vuint32m1_t result;
  result = viota_m_u32m1(op1, 32);

  end_clobber();

  return result;
}

vuint32m1_t
test_vid_m (vbool32_t mask)
{
  start_clobber();

  vuint32m1_t result;
  result = vid_v_u32m1_tama(mask, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vmv_x_s (vint32m1_t dest)
{
  start_clobber();

  vint32m1_t result;
  result = vmv_s_x_i32m1_tu(dest, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t
test_vmv_x_s_rv32 (vint64m1_t dest)
{
  start_clobber();

  vint64m1_t result;
  result = vmv_s_x_i64m1_tu(dest, 1, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfmv_s_f (vfloat32m1_t dest)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfmv_s_f_f32m1_tu(dest, 1.0, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vslideup_vx (vbool32_t mask, vint32m1_t dest, vint32m1_t op1, size_t offset)
{
  start_clobber();

  vint32m1_t result;
  result = vslideup_vx_i32m1_tama(mask, dest, op1, offset, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vslidedown_vx (vbool32_t mask, vint32m1_t dest, vint32m1_t op1, size_t offset)
{
  start_clobber();

  vint32m1_t result;
  result = vslidedown_vx_i32m1_tama(mask, dest, op1, offset, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vslide1up_vx (vbool32_t mask, vint32m1_t op1, int32_t op2)
{
  start_clobber();

  vint32m1_t result;
  result = vslide1up_vx_i32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vslide1down_vx (vbool32_t mask, vint32m1_t op1, int32_t op2)
{
  start_clobber();

  vint32m1_t result;
  result = vslide1down_vx_i32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint64m1_t
test_vslide1up_vx_rv32 (vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vslide1up_vx_i64m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vint64m1_t
test_vslide1down_vx_rv32 (vbool64_t mask, vint64m1_t op1)
{
  start_clobber();

  vint64m1_t result;
  result = vslide1down_vx_i64m1_tama(mask, op1, 1, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfslide1up_vx (vbool32_t mask, vfloat32m1_t op1, float32_t op2)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfslide1up_vf_f32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vfloat32m1_t
test_vfslide1down_vx (vbool32_t mask, vfloat32m1_t op1, float32_t op2)
{
  start_clobber();

  vfloat32m1_t result;
  result = vfslide1down_vf_f32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vrgather_vv (vbool32_t mask, vint32m1_t op1, vuint32m1_t op2)
{
  start_clobber();

  vint32m1_t result;
  result = vrgather_vv_i32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vrgatherei16_vv (vbool32_t mask, vint32m1_t op1, vuint16mf2_t op2)
{
  start_clobber();

  vint32m1_t result;
  result = vrgatherei16_vv_i32m1_tama(mask, op1, op2, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vrgather_vx (vbool32_t mask, vint32m1_t op1, size_t index)
{
  start_clobber();

  vint32m1_t result;
  result = vrgather_vx_i32m1_tama(mask, op1, index, 32);

  end_clobber();

  return result;
}

vint32m1_t
test_vcompress_vm (vbool32_t mask, vint32m1_t op1, vint32m1_t op2)
{
  start_clobber();

  vint32m1_t result;
  result = vcompress_vm_i32m1(mask, op1, op2, 32);

  end_clobber();

  return result;
}
