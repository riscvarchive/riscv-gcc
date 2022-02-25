/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg2e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m1(v0, v1, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlseg2e16_v_u16m1(vuint16m1_t *v0,vuint16m1_t *v1,const uint16_t *base,size_t vl)
{
    vlseg2e16_v_u16m1(v0, v1, base, 1);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*1,\s*e16,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg2e16\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 4 } } */

