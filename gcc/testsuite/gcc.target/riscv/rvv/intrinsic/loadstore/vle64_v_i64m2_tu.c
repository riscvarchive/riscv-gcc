/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint64m2_t
test0_vle64_v_i64m2_tu(vint64m2_t dest,const int64_t *base,size_t vl)
{
    return vle64_v_i64m2_tu(dest, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*tu,\s*mu} 1 } } */

vint64m2_t
test1_vle64_v_i64m2_tu(vint64m2_t dest,const int64_t *base,size_t vl)
{
    return vle64_v_i64m2_tu(dest, base, 3);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*3,\s*e64,\s*m2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle64\.v} 2 } } */
