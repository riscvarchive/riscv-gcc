/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <riscv_vector.h>

/*
** test_vleff:
**  ...
**  vle16ff.v\tv[^0][0-9]*,\(a0\),v0.t
**  ...
**  ret
*/
vint16m1_t
test_vleff (const int16_t *base, size_t *new_vl, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vle16ff_v_i16m1_tama(mask, base, new_vl, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vlseg:
**  ...
**  vlseg2e16.v\tv[^0][0-9]*,\(a0\),v0.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlseg (const int16_t *base, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1x2_t dest asm("v0");
  dest = vlseg2e16_v_i16m1x2_tama(mask, base, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vlsegff:
**  ...
**  vlseg2e16ff.v\tv[^0][0-9]*,\(a0\),v0.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlsegff (const int16_t *base, size_t *new_vl, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1x2_t dest asm("v0");
  dest = vlseg2e16ff_v_i16m1x2_tama(mask, base, new_vl, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vlsseg:
**  ...
**  vlsseg2e16.v\tv[^0][0-9]*,\(a0\),a1,v0.t
**  ...
**  ret
*/
vint16m1x2_t
test_vlsseg (const int16_t *base, ptrdiff_t bstride, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1x2_t dest asm("v0");
  dest = vlsseg2e16_v_i16m1x2_tama(mask, base, bstride, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vadd_vv:
**  ...
**  vadd.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vadd_vv (vint16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vadd_vv_i16m1_tama(mask, v, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vsub_vv:
**  ...
**  vsub.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vsub_vv (vint16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vsub_vv_i16m1_tama(mask, v, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vadd_vx:
**  ...
**  vadd.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vadd_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vadd_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vsub_vx:
**  ...
**  vsub.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vsub_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vsub_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vrsub_vx:
**  ...
**  vrsub.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vrsub_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vrsub_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vneg_v:
**  ...
**  vneg.v\tv[^0][0-9]*,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vneg_v (vint16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vneg_v_i16m1_tama(mask, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vand_vv:
**  ...
**  vand.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vand_vv (vint16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vand_vv_i16m1_tama(mask, v, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vand_vx:
**  ...
**  vand.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vand_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vand_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vnot_v:
**  ...
**  vnot.v\tv[^0][0-9]*,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vnot_v (vint16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vnot_v_i16m1_tama(mask, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vsll_vv:
**  ...
**  vsll.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vsll_vv (vint16m1_t v, vuint16m1_t shift, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vsll_vv_i16m1_tama(mask, v, shift, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vsll_vx:
**  ...
**  vsll.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vsll_vx (vint16m1_t v, size_t shift, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vsll_vx_i16m1_tama(mask, v, shift, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vmin_vv:
**  ...
**  vmin.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vmin_vv (vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vmin_vv_i16m1_tama(mask, v1, v2, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vmin_vx:
**  ...
**  vmin.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vmin_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vmin_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vmul_vv:
**  ...
**  vmul.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vmul_vv (vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vmul_vv_i16m1_tama(mask, v1, v2, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vmul_vx:
**  ...
**  vmul.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vmul_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vmul_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vmulhsu_vv:
**  ...
**  vmulhsu.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vmulhsu_vv (vint16m1_t v1, vuint16m1_t v2, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vmulhsu_vv_i16m1_tama(mask, v1, v2, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vmulhsu_vx:
**  ...
**  vmulhsu.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vmulhsu_vx (vint16m1_t v, uint16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vmulhsu_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vdiv_vv:
**  ...
**  vdiv.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vdiv_vv (vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vdiv_vv_i16m1_tama(mask, v1, v2, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vdiv_vx:
**  ...
**  vdiv.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vdiv_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vdiv_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vsadd_vv:
**  ...
**  vsadd.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vsadd_vv (vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vsadd_vv_i16m1_tama(mask, v1, v2, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vsadd_vx:
**  ...
**  vsadd.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vsadd_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vsadd_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vssub_vv:
**  ...
**  vssub.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vssub_vv (vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vssub_vv_i16m1_tama(mask, v1, v2, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vssub_vx:
**  ...
**  vssub.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vssub_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vssub_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vaadd_vv:
**  ...
**  vaadd.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vaadd_vv (vint16m1_t v1, vint16m1_t v2, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vaadd_vv_i16m1_tama(mask, v1, v2, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vaadd_vx:
**  ...
**  vaadd.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vaadd_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vaadd_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vssra_vv:
**  ...
**  vssra.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vssra_vv (vint16m1_t v, vuint16m1_t shift, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vssra_vv_i16m1_tama(mask, v, shift, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vssra_vx:
**  ...
**  vssra.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vssra_vx (vint16m1_t v, size_t shift, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vssra_vx_i16m1_tama(mask, v, shift, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfadd_vv:
**  ...
**  vfadd.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vfloat16m1_t
test_vfadd_vv (vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vfloat16m1_t dest asm("v0");
  dest = vfadd_vv_f16m1_tama(mask, v1, v2, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfadd_vf:
**  ...
**  vfadd.vf\tv[^0][0-9]*,v[0-9]+,fa0,v0.t
**  ...
**  ret
*/
vfloat16m1_t
test_vfadd_vf (vfloat16m1_t v, float16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vfloat16m1_t dest asm("v0");
  dest = vfadd_vf_f16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfrsub_vf:
**  ...
**  vfrsub.vf\tv[^0][0-9]*,v[0-9]+,fa0,v0.t
**  ...
**  ret
*/
vfloat16m1_t
test_vfrsub_vf (vfloat16m1_t v, float16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vfloat16m1_t dest asm("v0");
  dest = vfrsub_vf_f16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfsqrt_v:
**  ...
**  vfsqrt.v\tv[^0][0-9]*,v[0-9]+,v0.t
**  ...
**  ret
*/
vfloat16m1_t
test_vfsqrt_v (vfloat16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vfloat16m1_t dest asm("v0");
  dest = vfsqrt_v_f16m1_tama(mask, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfrsqrt7_v:
**  ...
**  vfrsqrt7.v\tv[^0][0-9]*,v[0-9]+,v0.t
**  ...
**  ret
*/
vfloat16m1_t
test_vfrsqrt7_v (vfloat16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vfloat16m1_t dest asm("v0");
  dest = vfrsqrt7_v_f16m1_tama(mask, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfsgnj_vv:
**  ...
**  vfsgnj.vv\tv[^0][0-9]*,v[0-9]+,v[0-9]+,v0.t
**  ...
**  ret
*/
vfloat16m1_t
test_vfsgnj_vv (vfloat16m1_t v1, vfloat16m1_t v2, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vfloat16m1_t dest asm("v0");
  dest = vfsgnj_vv_f16m1_tama(mask, v1, v2, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfsgnj_vf:
**  ...
**  vfsgnj.vf\tv[^0][0-9]*,v[0-9]+,fa0,v0.t
**  ...
**  ret
*/
vfloat16m1_t
test_vfsgnj_vf (vfloat16m1_t v, float16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vfloat16m1_t dest asm("v0");
  dest = vfsgnj_vf_f16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfneg_v:
**  ...
**  vfneg.v\tv[^0][0-9]*,v[0-9]+,v0.t
**  ...
**  ret
*/
vfloat16m1_t
test_vfneg_v (vfloat16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vfloat16m1_t dest asm("v0");
  dest = vfneg_v_f16m1_tama(mask, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfabs_v:
**  ...
**  vfabs.v\tv[^0][0-9]*,v[0-9]+,v0.t
**  ...
**  ret
*/
vfloat16m1_t
test_vfabs_v (vfloat16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vfloat16m1_t dest asm("v0");
  dest = vfabs_v_f16m1_tama(mask, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfclass_v:
**  ...
**  vfclass.v\tv[^0][0-9]*,v[0-9]+,v0.t
**  ...
**  ret
*/
vuint16m1_t
test_vfclass_v (vfloat16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vuint16m1_t dest asm("v0");
  dest = vfclass_v_u16m1_tama(mask, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfcvt_v:
**  ...
**  vfcvt.x.f.v\tv[^0][0-9]*,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vfcvt_v (vfloat16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vfcvt_x_f_v_i16m1_tama(mask, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfcvt_rtz_v:
**  ...
**  vfcvt.rtz.x.f.v\tv[^0][0-9]*,v[0-9]+,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vfcvt_rtz_v (vfloat16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vfcvt_rtz_x_f_v_i16m1_tama(mask, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfcvt_f_x_v:
**  ...
**  vfcvt.f.x.v\tv[^0][0-9]*,v[0-9]+,v0.t
**  ...
**  ret
*/
vfloat16m1_t
test_vfcvt_f_x_v (vint16m1_t v, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vfloat16m1_t dest asm("v0");
  dest = vfcvt_f_x_v_f16m1_tama(mask, v, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vid_v:
**  ...
**  vid.v\tv[^0][0-9]*,v0.t
**  ...
**  ret
*/
vuint16m1_t
test_vid_v (size_t vl)
{
  register vbool16_t mask asm("v0");
  register vuint16m1_t dest asm("v0");
  dest = vid_v_u16m1_tama(mask, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vslidedown_vx:
**  ...
**  vslidedown.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vslidedown_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vslidedown_vx_i16m1_tama(mask, v, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vslide1down_vx:
**  ...
**  vslide1down.vx\tv[^0][0-9]*,v[0-9]+,a0,v0.t
**  ...
**  ret
*/
vint16m1_t
test_vslide1down_vx (vint16m1_t v, int16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vint16m1_t dest asm("v0");
  dest = vslide1down_vx_i16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}

/*
** test_vfslide1down_vf:
**  ...
**  vfslide1down.vf\tv[^0][0-9]*,v[0-9]+,fa0,v0.t
**  ...
**  ret
*/
vfloat16m1_t
test_vfslide1down_vf (vfloat16m1_t v, float16_t x, size_t vl)
{
  register vbool16_t mask asm("v0");
  register vfloat16m1_t dest asm("v0");
  dest = vfslide1down_vf_f16m1_tama(mask, v, x, vl);
  asm volatile ("clobber_regs" : : : "v8");
  return dest;
}