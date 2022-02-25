/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxei32_v_i16m2(int16_t *base,vuint32m4_t bindex,vint16m2_t value,size_t vl)
{
    vsuxei32_v_i16m2(base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vsuxei32_v_i16m2(int16_t *base,vuint32m4_t bindex,vint16m2_t value,size_t vl)
{
    vsuxei32_v_i16m2(base, bindex, value, 5);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*5,\s*e16,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxei32\.v} 2 } } */
