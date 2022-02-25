/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg7ei32_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,const uint8_t *base,vuint32mf2_t bindex,size_t vl)
{
    vloxseg7ei32_v_u8mf8(v0, v1, v2, v3, v4, v5, v6, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

void
test1_vloxseg7ei32_v_u8mf8(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,vuint8mf8_t *v5,vuint8mf8_t *v6,const uint8_t *base,vuint32mf2_t bindex,size_t vl)
{
    vloxseg7ei32_v_u8mf8(v0, v1, v2, v3, v4, v5, v6, base, bindex, 24);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*24,\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg7ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 14 } } */

