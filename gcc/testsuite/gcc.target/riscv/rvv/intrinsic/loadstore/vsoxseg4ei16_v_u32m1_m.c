/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg4ei16_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsoxseg4ei16_v_u32m1_m(mask, base, bindex, v0, v1, v2, v3, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

void
test1_vsoxseg4ei16_v_u32m1_m(vbool32_t mask,uint32_t *base,vuint16mf2_t bindex,vuint32m1_t v0,vuint32m1_t v1,vuint32m1_t v2,vuint32m1_t v3,size_t vl)
{
    vsoxseg4ei16_v_u32m1_m(mask, base, bindex, v0, v1, v2, v3, 10);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*10,\s*e32,\s*m1,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg4ei16\.v} 2 } } */
