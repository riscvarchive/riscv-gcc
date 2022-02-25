/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint16m1_t
test0_vle16_v_u16m1(const uint16_t *base,size_t vl)
{
    return vle16_v_u16m1(base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

vuint16m1_t
test1_vle16_v_u16m1(const uint16_t *base,size_t vl)
{
    return vle16_v_u16m1(base, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle16\.v} 2 } } */
