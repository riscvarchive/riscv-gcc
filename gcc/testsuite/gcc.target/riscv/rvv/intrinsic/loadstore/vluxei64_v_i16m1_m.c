/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint16m1_t
test0_vluxei64_v_i16m1_m(vbool16_t mask,vint16m1_t maskedoff,const int16_t *base,vuint64m4_t bindex,size_t vl)
{
    return vluxei64_v_i16m1_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

vint16m1_t
test1_vluxei64_v_i16m1_m(vbool16_t mask,vint16m1_t maskedoff,const int16_t *base,vuint64m4_t bindex,size_t vl)
{
    return vluxei64_v_i16m1_m(mask, maskedoff, base, bindex, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei64\.v} 2 } } */
