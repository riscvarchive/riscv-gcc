/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8mf2_t
test0_vlse8_v_i8mf2(const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse8_v_i8mf2(base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

vint8mf2_t
test1_vlse8_v_i8mf2(const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse8_v_i8mf2(base, bstride, 14);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*14,\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse8\.v} 2 } } */
