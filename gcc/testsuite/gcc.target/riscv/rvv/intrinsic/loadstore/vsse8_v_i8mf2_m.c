/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsse8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t value,size_t vl)
{
    vsse8_v_i8mf2_m(mask, base, bstride, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vsse8_v_i8mf2_m(vbool16_t mask,int8_t *base,ptrdiff_t bstride,vint8mf2_t value,size_t vl)
{
    vsse8_v_i8mf2_m(mask, base, bstride, value, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsse8\.v} 2 } } */
