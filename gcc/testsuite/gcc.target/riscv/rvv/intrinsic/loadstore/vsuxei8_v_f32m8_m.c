/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxei8_v_f32m8_m(vbool4_t mask,float32_t *base,vuint8m2_t bindex,vfloat32m8_t value,size_t vl)
{
    vsuxei8_v_f32m8_m(mask, base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxei8_v_f32m8_m(vbool4_t mask,float32_t *base,vuint8m2_t bindex,vfloat32m8_t value,size_t vl)
{
    vsuxei8_v_f32m8_m(mask, base, bindex, value, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e32,\s*m8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxei8\.v} 2 } } */
