/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vssseg8e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vssseg8e8_v_i8mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vssseg8e8_v_i8mf2(int8_t *base,ptrdiff_t bstride,vint8mf2_t v0,vint8mf2_t v1,vint8mf2_t v2,vint8mf2_t v3,vint8mf2_t v4,vint8mf2_t v5,vint8mf2_t v6,vint8mf2_t v7,size_t vl)
{
    vssseg8e8_v_i8mf2(base, bstride, v0, v1, v2, v3, v4, v5, v6, v7, 28);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*28,\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vssseg8e8\.v} 2 } } */
