/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg3ei16_v_i8m2(int8_t *base,vuint16m4_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vsoxseg3ei16_v_i8m2(base, bindex, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vsoxseg3ei16_v_i8m2(int8_t *base,vuint16m4_t bindex,vint8m2_t v0,vint8m2_t v1,vint8m2_t v2,size_t vl)
{
    vsoxseg3ei16_v_i8m2(base, bindex, v0, v1, v2, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e8,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg3ei16\.v} 2 } } */
