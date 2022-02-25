/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg2ei32_v_f64m2_m(vbool32_t mask,float64_t *base,vuint32m1_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsoxseg2ei32_v_f64m2_m(mask, base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxseg2ei32_v_f64m2_m(vbool32_t mask,float64_t *base,vuint32m1_t bindex,vfloat64m2_t v0,vfloat64m2_t v1,size_t vl)
{
    vsoxseg2ei32_v_f64m2_m(mask, base, bindex, v0, v1, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e64,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg2ei32\.v} 2 } } */
