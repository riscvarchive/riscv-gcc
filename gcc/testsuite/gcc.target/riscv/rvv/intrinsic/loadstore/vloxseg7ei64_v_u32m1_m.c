/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg7ei64_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,vuint32m1_t maskedoff4,vuint32m1_t maskedoff5,vuint32m1_t maskedoff6,const uint32_t *base,vuint64m2_t bindex,size_t vl)
{
    vloxseg7ei64_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg7ei64_v_u32m1_m(vuint32m1_t *v0,vuint32m1_t *v1,vuint32m1_t *v2,vuint32m1_t *v3,vuint32m1_t *v4,vuint32m1_t *v5,vuint32m1_t *v6,vbool32_t mask,vuint32m1_t maskedoff0,vuint32m1_t maskedoff1,vuint32m1_t maskedoff2,vuint32m1_t maskedoff3,vuint32m1_t maskedoff4,vuint32m1_t maskedoff5,vuint32m1_t maskedoff6,const uint32_t *base,vuint64m2_t bindex,size_t vl)
{
    vloxseg7ei64_v_u32m1_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bindex, 27);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*27,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg7ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 14 } } */

