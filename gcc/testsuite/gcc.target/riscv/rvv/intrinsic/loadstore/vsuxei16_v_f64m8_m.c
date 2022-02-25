/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxei16_v_f64m8_m(vbool8_t mask,float64_t *base,vuint16m2_t bindex,vfloat64m8_t value,size_t vl)
{
    vsuxei16_v_f64m8_m(mask, base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxei16_v_f64m8_m(vbool8_t mask,float64_t *base,vuint16m2_t bindex,vfloat64m8_t value,size_t vl)
{
    vsuxei16_v_f64m8_m(mask, base, bindex, value, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e64,\s*m8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxei16\.v} 2 } } */
