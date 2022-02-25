/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg5ei32_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,const uint8_t *base,vuint32mf2_t bindex,size_t vl)
{
    vluxseg5ei32_v_u8mf8_tu(v0, v1, v2, v3, v4, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu} 1 } } */

void
test1_vluxseg5ei32_v_u8mf8_tu(vuint8mf8_t *v0,vuint8mf8_t *v1,vuint8mf8_t *v2,vuint8mf8_t *v3,vuint8mf8_t *v4,const uint8_t *base,vuint32mf2_t bindex,size_t vl)
{
    vluxseg5ei32_v_u8mf8_tu(v0, v1, v2, v3, v4, base, bindex, 18);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*18,\s*e8,\s*mf8,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg5ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 10 } } */

