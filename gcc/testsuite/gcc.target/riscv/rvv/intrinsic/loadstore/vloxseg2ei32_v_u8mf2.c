/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg2ei32_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,const uint8_t *base,vuint32m2_t bindex,size_t vl)
{
    vloxseg2ei32_v_u8mf2(v0, v1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vloxseg2ei32_v_u8mf2(vuint8mf2_t *v0,vuint8mf2_t *v1,const uint8_t *base,vuint32m2_t bindex,size_t vl)
{
    vloxseg2ei32_v_u8mf2(v0, v1, base, bindex, 18);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*18,\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg2ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 4 } } */

