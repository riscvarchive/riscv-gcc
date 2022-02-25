/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8mf4_t
test0_vle8_v_i8mf4(const int8_t *base,size_t vl)
{
    return vle8_v_i8mf4(base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

vint8mf4_t
test1_vle8_v_i8mf4(const int8_t *base,size_t vl)
{
    return vle8_v_i8mf4(base, 0);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle8\.v} 2 } } */
