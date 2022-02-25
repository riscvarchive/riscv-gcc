/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8m8_t
test0_vluxei8_v_u8m8(const uint8_t *base,vuint8m8_t bindex,size_t vl)
{
    return vluxei8_v_u8m8(base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*ta,\s*mu} 1 } } */

vuint8m8_t
test1_vluxei8_v_u8m8(const uint8_t *base,vuint8m8_t bindex,size_t vl)
{
    return vluxei8_v_u8m8(base, bindex, 1);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*1,\s*e8,\s*m8,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei8\.v} 2 } } */
