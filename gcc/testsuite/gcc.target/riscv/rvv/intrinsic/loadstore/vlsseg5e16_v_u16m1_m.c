/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg5e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vlsseg5e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg5e16_v_u16m1_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bstride, 1);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*1,\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg5e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 10 } } */

