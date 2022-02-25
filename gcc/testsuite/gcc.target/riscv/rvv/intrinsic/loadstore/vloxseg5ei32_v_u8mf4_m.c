/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg5ei32_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,vuint8mf4_t maskedoff4,const uint8_t *base,vuint32m1_t bindex,size_t vl)
{
    vloxseg5ei32_v_u8mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg5ei32_v_u8mf4_m(vuint8mf4_t *v0,vuint8mf4_t *v1,vuint8mf4_t *v2,vuint8mf4_t *v3,vuint8mf4_t *v4,vbool32_t mask,vuint8mf4_t maskedoff0,vuint8mf4_t maskedoff1,vuint8mf4_t maskedoff2,vuint8mf4_t maskedoff3,vuint8mf4_t maskedoff4,const uint8_t *base,vuint32m1_t bindex,size_t vl)
{
    vloxseg5ei32_v_u8mf4_m(v0, v1, v2, v3, v4, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, base, bindex, 26);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*26,\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg5ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 10 } } */

