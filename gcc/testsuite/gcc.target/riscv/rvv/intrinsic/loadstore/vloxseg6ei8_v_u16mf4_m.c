/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg6ei8_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,vuint16mf4_t maskedoff5,const uint16_t *base,vuint8mf8_t bindex,size_t vl)
{
    vloxseg6ei8_v_u16mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vloxseg6ei8_v_u16mf4_m(vuint16mf4_t *v0,vuint16mf4_t *v1,vuint16mf4_t *v2,vuint16mf4_t *v3,vuint16mf4_t *v4,vuint16mf4_t *v5,vbool64_t mask,vuint16mf4_t maskedoff0,vuint16mf4_t maskedoff1,vuint16mf4_t maskedoff2,vuint16mf4_t maskedoff3,vuint16mf4_t maskedoff4,vuint16mf4_t maskedoff5,const uint16_t *base,vuint8mf8_t bindex,size_t vl)
{
    vloxseg6ei8_v_u16mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, bindex, 24);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*24,\s*e16,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg6ei8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse16\.v} 12 } } */

