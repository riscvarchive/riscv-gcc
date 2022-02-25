/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg2ei32_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,const int8_t *base,vuint32mf2_t bindex,size_t vl)
{
    vloxseg2ei32_v_i8mf8_tu(v0, v1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*tu,\s*mu} 1 } } */

void
test1_vloxseg2ei32_v_i8mf8_tu(vint8mf8_t *v0,vint8mf8_t *v1,const int8_t *base,vuint32mf2_t bindex,size_t vl)
{
    vloxseg2ei32_v_i8mf8_tu(v0, v1, base, bindex, 22);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*22,\s*e8,\s*mf8,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg2ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 4 } } */

