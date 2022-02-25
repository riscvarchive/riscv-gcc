/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg4e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,const int64_t *base,size_t vl)
{
    vlseg4e64_v_i64m1_tu(v0, v1, v2, v3, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu} 1 } } */

void
test1_vlseg4e64_v_i64m1_tu(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,const int64_t *base,size_t vl)
{
    vlseg4e64_v_i64m1_tu(v0, v1, v2, v3, base, 10);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*10,\s*e64,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg4e64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 8 } } */

