/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint16mf4_t
test0_vlse16_v_u16mf4(const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse16_v_u16mf4(base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

vuint16mf4_t
test1_vlse16_v_u16mf4(const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse16_v_u16mf4(base, bstride, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse16\.v} 2 } } */
