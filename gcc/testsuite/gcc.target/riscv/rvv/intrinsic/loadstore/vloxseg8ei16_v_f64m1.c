/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg8ei16_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,const float64_t *base,vuint16mf4_t bindex,size_t vl)
{
    vloxseg8ei16_v_f64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vloxseg8ei16_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,vfloat64m1_t *v4,vfloat64m1_t *v5,vfloat64m1_t *v6,vfloat64m1_t *v7,const float64_t *base,vuint16mf4_t bindex,size_t vl)
{
    vloxseg8ei16_v_f64m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bindex, 0);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg8ei16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 16 } } */

