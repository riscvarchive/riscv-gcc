/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vssseg5e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vssseg5e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vssseg5e32_v_i32m1_m(vbool32_t mask,int32_t *base,ptrdiff_t bstride,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,size_t vl)
{
    vssseg5e32_v_i32m1_m(mask, base, bstride, v0, v1, v2, v3, v4, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vssseg5e32\.v} 2 } } */
