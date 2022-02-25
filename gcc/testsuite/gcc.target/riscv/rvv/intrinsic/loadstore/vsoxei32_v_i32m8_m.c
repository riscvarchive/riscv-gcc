/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei32_v_i32m8_m(vbool4_t mask,int32_t *base,vuint32m8_t bindex,vint32m8_t value,size_t vl)
{
    vsoxei32_v_i32m8_m(mask, base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxei32_v_i32m8_m(vbool4_t mask,int32_t *base,vuint32m8_t bindex,vint32m8_t value,size_t vl)
{
    vsoxei32_v_i32m8_m(mask, base, bindex, value, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e32,\s*m8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei32\.v} 2 } } */
