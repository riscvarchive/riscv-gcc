/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vint8mf2_t
test0_vle8ff_v_i8mf2_m(vbool16_t mask,vint8mf2_t maskedoff,const int8_t *base,size_t *new_vl,size_t vl)
{
    return vle8ff_v_i8mf2_m(mask, maskedoff, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

vint8mf2_t
test1_vle8ff_v_i8mf2_m(vbool16_t mask,vint8mf2_t maskedoff,const int8_t *base,size_t *new_vl,size_t vl)
{
    return vle8ff_v_i8mf2_m(mask, maskedoff, base, new_vl, 27);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*27,\s*e8,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle8ff\.v} 2 } } */
