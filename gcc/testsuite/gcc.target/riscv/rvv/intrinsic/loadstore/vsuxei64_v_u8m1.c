/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxei64_v_u8m1(uint8_t *base,vuint64m8_t bindex,vuint8m1_t value,size_t vl)
{
    vsuxei64_v_u8m1(base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsuxei64_v_u8m1(uint8_t *base,vuint64m8_t bindex,vuint8m1_t value,size_t vl)
{
    vsuxei64_v_u8m1(base, bindex, value, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxei64\.v} 2 } } */
