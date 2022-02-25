/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxei32_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint32m1_t bindex,vfloat16mf2_t value,size_t vl)
{
    vsuxei32_v_f16mf2_m(mask, base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxei32_v_f16mf2_m(vbool32_t mask,float16_t *base,vuint32m1_t bindex,vfloat16mf2_t value,size_t vl)
{
    vsuxei32_v_f16mf2_m(mask, base, bindex, value, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxei32\.v} 2 } } */
