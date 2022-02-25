/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vse8_v_i8mf2(int8_t *base,vint8mf2_t value,size_t vl)
{
    vse8_v_i8mf2(base, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vse8_v_i8mf2(int8_t *base,vint8mf2_t value,size_t vl)
{
    vse8_v_i8mf2(base, value, 21);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*21,\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vse8\.v} 2 } } */
