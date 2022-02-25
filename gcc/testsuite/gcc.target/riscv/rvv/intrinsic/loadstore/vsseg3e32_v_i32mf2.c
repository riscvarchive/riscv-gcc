/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsseg3e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsseg3e32_v_i32mf2(base, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vsseg3e32_v_i32mf2(int32_t *base,vint32mf2_t v0,vint32mf2_t v1,vint32mf2_t v2,size_t vl)
{
    vsseg3e32_v_i32mf2(base, v0, v1, v2, 28);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*28,\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsseg3e32\.v} 2 } } */
