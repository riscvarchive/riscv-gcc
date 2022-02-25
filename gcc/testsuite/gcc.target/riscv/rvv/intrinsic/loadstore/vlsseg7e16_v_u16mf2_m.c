/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlsseg7e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,vuint16mf2_t maskedoff4,vuint16mf2_t maskedoff5,vuint16mf2_t maskedoff6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vlsseg7e16_v_u16mf2_m(vuint16mf2_t *v0,vuint16mf2_t *v1,vuint16mf2_t *v2,vuint16mf2_t *v3,vuint16mf2_t *v4,vuint16mf2_t *v5,vuint16mf2_t *v6,vbool32_t mask,vuint16mf2_t maskedoff0,vuint16mf2_t maskedoff1,vuint16mf2_t maskedoff2,vuint16mf2_t maskedoff3,vuint16mf2_t maskedoff4,vuint16mf2_t maskedoff5,vuint16mf2_t maskedoff6,const uint16_t *base,ptrdiff_t bstride,size_t vl)
{
    vlsseg7e16_v_u16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bstride, 18);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*18,\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlsseg7e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 14 } } */

