/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8mf2_t
test0_vluxei16_v_i8mf2_m(vbool16_t mask,vint8mf2_t maskedoff,const int8_t *base,vuint16m1_t bindex,size_t vl)
{
    return vluxei16_v_i8mf2_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

vint8mf2_t
test1_vluxei16_v_i8mf2_m(vbool16_t mask,vint8mf2_t maskedoff,const int8_t *base,vuint16m1_t bindex,size_t vl)
{
    return vluxei16_v_i8mf2_m(mask, maskedoff, base, bindex, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei16\.v} 2 } } */
