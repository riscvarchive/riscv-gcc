/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8m4_t
test0_vluxei8_v_i8m4_m(vbool2_t mask,vint8m4_t maskedoff,const int8_t *base,vuint8m4_t bindex,size_t vl)
{
    return vluxei8_v_i8m4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu} 1 } } */

vint8m4_t
test1_vluxei8_v_i8m4_m(vbool2_t mask,vint8m4_t maskedoff,const int8_t *base,vuint8m4_t bindex,size_t vl)
{
    return vluxei8_v_i8m4_m(mask, maskedoff, base, bindex, 4);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*4,\s*e8,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei8\.v} 2 } } */
