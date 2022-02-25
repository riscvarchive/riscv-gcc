/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg6ei16_v_i8m1(int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vsoxseg6ei16_v_i8m1(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsoxseg6ei16_v_i8m1(int8_t *base,vuint16m2_t bindex,vint8m1_t v0,vint8m1_t v1,vint8m1_t v2,vint8m1_t v3,vint8m1_t v4,vint8m1_t v5,size_t vl)
{
    vsoxseg6ei16_v_i8m1(base, bindex, v0, v1, v2, v3, v4, v5, 13);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*13,\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg6ei16\.v} 2 } } */
