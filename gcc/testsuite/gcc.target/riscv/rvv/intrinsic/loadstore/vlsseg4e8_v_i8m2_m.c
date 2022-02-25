/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg4e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vbool4_t mask,vint8m2_t maskedoff0,vint8m2_t maskedoff1,vint8m2_t maskedoff2,vint8m2_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*t[au],\s*mu} 1 } } */

void
test1_vlsseg4e8_v_i8m2_m(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,vint8m2_t *v3,vbool4_t mask,vint8m2_t maskedoff0,vint8m2_t maskedoff1,vint8m2_t maskedoff2,vint8m2_t maskedoff3,const int8_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg4e8_v_i8m2_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bstride, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e8,\s*m2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg4e8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 8 } } */

