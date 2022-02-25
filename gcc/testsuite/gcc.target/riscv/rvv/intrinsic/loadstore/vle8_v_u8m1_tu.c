/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint8m1_t
test0_vle8_v_u8m1_tu(vuint8m1_t dest,const uint8_t *base,size_t vl)
{
    return vle8_v_u8m1_tu(dest, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*tu,\s*mu} 1 } } */

vuint8m1_t
test1_vle8_v_u8m1_tu(vuint8m1_t dest,const uint8_t *base,size_t vl)
{
    return vle8_v_u8m1_tu(dest, base, 13);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*13,\s*e8,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle8\.v} 2 } } */
