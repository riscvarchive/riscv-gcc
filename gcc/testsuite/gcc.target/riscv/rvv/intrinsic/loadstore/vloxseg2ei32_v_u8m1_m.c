/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg2ei32_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,const uint8_t *base,vuint32m4_t bindex,size_t vl)
{
    vloxseg2ei32_v_u8m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg2ei32_v_u8m1_m(vuint8m1_t *v0,vuint8m1_t *v1,vbool8_t mask,vuint8m1_t maskedoff0,vuint8m1_t maskedoff1,const uint8_t *base,vuint32m4_t bindex,size_t vl)
{
    vloxseg2ei32_v_u8m1_m(v0, v1, mask, maskedoff0, maskedoff1, base, bindex, 18);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*18,\s*e8,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg2ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 4 } } */

