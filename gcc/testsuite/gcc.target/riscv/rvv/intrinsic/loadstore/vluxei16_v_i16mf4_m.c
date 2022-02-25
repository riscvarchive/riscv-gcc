/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint16mf4_t
test0_vluxei16_v_i16mf4_m(vbool64_t mask,vint16mf4_t maskedoff,const int16_t *base,vuint16mf4_t bindex,size_t vl)
{
    return vluxei16_v_i16mf4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

vint16mf4_t
test1_vluxei16_v_i16mf4_m(vbool64_t mask,vint16mf4_t maskedoff,const int16_t *base,vuint16mf4_t bindex,size_t vl)
{
    return vluxei16_v_i16mf4_m(mask, maskedoff, base, bindex, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei16\.v} 2 } } */
