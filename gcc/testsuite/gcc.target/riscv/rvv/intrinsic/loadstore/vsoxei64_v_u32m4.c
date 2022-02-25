/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei64_v_u32m4(uint32_t *base,vuint64m8_t bindex,vuint32m4_t value,size_t vl)
{
    vsoxei64_v_u32m4(base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m4,\s*ta,\s*mu} 1 } } */

void
test1_vsoxei64_v_u32m4(uint32_t *base,vuint64m8_t bindex,vuint32m4_t value,size_t vl)
{
    vsoxei64_v_u32m4(base, bindex, value, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e32,\s*m4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei64\.v} 2 } } */
