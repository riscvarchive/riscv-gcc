/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg7ei32_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,vint16mf2_t maskedoff4,vint16mf2_t maskedoff5,vint16mf2_t maskedoff6,const int16_t *base,vuint32m1_t bindex,size_t vl)
{
    vloxseg7ei32_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg7ei32_v_i16mf2_m(vint16mf2_t *v0,vint16mf2_t *v1,vint16mf2_t *v2,vint16mf2_t *v3,vint16mf2_t *v4,vint16mf2_t *v5,vint16mf2_t *v6,vbool32_t mask,vint16mf2_t maskedoff0,vint16mf2_t maskedoff1,vint16mf2_t maskedoff2,vint16mf2_t maskedoff3,vint16mf2_t maskedoff4,vint16mf2_t maskedoff5,vint16mf2_t maskedoff6,const int16_t *base,vuint32m1_t bindex,size_t vl)
{
    vloxseg7ei32_v_i16mf2_m(v0, v1, v2, v3, v4, v5, v6, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, maskedoff6, base, bindex, 18);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*18,\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg7ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 14 } } */

