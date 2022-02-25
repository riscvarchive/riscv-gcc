/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg6ei64_v_u32mf2(uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsuxseg6ei64_v_u32mf2(base, bindex, v0, v1, v2, v3, v4, v5, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

void
test1_vsuxseg6ei64_v_u32mf2(uint32_t *base,vuint64m1_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,vuint32mf2_t v4,vuint32mf2_t v5,size_t vl)
{
    vsuxseg6ei64_v_u32mf2(base, bindex, v0, v1, v2, v3, v4, v5, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e32,\s*mf2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg6ei64\.v} 2 } } */
