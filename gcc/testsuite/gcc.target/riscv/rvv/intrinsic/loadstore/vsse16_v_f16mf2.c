/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsse16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t value,size_t vl)
{
    vsse16_v_f16mf2(base, bstride, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vsse16_v_f16mf2(float16_t *base,ptrdiff_t bstride,vfloat16mf2_t value,size_t vl)
{
    vsse16_v_f16mf2(base, bstride, value, 19);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*19,\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsse16\.v} 2 } } */
