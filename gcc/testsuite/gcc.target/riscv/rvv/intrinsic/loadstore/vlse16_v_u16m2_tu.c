/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint16m2_t
test0_vlse16_v_u16m2_tu(vuint16m2_t dest,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse16_v_u16m2_tu(dest, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*tu,\s*mu} 1 } } */

vuint16m2_t
test1_vlse16_v_u16m2_tu(vuint16m2_t dest,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse16_v_u16m2_tu(dest, base, bstride, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e16,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse16\.v} 2 } } */
