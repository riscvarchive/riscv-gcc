/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8m8_t
test0_vle8_v_i8m8_tu(vint8m8_t dest,const int8_t *base,size_t vl)
{
    return vle8_v_i8m8_tu(dest, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m8,\s*tu,\s*mu} 1 } } */

vint8m8_t
test1_vle8_v_i8m8_tu(vint8m8_t dest,const int8_t *base,size_t vl)
{
    return vle8_v_i8m8_tu(dest, base, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e8,\s*m8,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle8\.v} 2 } } */
