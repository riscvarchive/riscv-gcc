/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vlseg6e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,vint8mf4_t maskedoff4,vint8mf4_t maskedoff5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

void
test1_vlseg6e8_v_i8mf4_m(vint8mf4_t *v0,vint8mf4_t *v1,vint8mf4_t *v2,vint8mf4_t *v3,vint8mf4_t *v4,vint8mf4_t *v5,vbool32_t mask,vint8mf4_t maskedoff0,vint8mf4_t maskedoff1,vint8mf4_t maskedoff2,vint8mf4_t maskedoff3,vint8mf4_t maskedoff4,vint8mf4_t maskedoff5,const int8_t *base,size_t vl)
{
    vlseg6e8_v_i8mf4_m(v0, v1, v2, v3, v4, v5, mask, maskedoff0, maskedoff1, maskedoff2, maskedoff3, maskedoff4, maskedoff5, base, 14);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*14,\s*e8,\s*mf4,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vlseg6e8\.v} 2 } } */
/* { dg-final { scan-assembler-times {vse8\.v} 12 } } */

