/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg3ei32_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,const uint8_t *base,vuint32m4_t bindex,size_t vl)
{
    vloxseg3ei32_v_u8m1_tu(v0, v1, v2, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu} 1 } } */

void
test1_vloxseg3ei32_v_u8m1_tu(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,const uint8_t *base,vuint32m4_t bindex,size_t vl)
{
    vloxseg3ei32_v_u8m1_tu(v0, v1, v2, base, bindex, 11);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*11,\s*e8,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg3ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 6 } } */

