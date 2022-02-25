/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8mf4_t
test0_vloxei8_v_u8mf4_tu(vuint8mf4_t dest,const uint8_t *base,vuint8mf4_t bindex,size_t vl)
{
    return vloxei8_v_u8mf4_tu(dest, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu} 1 } } */

vuint8mf4_t
test1_vloxei8_v_u8mf4_tu(vuint8mf4_t dest,const uint8_t *base,vuint8mf4_t bindex,size_t vl)
{
    return vloxei8_v_u8mf4_tu(dest, base, bindex, 18);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*18,\s*e8,\s*mf4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei8\.v} 2 } } */
