/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vse64_v_i64m4(int64_t *base,vint64m4_t value,size_t vl)
{
    vse64_v_i64m4(base, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*ta,\s*mu} 1 } } */

void
test1_vse64_v_i64m4(int64_t *base,vint64m4_t value,size_t vl)
{
    vse64_v_i64m4(base, value, 30);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*30,\s*e64,\s*m4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vse64\.v} 2 } } */
