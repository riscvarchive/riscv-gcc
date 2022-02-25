/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vloxseg2ei64_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,const int8_t *base,vuint64m4_t bindex,size_t vl)
{
    vloxseg2ei64_v_i8mf2_tu(v0, v1, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*tu,\s*mu} 1 } } */

void
test1_vloxseg2ei64_v_i8mf2_tu(vint8mf2_t *v0,vint8mf2_t *v1,const int8_t *base,vuint64m4_t bindex,size_t vl)
{
    vloxseg2ei64_v_i8mf2_tu(v0, v1, base, bindex, 29);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*29,\s*e8,\s*mf2,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vloxseg2ei64\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 4 } } */

