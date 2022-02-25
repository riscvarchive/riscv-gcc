/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg3e64_v_i64m2_tu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,const int64_t *base,size_t vl)
{
    vlseg3e64_v_i64m2_tu(v0, v1, v2, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu} 1 } } */

void
test1_vlseg3e64_v_i64m2_tu(vint64m2_t *v0,vint64m2_t *v1,vint64m2_t *v2,const int64_t *base,size_t vl)
{
    vlseg3e64_v_i64m2_tu(v0, v1, v2, base, 18);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*18,\s*e64,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg3e64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 6 } } */

