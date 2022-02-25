/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg8e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlseg8e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,vint8m1_t *v3,vint8m1_t *v4,vint8m1_t *v5,vint8m1_t *v6,vint8m1_t *v7,const int8_t *base,size_t vl)
{
    vlseg8e8_v_i8m1(v0, v1, v2, v3, v4, v5, v6, v7, base, 0);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg8e8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 16 } } */

