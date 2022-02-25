/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vssseg2e8_v_i8m4_m(vbool2_t mask,int8_t *base,ptrdiff_t bstride,vint8m4_t v0,vint8m4_t v1,size_t vl)
{
    vssseg2e8_v_i8m4_m(mask, base, bstride, v0, v1, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m4,\s*t[au],\s*mu} 1 } } */

void
test1_vssseg2e8_v_i8m4_m(vbool2_t mask,int8_t *base,ptrdiff_t bstride,vint8m4_t v0,vint8m4_t v1,size_t vl)
{
    vssseg2e8_v_i8m4_m(mask, base, bstride, v0, v1, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e8,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vssseg2e8\.v} 2 } } */
