/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat64m8_t
test0_vluxei16_v_f64m8_m(vbool8_t mask,vfloat64m8_t maskedoff,const float64_t *base,vuint16m2_t bindex,size_t vl)
{
    return vluxei16_v_f64m8_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m8,\s*t[au],\s*mu} 1 } } */

vfloat64m8_t
test1_vluxei16_v_f64m8_m(vbool8_t mask,vfloat64m8_t maskedoff,const float64_t *base,vuint16m2_t bindex,size_t vl)
{
    return vluxei16_v_f64m8_m(mask, maskedoff, base, bindex, 13);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*13,\s*e64,\s*m8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxei16\.v} 2 } } */
