/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsse8_v_u8m2(uint8_t *base,ptrdiff_t bstride,vuint8m2_t value,size_t vl)
{
    vsse8_v_u8m2(base, bstride, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vsse8_v_u8m2(uint8_t *base,ptrdiff_t bstride,vuint8m2_t value,size_t vl)
{
    vsse8_v_u8m2(base, bstride, value, 14);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*14,\s*e8,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsse8\.v} 2 } } */
