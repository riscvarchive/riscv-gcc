/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxei64_v_i16mf2(int16_t *base,vuint64m2_t bindex,vint16mf2_t value,size_t vl)
{
    vsoxei64_v_i16mf2(base, bindex, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vsoxei64_v_i16mf2(int16_t *base,vuint64m2_t bindex,vint16mf2_t value,size_t vl)
{
    vsoxei64_v_i16mf2(base, bindex, value, 1);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*1,\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxei64\.v} 2 } } */
