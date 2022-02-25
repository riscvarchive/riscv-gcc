/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg8ei64_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,const uint8_t *base,vuint64m8_t bindex,size_t vl)
{
    vloxseg8ei64_v_u8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vloxseg8ei64_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,vuint8m1_t *v2,vuint8m1_t *v3,vuint8m1_t *v4,vuint8m1_t *v5,vuint8m1_t *v6,vuint8m1_t *v7,const uint8_t *base,vuint64m8_t bindex,size_t vl)
{
    vloxseg8ei64_v_u8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, bindex, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg8ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 16 } } */

