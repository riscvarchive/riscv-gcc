/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxei16_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint16m2_t bindex,vuint8m1_t value,size_t vl)
{
    vsuxei16_v_u8m1_m(mask, base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxei16_v_u8m1_m(vbool8_t mask,uint8_t *base,vuint16m2_t bindex,vuint8m1_t value,size_t vl)
{
    vsuxei16_v_u8m1_m(mask, base, bindex, value, 10);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*10,\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxei16\.v} 2 } } */
