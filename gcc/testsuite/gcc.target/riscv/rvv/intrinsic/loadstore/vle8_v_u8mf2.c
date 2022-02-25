/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8mf2_t
test0_vle8_v_u8mf2(const uint8_t *base,size_t vl)
{
    return vle8_v_u8mf2(base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

vuint8mf2_t
test1_vle8_v_u8mf2(const uint8_t *base,size_t vl)
{
    return vle8_v_u8mf2(base, 15);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*15,\s*e8,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle8\.v} 2 } } */
