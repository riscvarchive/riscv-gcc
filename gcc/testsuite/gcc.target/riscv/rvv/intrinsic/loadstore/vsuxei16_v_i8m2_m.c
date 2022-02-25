/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxei16_v_i8m2_m(vbool4_t mask,int8_t *base,vuint16m4_t bindex,vint8m2_t value,size_t vl)
{
    vsuxei16_v_i8m2_m(mask, base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxei16_v_i8m2_m(vbool4_t mask,int8_t *base,vuint16m4_t bindex,vint8m2_t value,size_t vl)
{
    vsuxei16_v_i8m2_m(mask, base, bindex, value, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e8,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxei16\.v} 2 } } */
