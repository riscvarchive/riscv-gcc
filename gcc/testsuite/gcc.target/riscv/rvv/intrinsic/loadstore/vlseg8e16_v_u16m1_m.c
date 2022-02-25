/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg8e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,vuint16m1_t maskedoff5,vuint16m1_t maskedoff6,vuint16m1_t maskedoff7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg8e16_v_u16m1_m(vuint16m1_t *v0,vuint16m1_t *v1,vuint16m1_t *v2,vuint16m1_t *v3,vuint16m1_t *v4,vuint16m1_t *v5,vuint16m1_t *v6,vuint16m1_t *v7,vbool16_t mask,vuint16m1_t maskedoff0,vuint16m1_t maskedoff1,vuint16m1_t maskedoff2,vuint16m1_t maskedoff3,vuint16m1_t maskedoff4,vuint16m1_t maskedoff5,vuint16m1_t maskedoff6,vuint16m1_t maskedoff7,const uint16_t *base,size_t vl)
{
    vlseg8e16_v_u16m1_m(v0, v1, v2, v3, v4, v5, v6, v7, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, maskedoff7, base, 5);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*5,\s*e16,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg8e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 16 } } */

