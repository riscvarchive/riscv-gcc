/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg8ei64_v_i8mf8(int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsuxseg8ei64_v_i8mf8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg8ei64_v_i8mf8(int8_t *base,vuint64m1_t bindex,vint8mf8_t v0,vint8mf8_t v1,vint8mf8_t v2,vint8mf8_t v3,vint8mf8_t v4,vint8mf8_t v5,vint8mf8_t v6,vint8mf8_t v7,size_t vl)
{
    vsuxseg8ei64_v_i8mf8(base, bindex, v0, v1, v2, v3, v4, v5, v6, v7, 27);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*27,\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg8ei64\.v} 2 } } */
