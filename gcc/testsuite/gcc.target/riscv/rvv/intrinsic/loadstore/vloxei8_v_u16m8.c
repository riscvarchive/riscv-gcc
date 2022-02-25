/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint16m8_t
test0_vloxei8_v_u16m8(const uint16_t *base,vuint8m4_t bindex,size_t vl)
{
    return vloxei8_v_u16m8(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*ta,\s*mu} 1 } } */

vuint16m8_t
test1_vloxei8_v_u16m8(const uint16_t *base,vuint8m4_t bindex,size_t vl)
{
    return vloxei8_v_u16m8(base, bindex, 15);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*15,\s*e16,\s*m8,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei8\.v} 2 } } */
