/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint32m4_t
test0_vloxei16_v_i32m4_m(vbool8_t mask,vint32m4_t maskedoff,const int32_t *base,vuint16m2_t bindex,size_t vl)
{
    return vloxei16_v_i32m4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu} 1 } } */

vint32m4_t
test1_vloxei16_v_i32m4_m(vbool8_t mask,vint32m4_t maskedoff,const int32_t *base,vuint16m2_t bindex,size_t vl)
{
    return vloxei16_v_i32m4_m(mask, maskedoff, base, bindex, 0);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e32,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei16\.v} 2 } } */
