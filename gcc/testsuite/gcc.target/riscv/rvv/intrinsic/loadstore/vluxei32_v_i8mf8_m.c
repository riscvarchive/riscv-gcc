/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8mf8_t
test0_vluxei32_v_i8mf8_m(vbool64_t mask,vint8mf8_t maskedoff,const int8_t *base,vuint32mf2_t bindex,size_t vl)
{
    return vluxei32_v_i8mf8_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

vint8mf8_t
test1_vluxei32_v_i8mf8_m(vbool64_t mask,vint8mf8_t maskedoff,const int8_t *base,vuint32mf2_t bindex,size_t vl)
{
    return vluxei32_v_i8mf8_m(mask, maskedoff, base, bindex, 27);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*27,\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei32\.v} 2 } } */
