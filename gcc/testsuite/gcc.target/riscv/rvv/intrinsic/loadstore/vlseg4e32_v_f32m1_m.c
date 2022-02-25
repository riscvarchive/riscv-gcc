/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg4e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg4e32_v_f32m1_m(vfloat32m1_t *v0,vfloat32m1_t *v1,vfloat32m1_t *v2,vfloat32m1_t *v3,vbool32_t mask,vfloat32m1_t maskedoff0,vfloat32m1_t maskedoff1,vfloat32m1_t maskedoff2,vfloat32m1_t maskedoff3,const float32_t *base,size_t vl)
{
    vlseg4e32_v_f32m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, 13);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*13,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg4e32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 8 } } */

