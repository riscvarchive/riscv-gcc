/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vluxseg6ei32_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,const int8_t *base,vuint32m1_t bindex,size_t vl)
{
    vluxseg6ei32_v_i8mf4(v0, v1, v2, v3, v4, v5, base, bindex, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vluxseg6ei32_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,const int8_t *base,vuint32m1_t bindex,size_t vl)
{
    vluxseg6ei32_v_i8mf4(v0, v1, v2, v3, v4, v5, base, bindex, 16);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*16,\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vluxseg6ei32\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 12 } } */

