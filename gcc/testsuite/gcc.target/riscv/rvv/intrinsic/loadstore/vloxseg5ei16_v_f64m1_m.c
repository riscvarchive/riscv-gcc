/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg5ei16_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,vfloat64m1_t maskedoff4,const float64_t *base,vuint16mf4_t bindex,size_t vl)
{
    vloxseg5ei16_v_f64m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg5ei16_v_f64m1_m(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vbool64_t mask,vfloat64m1_t maskedoff0,vfloat64m1_t maskedoff1,vfloat64m1_t maskedoff2,vfloat64m1_t maskedoff3,vfloat64m1_t maskedoff4,const float64_t *base,vuint16mf4_t bindex,size_t vl)
{
    vloxseg5ei16_v_f64m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bindex, 2);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*2,\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg5ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 10 } } */

