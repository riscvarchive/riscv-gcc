/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsuxseg4ei8_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsuxseg4ei8_v_u32mf2_m(mask, base, bindex, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vsuxseg4ei8_v_u32mf2_m(vbool64_t mask,uint32_t *base,vuint8mf8_t bindex,vuint32mf2_t v0,vuint32mf2_t v1,vuint32mf2_t v2,vuint32mf2_t v3,size_t vl)
{
    vsuxseg4ei8_v_u32mf2_m(mask, base, bindex, v0, v1, v2, v3, 11);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*11,\s*e32,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsuxseg4ei8\.v} 2 } } */
