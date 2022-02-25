/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg2e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf8(v0, v1, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

void
test1_vlseg2e8ff_v_i8mf8(vint8mf8_t *v0,vint8mf8_t *v1,const int8_t *base,size_t *new_vl,size_t vl)
{
    vlseg2e8ff_v_i8mf8(v0, v1, base, new_vl, 0);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*0,\s*e8,\s*mf8,\s*ta,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg2e8ff\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 4 } } */

