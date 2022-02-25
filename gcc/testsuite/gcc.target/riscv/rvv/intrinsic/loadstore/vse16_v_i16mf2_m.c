/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
#include <stddef.h>
#include <riscv_vector.h>

void
test0_vse16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t value,size_t vl)
{
    vse16_v_i16mf2_m(mask, base, value, vl);
}

/* { dg-final { scan-assembler-times {vsetvli\s+zero,\s*(?:ra|[sgtf]p|t[0-6]|s[0-9]|s10|s11|a[0-7]),\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

void
test1_vse16_v_i16mf2_m(vbool32_t mask,int16_t *base,vint16mf2_t value,size_t vl)
{
    vse16_v_i16mf2_m(mask, base, value, 23);
}

/* { dg-final { scan-assembler-times {vsetivli\s+zero,\s*23,\s*e16,\s*mf2,\s*t[au],\s*mu} 1 } } */

/* { dg-final { scan-assembler-times {vse16\.v} 2 } } */
