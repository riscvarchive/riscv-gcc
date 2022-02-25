/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg2e8_v_i8m2_tu(vint8m2_t *v0,vint8m2_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m2_tu(v0, v1, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*tu,\s*mu} 1 } } */

void
test1_vlseg2e8_v_i8m2_tu(vint8m2_t *v0,vint8m2_t *v1,const int8_t *base,size_t vl)
{
    vlseg2e8_v_i8m2_tu(v0, v1, base, 8);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*8,\s*e8,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg2e8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 4 } } */

