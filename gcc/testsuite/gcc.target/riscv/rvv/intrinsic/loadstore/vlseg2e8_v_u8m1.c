/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg2e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m1(v0, v1, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlseg2e8_v_u8m1(vuint8m1_t *v0,vuint8m1_t *v1,const uint8_t *base,size_t vl)
{
    vlseg2e8_v_u8m1(v0, v1, base, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg2e8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 4 } } */

