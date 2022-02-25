/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint16m2_t
test0_vloxei64_v_i16m2_m(vbool8_t mask,vint16m2_t maskedoff,const int16_t *base,vuint64m8_t bindex,size_t vl)
{
    return vloxei64_v_i16m2_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*t[au],\s*mu} 1 } } */

vint16m2_t
test1_vloxei64_v_i16m2_m(vbool8_t mask,vint16m2_t maskedoff,const int16_t *base,vuint64m8_t bindex,size_t vl)
{
    return vloxei64_v_i16m2_m(mask, maskedoff, base, bindex, 15);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*15,\s*e16,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei64\.v} 2 } } */
