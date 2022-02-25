/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg2e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m1(v0, v1, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlsseg2e16_v_f16m1(vfloat16m1_t *v0,vfloat16m1_t *v1,const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_f16m1(v0, v1, base, bstride, 19);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*19,\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg2e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 4 } } */

