/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint16m1_t
test0_vle16_v_i16m1_tu(vint16m1_t dest,const int16_t *base,size_t vl)
{
    return vle16_v_i16m1_tu(dest, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

vint16m1_t
test1_vle16_v_i16m1_tu(vint16m1_t dest,const int16_t *base,size_t vl)
{
    return vle16_v_i16m1_tu(dest, base, 26);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*26,\s*e16,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle16\.v} 2 } } */
