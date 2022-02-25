/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg4e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_f64m1(v0, v1, v2, v3, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlseg4e64ff_v_f64m1(vfloat64m1_t *v0,vfloat64m1_t *v1,vfloat64m1_t *v2,vfloat64m1_t *v3,const float64_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e64ff_v_f64m1(v0, v1, v2, v3, base, new_vl, 18);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*18,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg4e64ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 8 } } */

