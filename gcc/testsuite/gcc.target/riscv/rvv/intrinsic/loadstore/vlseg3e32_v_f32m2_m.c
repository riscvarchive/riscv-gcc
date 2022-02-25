/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg3e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vbool16_t mask,vfloat32m2_t maskedoff0,vfloat32m2_t maskedoff1,vfloat32m2_t maskedoff2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg3e32_v_f32m2_m(vfloat32m2_t *v0,vfloat32m2_t *v1,vfloat32m2_t *v2,vbool16_t mask,vfloat32m2_t maskedoff0,vfloat32m2_t maskedoff1,vfloat32m2_t maskedoff2,const float32_t *base,size_t vl)
{
    vlseg3e32_v_f32m2_m(v0, v1, v2, mask, maskedoff0, maskedoff1, maskedoff2, base, 27);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*27,\s*e32,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg3e32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 6 } } */

