/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint16m4_t
test0_vloxei32_v_u16m4(const uint16_t *base,vuint32m8_t bindex,size_t vl)
{
    return vloxei32_v_u16m4(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*ta,\s*mu} 1 } } */

vuint16m4_t
test1_vloxei32_v_u16m4(const uint16_t *base,vuint32m8_t bindex,size_t vl)
{
    return vloxei32_v_u16m4(base, bindex, 10);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*10,\s*e16,\s*m4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei32\.v} 2 } } */
