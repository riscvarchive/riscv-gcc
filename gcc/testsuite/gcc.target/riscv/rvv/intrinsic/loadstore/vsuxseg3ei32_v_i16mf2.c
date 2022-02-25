/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg3ei32_v_i16mf2(int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsuxseg3ei32_v_i16mf2(base, bindex, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg3ei32_v_i16mf2(int16_t *base,vuint32m1_t bindex,vint16mf2_t v0,vint16mf2_t v1,vint16mf2_t v2,size_t vl)
{
    vsuxseg3ei32_v_i16mf2(base, bindex, v0, v1, v2, 10);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*10,\s*e16,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg3ei32\.v} 2 } } */
