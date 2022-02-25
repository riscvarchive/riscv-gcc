/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg3e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8m1(v0, v1, v2, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

void
test1_vlseg3e8_v_i8m1(vint8m1_t *v0,vint8m1_t *v1,vint8m1_t *v2,const int8_t *base,size_t vl)
{
    vlseg3e8_v_i8m1(v0, v1, v2, base, 7);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*7,\s*e8,\s*m1,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg3e8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs1r\.v} 6 } } */

