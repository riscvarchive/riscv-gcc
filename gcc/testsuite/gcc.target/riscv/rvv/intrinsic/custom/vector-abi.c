/* { dg-do compile } */
/* { dg-additional-options "-O3" } */

#include <stddef.h>
#include <riscv_vector.h>

void
test (
  vint8mf2_t a, vint8m4_t c, vint8m4_t d,vint8m2_t e, vint8m2_t b,  
  vint8m1_t f,vint8m1_t f2, vint8m1_t f3, vint8m1_t f4,  vint8m2_t g,  vint8m2_t h,  
  vbool16_t m1, vbool4_t m2, 
  int8_t *a1, int8_t *b1, int8_t *c1,
  size_t vl)
{
  /* f4 => a0, g => a1, h => a2, m2 => a3, 
     a1 => a4, b1 => a5, c1 => a6, vl => a7

     m1 => v0
     a => v8, c => v12, d => v16, e => v10, 
     b => v20, f => v9, f2 => v22, f3 => v23 */

  vse8_v_i8mf2_m(m1, a1, a, vl);

  vse8_v_i8m2_m(m2, b1, b, vl);

  vse8_v_i8m4(c1, c, vl);
  vse8_v_i8m4(c1, d, vl);

  vse8_v_i8m2(c1, e, vl);

  vse8_v_i8m1(c1, f, vl);
  vse8_v_i8m1(c1, f2, vl);
  vse8_v_i8m1(c1, f3, vl);
  vse8_v_i8m1(c1, f4, vl);

  vse8_v_i8m2(c1, g, vl);
  vse8_v_i8m2(c1, h, vl);
}
/* { dg-final { scan-assembler-times {vse8.v\s+v8,\s*\(a4\),\s*v0.t} 1 } } */
/* { dg-final { scan-assembler-times {vse8.v\s+v20,\s*\(a5\),\s*v0.t} 1 } } */
/* { dg-final { scan-assembler-times {vse8.v\s+v12,\s*\(a6\)} 1 } } */
/* { dg-final { scan-assembler-times {vse8.v\s+v16,\s*\(a6\)} 1 } } */
/* { dg-final { scan-assembler-times {vse8.v\s+v10,\s*\(a6\)} 1 } } */
/* { dg-final { scan-assembler-times {vse8.v\s+v9,\s*\(a6\)} 1 } } */
/* { dg-final { scan-assembler-times {vse8.v\s+v22,\s*\(a6\)} 1 } } */
/* { dg-final { scan-assembler-times {vse8.v\s+v23,\s*\(a6\)} 1 } } */
