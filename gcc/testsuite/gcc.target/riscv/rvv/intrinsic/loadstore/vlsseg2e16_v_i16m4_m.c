/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg2e16_v_i16m4_m(vint16m4_t *v0,vint16m4_t *v1,vbool4_t mask,vint16m4_t maskedoff0,vint16m4_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m4,\s*t[au],\s*mu} 1 } } */

void
test1_vlsseg2e16_v_i16m4_m(vint16m4_t *v0,vint16m4_t *v1,vbool4_t mask,vint16m4_t maskedoff0,vint16m4_t maskedoff1,const int16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg2e16_v_i16m4_m(v0, v1, mask, maskedoff0, maskedoff1, base, bstride, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e16,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg2e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs4r\.v} 4 } } */

