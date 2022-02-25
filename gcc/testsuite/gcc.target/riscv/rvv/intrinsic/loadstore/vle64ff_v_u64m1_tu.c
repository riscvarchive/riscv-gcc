/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint64m1_t
test0_vle64ff_v_u64m1_tu(vuint64m1_t dest,const uint64_t *base,size_t *new_vl,size_t vl)
{
    return vle64ff_v_u64m1_tu(dest, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m1,\s*tu,\s*mu} 1 } } */

vuint64m1_t
test1_vle64ff_v_u64m1_tu(vuint64m1_t dest,const uint64_t *base,size_t *new_vl,size_t vl)
{
    return vle64ff_v_u64m1_tu(dest, base, new_vl, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e64,\s*m1,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle64ff\.v} 2 } } */
