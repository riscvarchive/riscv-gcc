/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint16mf2_t
test0_vluxei32_v_i16mf2(const int16_t *base,vuint32m1_t bindex,size_t vl)
{
    return vluxei32_v_i16mf2(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

vint16mf2_t
test1_vluxei32_v_i16mf2(const int16_t *base,vuint32m1_t bindex,size_t vl)
{
    return vluxei32_v_i16mf2(base, bindex, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei32\.v} 2 } } */
