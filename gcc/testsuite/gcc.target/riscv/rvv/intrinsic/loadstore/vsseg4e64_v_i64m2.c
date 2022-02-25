/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg4e64_v_i64m2(int64_t *base,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsseg4e64_v_i64m2(base, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e64,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vsseg4e64_v_i64m2(int64_t *base,vint64m2_t v0,vint64m2_t v1,vint64m2_t v2,vint64m2_t v3,size_t vl)
{
    vsseg4e64_v_i64m2(base, v0, v1, v2, v3, 0);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e64,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg4e64\.v} 2 } } */
