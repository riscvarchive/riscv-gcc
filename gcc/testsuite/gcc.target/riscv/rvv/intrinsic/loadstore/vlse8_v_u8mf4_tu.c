/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8mf4_t
test0_vlse8_v_u8mf4_tu(vuint8mf4_t dest,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse8_v_u8mf4_tu(dest, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu} 1 } } */

vuint8mf4_t
test1_vlse8_v_u8mf4_tu(vuint8mf4_t dest,const uint8_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse8_v_u8mf4_tu(dest, base, bstride, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e8,\s*mf4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse8\.v} 2 } } */
