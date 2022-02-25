/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg3ei8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,const int8_t *base,vuint8mf4_t bindex,size_t vl)
{
    vloxseg3ei8_v_i8mf4_tu(v0, v1, v2, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*tu,\s*mu} 1 } } */

void
test1_vloxseg3ei8_v_i8mf4_tu(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,const int8_t *base,vuint8mf4_t bindex,size_t vl)
{
    vloxseg3ei8_v_i8mf4_tu(v0, v1, v2, base, bindex, 4);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*4,\s*e8,\s*mf4,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg3ei8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 6 } } */

