/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint32m4_t
test0_vluxei32_v_i32m4_m(vbool8_t mask,vint32m4_t maskedoff,const int32_t *base,vuint32m4_t bindex,size_t vl)
{
    return vluxei32_v_i32m4_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*t[au],\s*mu} 1 } } */

vint32m4_t
test1_vluxei32_v_i32m4_m(vbool8_t mask,vint32m4_t maskedoff,const int32_t *base,vuint32m4_t bindex,size_t vl)
{
    return vluxei32_v_i32m4_m(mask, maskedoff, base, bindex, 19);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*19,\s*e32,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei32\.v} 2 } } */
