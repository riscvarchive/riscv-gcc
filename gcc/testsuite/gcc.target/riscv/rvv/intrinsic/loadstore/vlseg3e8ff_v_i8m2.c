/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg3e8ff_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8m2(v0, v1, v2, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*m2,\s*ta,\s*mu} 1 } } */

void
test1_vlseg3e8ff_v_i8m2(vint8m2_t *v0,vint8m2_t *v1,vint8m2_t *v2,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg3e8ff_v_i8m2(v0, v1, v2, base, new_vl, 25);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*25,\s*e8,\s*m2,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg3e8ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vs2r\.v} 6 } } */

