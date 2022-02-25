/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat64m1_t
test0_vloxei32_v_f64m1_m(vbool64_t mask,vfloat64m1_t maskedoff,const float64_t *base,vuint32mf2_t bindex,size_t vl)
{
    return vloxei32_v_f64m1_m(mask, maskedoff, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

vfloat64m1_t
test1_vloxei32_v_f64m1_m(vbool64_t mask,vfloat64m1_t maskedoff,const float64_t *base,vuint32mf2_t bindex,size_t vl)
{
    return vloxei32_v_f64m1_m(mask, maskedoff, base, bindex, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxei32\.v} 2 } } */
