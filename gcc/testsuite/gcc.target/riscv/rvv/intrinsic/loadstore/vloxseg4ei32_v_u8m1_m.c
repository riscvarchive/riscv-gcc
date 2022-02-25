/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg4ei32_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,const uint8_t *base,vuint32m4_t bindex,size_t vl)
{
    vloxseg4ei32_v_u8m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg4ei32_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,vuint8m1_t maskedoff2,vuint8m1_t maskedoff3,const uint8_t *base,vuint32m4_t bindex,size_t vl)
{
    vloxseg4ei32_v_u8m1_m(v0, v1, v2, v3, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, base, bindex, 17);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*17,\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg4ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 8 } } */

