/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg4e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf4(v0, v1, v2, v3, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

void
test1_vlseg4e8ff_v_i8mf4(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg4e8ff_v_i8mf4(v0, v1, v2, v3, base, new_vl, 9);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*9,\s*e8,\s*mf4,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg4e8ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 8 } } */

