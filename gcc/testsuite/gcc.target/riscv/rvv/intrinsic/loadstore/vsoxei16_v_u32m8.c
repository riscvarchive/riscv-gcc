/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei16_v_u32m8(uint32_t *base,vuint16m4_t bindex,vuint32m8_t value,size_t vl)
{
    vsoxei16_v_u32m8(base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m8,\s*ta,\s*mu} 1 } } */

void
test1_vsoxei16_v_u32m8(uint32_t *base,vuint16m4_t bindex,vuint32m8_t value,size_t vl)
{
    vsoxei16_v_u32m8(base, bindex, value, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e32,\s*m8,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei16\.v} 2 } } */
