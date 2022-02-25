/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg8e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu} 1 } } */

void
test1_vlsseg8e8_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,vint8mf2_t *v2,vint8mf2_t *v3,vint8mf2_t *v4,vint8mf2_t *v5,vint8mf2_t *v6,vint8mf2_t *v7,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e8_v_i8mf2_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e8,\s*mf2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg8e8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 16 } } */

