/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8mf8_t
test0_vle8_v_i8mf8_m(vbool64_t mask,vint8mf8_t maskedoff,const int8_t *base,size_t vl)
{
    return vle8_v_i8mf8_m(mask, maskedoff, base, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

vint8mf8_t
test1_vle8_v_i8mf8_m(vbool64_t mask,vint8mf8_t maskedoff,const int8_t *base,size_t vl)
{
    return vle8_v_i8mf8_m(mask, maskedoff, base, 1);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*1,\s*e8,\s*mf8,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle8\.v} 2 } } */
