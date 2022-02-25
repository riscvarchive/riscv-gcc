/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vfloat64m1_t
test0_vlse64_v_f64m1_m(vbool64_t mask,vfloat64m1_t maskedoff,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse64_v_f64m1_m(mask, maskedoff, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

vfloat64m1_t
test1_vlse64_v_f64m1_m(vbool64_t mask,vfloat64m1_t maskedoff,const float64_t *base,ptrdiff_t bstride,size_t vl)
{
    return vlse64_v_f64m1_m(mask, maskedoff, base, bstride, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlse64\.v} 2 } } */
