/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint16m8_t
test0_vle16_v_i16m8_tu(vint16m8_t dest,const int16_t *base,size_t vl)
{
    return vle16_v_i16m8_tu(dest, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu} 1 } } */

vint16m8_t
test1_vle16_v_i16m8_tu(vint16m8_t dest,const int16_t *base,size_t vl)
{
    return vle16_v_i16m8_tu(dest, base, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e16,\s*m8,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle16\.v} 2 } } */
