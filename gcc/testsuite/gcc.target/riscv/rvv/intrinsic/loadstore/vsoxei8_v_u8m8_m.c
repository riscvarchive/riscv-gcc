/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei8_v_u8m8_m(vbool1_t mask,uint8_t *base,vuint8m8_t bindex,vuint8m8_t value,size_t vl)
{
    vsoxei8_v_u8m8_m(mask, base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxei8_v_u8m8_m(vbool1_t mask,uint8_t *base,vuint8m8_t bindex,vuint8m8_t value,size_t vl)
{
    vsoxei8_v_u8m8_m(mask, base, bindex, value, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e8,\s*m8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei8\.v} 2 } } */
