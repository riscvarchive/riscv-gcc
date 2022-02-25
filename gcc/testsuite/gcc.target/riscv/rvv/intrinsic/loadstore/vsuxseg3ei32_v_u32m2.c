/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg3ei32_v_u32m2(uint32_t *base,vuint32m2_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsuxseg3ei32_v_u32m2(base, bindex, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg3ei32_v_u32m2(uint32_t *base,vuint32m2_t bindex,vuint32m2_t v0,vuint32m2_t v1,vuint32m2_t v2,size_t vl)
{
    vsuxseg3ei32_v_u32m2(base, bindex, v0, v1, v2, 24);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*24,\s*e32,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg3ei32\.v} 2 } } */
