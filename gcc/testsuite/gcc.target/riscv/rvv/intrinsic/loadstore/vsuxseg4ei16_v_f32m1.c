/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg4ei16_v_f32m1(float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsuxseg4ei16_v_f32m1(base, bindex, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg4ei16_v_f32m1(float32_t *base,vuint16mf2_t bindex,vfloat32m1_t v0,vfloat32m1_t v1,vfloat32m1_t v2,vfloat32m1_t v3,size_t vl)
{
    vsuxseg4ei16_v_f32m1(base, bindex, v0, v1, v2, v3, 1);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*1,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg4ei16\.v} 2 } } */
