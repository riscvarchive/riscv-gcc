/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vse64_v_u64m4_m(vbool16_t mask,uint64_t *base,vuint64m4_t value,size_t vl)
{
    vse64_v_u64m4_m(mask, base, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

void
test1_vse64_v_u64m4_m(vbool16_t mask,uint64_t *base,vuint64m4_t value,size_t vl)
{
    vse64_v_u64m4_m(mask, base, value, 24);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*24,\s*e64,\s*m4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vse64\.v} 2 } } */
