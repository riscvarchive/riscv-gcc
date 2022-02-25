/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8mf4_t
test0_vluxei32_v_i8mf4_m(vbool32_t mask,vint8mf4_t maskedoff,const int8_t *base,vuint32m1_t bindex,size_t vl)
{
    return vluxei32_v_i8mf4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

vint8mf4_t
test1_vluxei32_v_i8mf4_m(vbool32_t mask,vint8mf4_t maskedoff,const int8_t *base,vuint32m1_t bindex,size_t vl)
{
    return vluxei32_v_i8mf4_m(mask, maskedoff, base, bindex, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei32\.v} 2 } } */
