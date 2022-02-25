/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg6ei32_v_u8mf4(uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsuxseg6ei32_v_u8mf4(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg6ei32_v_u8mf4(uint8_t *base,vuint32m1_t bindex,vuint8mf4_t v0,vuint8mf4_t v1,vuint8mf4_t v2,vuint8mf4_t v3,vuint8mf4_t v4,vuint8mf4_t v5,size_t vl)
{
    vsuxseg6ei32_v_u8mf4(base, bindex, v0, v1, v2, v3, v4, v5, 27);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*27,\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg6ei32\.v} 2 } } */
