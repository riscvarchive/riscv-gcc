/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint16m1_t
test0_vle16ff_v_i16m1(const int16_t *base,size_t *new_vl,size_t vl)
{
    return vle16ff_v_i16m1(base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

vint16m1_t
test1_vle16ff_v_i16m1(const int16_t *base,size_t *new_vl,size_t vl)
{
    return vle16ff_v_i16m1(base, new_vl, 0);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle16ff\.v} 2 } } */
