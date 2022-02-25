/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg4ei64_v_u16m2(uint16_t *base,vuint64m8_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsuxseg4ei64_v_u16m2(base, bindex, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg4ei64_v_u16m2(uint16_t *base,vuint64m8_t bindex,vuint16m2_t v0,vuint16m2_t v1,vuint16m2_t v2,vuint16m2_t v3,size_t vl)
{
    vsuxseg4ei64_v_u16m2(base, bindex, v0, v1, v2, v3, 3);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*3,\s*e16,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg4ei64\.v} 2 } } */
