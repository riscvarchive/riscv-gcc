/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg3ei32_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,const int8_t *base,vuint32mf2_t bindex,size_t vl)
{
    vluxseg3ei32_v_i8mf8(v0, v1, v2, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

void
test1_vluxseg3ei32_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,vint8mf8_t *v2,const int8_t *base,vuint32mf2_t bindex,size_t vl)
{
    vluxseg3ei32_v_i8mf8(v0, v1, v2, base, bindex, 31);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*31,\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg3ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 6 } } */

