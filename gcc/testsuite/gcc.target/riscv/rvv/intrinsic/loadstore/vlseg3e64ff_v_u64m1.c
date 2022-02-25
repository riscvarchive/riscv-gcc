/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg3e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_u64m1(v0, v1, v2, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlseg3e64ff_v_u64m1(vuint64m1_t *v0,vuint64m1_t *v1,vuint64m1_t *v2,const uint64_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e64ff_v_u64m1(v0, v1, v2, base, new_vl, 14);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*14,\s*e64,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg3e64ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 6 } } */

