/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg2ei64_v_f64m4_m(vbool16_t mask,float64_t *base,vuint64m4_t bindex,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsuxseg2ei64_v_f64m4_m(mask, base, bindex, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg2ei64_v_f64m4_m(vbool16_t mask,float64_t *base,vuint64m4_t bindex,vfloat64m4_t v0,vfloat64m4_t v1,size_t vl)
{
    vsuxseg2ei64_v_f64m4_m(mask, base, bindex, v0, v1, 21);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*21,\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg2ei64\.v} 2 } } */
