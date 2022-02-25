/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

vuint16m8_t
test0_vle16ff_v_u16m8_tu(vuint16m8_t dest,const uint16_t *base,size_t *new_vl,size_t vl)
{
    return vle16ff_v_u16m8_tu(dest, base, new_vl, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*m8,\s*tu,\s*mu} 1 } } */

vuint16m8_t
test1_vle16ff_v_u16m8_tu(vuint16m8_t dest,const uint16_t *base,size_t *new_vl,size_t vl)
{
    return vle16ff_v_u16m8_tu(dest, base, new_vl, 12);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*12,\s*e16,\s*m8,\s*tu,\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vle16ff\.v} 2 } } */
