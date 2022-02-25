/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vsoxseg3ei32_v_u16mf4(uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsoxseg3ei32_v_u16mf4(base, bindex, v0, v1, v2, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vsoxseg3ei32_v_u16mf4(uint16_t *base,vuint32mf2_t bindex,vuint16mf4_t v0,vuint16mf4_t v1,vuint16mf4_t v2,size_t vl)
{
    vsoxseg3ei32_v_u16mf4(base, bindex, v0, v1, v2, 4);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*4,\s*e16,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vsoxseg3ei32\.v} 2 } } */
