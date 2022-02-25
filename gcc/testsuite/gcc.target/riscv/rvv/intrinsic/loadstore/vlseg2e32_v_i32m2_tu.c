/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg2e32_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m2_tu(v0, v1, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*tu,\s*mu} 1 } } */

void
test1_vlseg2e32_v_i32m2_tu(vint32m2_t *v0,vint32m2_t *v1,const int32_t *base,size_t vl)
{
    vlseg2e32_v_i32m2_tu(v0, v1, base, 1);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*1,\s*e32,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg2e32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 4 } } */

