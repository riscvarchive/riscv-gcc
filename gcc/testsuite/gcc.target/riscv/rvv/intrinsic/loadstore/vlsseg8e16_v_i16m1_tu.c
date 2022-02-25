/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg8e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

void
test1_vlsseg8e16_v_i16m1_tu(vint16m1_t *v0,vint16m1_t *v1,vint16m1_t *v2,vint16m1_t *v3,vint16m1_t *v4,vint16m1_t *v5,vint16m1_t *v6,vint16m1_t *v7,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg8e16_v_i16m1_tu(v0, v1, v2, v3, v4, v5, v6, v7, base, bstride, 0);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg8e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 16 } } */

