/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg4ei16_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,vuint16mf2_t bindex,size_t vl)
{
    vloxseg4ei16_v_f64m2_tu(v0, v1, v2, v3, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu} 1 } } */

void
test1_vloxseg4ei16_v_f64m2_tu(vfloat64m2_t *v0,vfloat64m2_t *v1,vfloat64m2_t *v2,vfloat64m2_t *v3,const float64_t *base,vuint16mf2_t bindex,size_t vl)
{
    vloxseg4ei16_v_f64m2_tu(v0, v1, v2, v3, base, bindex, 6);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*6,\s*e64,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg4ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 8 } } */

