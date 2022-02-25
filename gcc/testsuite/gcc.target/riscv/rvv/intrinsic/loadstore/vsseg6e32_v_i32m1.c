/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg6e32_v_i32m1(int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsseg6e32_v_i32m1(base, v0, v1, v2, v3, v4, v5, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vsseg6e32_v_i32m1(int32_t *base,vint32m1_t v0,vint32m1_t v1,vint32m1_t v2,vint32m1_t v3,vint32m1_t v4,vint32m1_t v5,size_t vl)
{
    vsseg6e32_v_i32m1(base, v0, v1, v2, v3, v4, v5, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e32,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg6e32\.v} 2 } } */
