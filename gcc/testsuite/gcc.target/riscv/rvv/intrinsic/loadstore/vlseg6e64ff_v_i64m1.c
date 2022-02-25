/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg6e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_i64m1(v0, v1, v2, v3, v4, v5, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlseg6e64ff_v_i64m1(vint64m1_t *v0,vint64m1_t *v1,vint64m1_t *v2,vint64m1_t *v3,vint64m1_t *v4,vint64m1_t *v5,const int64_t *base,size_t *new_vl,size_t vl)
{
    vlseg6e64ff_v_i64m1(v0, v1, v2, v3, v4, v5, base, new_vl, 20);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*20,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg6e64ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 12 } } */

