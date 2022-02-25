/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint32m4_t
test0_vluxei16_v_u32m4_m(vbool8_t mask,vuint32m4_t maskedoff,const uint32_t *base,vuint16m2_t bindex,size_t vl)
{
    return vluxei16_v_u32m4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu} 1 } } */

vuint32m4_t
test1_vluxei16_v_u32m4_m(vbool8_t mask,vuint32m4_t maskedoff,const uint32_t *base,vuint16m2_t bindex,size_t vl)
{
    return vluxei16_v_u32m4_m(mask, maskedoff, base, bindex, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e32,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei16\.v} 2 } } */
