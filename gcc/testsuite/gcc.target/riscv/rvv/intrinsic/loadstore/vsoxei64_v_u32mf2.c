/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei64_v_u32mf2(uint32_t *base,vuint64m1_t bindex,vuint32mf2_t value,size_t vl)
{
    vsoxei64_v_u32mf2(base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vsoxei64_v_u32mf2(uint32_t *base,vuint64m1_t bindex,vuint32mf2_t value,size_t vl)
{
    vsoxei64_v_u32mf2(base, bindex, value, 21);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*21,\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei64\.v} 2 } } */
