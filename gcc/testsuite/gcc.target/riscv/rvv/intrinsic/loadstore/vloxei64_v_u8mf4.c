/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8mf4_t
test0_vloxei64_v_u8mf4(const uint8_t *base,vuint64m2_t bindex,size_t vl)
{
    return vloxei64_v_u8mf4(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

vuint8mf4_t
test1_vloxei64_v_u8mf4(const uint8_t *base,vuint64m2_t bindex,size_t vl)
{
    return vloxei64_v_u8mf4(base, bindex, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei64\.v} 2 } } */
