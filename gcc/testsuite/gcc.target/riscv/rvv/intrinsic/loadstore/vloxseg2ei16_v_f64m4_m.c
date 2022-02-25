/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg2ei16_v_f64m4_m(vfloat64m4_t *v0,vfloat64m4_t *v1,vbool16_t mask,vfloat64m4_t maskedoff0,vfloat64m4_t maskedoff1,const float64_t *base,vuint16m1_t bindex,size_t vl)
{
    vloxseg2ei16_v_f64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg2ei16_v_f64m4_m(vfloat64m4_t *v0,vfloat64m4_t *v1,vbool16_t mask,vfloat64m4_t maskedoff0,vfloat64m4_t maskedoff1,const float64_t *base,vuint16m1_t bindex,size_t vl)
{
    vloxseg2ei16_v_f64m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg2ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs4r\.v} 4 } } */

