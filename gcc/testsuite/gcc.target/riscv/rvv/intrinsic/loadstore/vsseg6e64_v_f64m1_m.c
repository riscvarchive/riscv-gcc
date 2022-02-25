/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg6e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsseg6e64_v_f64m1_m(mask, base, v0, v1, v2, v3, v4, v5, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsseg6e64_v_f64m1_m(vbool64_t mask,float64_t *base,vfloat64m1_t v0,vfloat64m1_t v1,vfloat64m1_t v2,vfloat64m1_t v3,vfloat64m1_t v4,vfloat64m1_t v5,size_t vl)
{
    vsseg6e64_v_f64m1_m(mask, base, v0, v1, v2, v3, v4, v5, 5);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*5,\s*e64,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg6e64\.v} 2 } } */
