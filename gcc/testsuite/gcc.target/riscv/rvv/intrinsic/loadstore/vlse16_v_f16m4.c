/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat16m4_t
test0_vlse16_v_f16m4(const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse16_v_f16m4(base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu} 1 } } */

vfloat16m4_t
test1_vlse16_v_f16m4(const float16_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse16_v_f16m4(base, bstride, 14);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*14,\s*e16,\s*m4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse16\.v} 2 } } */
