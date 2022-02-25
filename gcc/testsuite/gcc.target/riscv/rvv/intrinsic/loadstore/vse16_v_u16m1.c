/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vse16_v_u16m1(uint16_t *base,vuint16m1_t value,size_t vl)
{
    vse16_v_u16m1(base, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vse16_v_u16m1(uint16_t *base,vuint16m1_t value,size_t vl)
{
    vse16_v_u16m1(base, value, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vse16\.v} 2 } } */
