
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vmax_vx_i64m1_tama(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m1_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t(?: test_vmax_vx_i64m1_tama )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmax_vx_i64m1_tama )?} } } */

vint64m2_t 
test_vmax_vx_i64m2_tama(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m2_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t(?: test_vmax_vx_i64m2_tama )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vmax_vx_i64m2_tama )?} } } */

vint64m4_t 
test_vmax_vx_i64m4_tama(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m4_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t(?: test_vmax_vx_i64m4_tama )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vmax_vx_i64m4_tama )?} } } */

vint64m8_t 
test_vmax_vx_i64m8_tama(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m8_tama(mask, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t(?: test_vmax_vx_i64m8_tama )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[08]|v16|v24),(?: test_vmax_vx_i64m8_tama )?} } } */

vint64m1_t 
test_vmax_vx_i64m1_tamu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m1_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t(?: test_vmax_vx_i64m1_tamu )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmax_vx_i64m1_tamu )?} } } */

vint64m2_t 
test_vmax_vx_i64m2_tamu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m2_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t(?: test_vmax_vx_i64m2_tamu )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vmax_vx_i64m2_tamu )?} } } */

vint64m4_t 
test_vmax_vx_i64m4_tamu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m4_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t(?: test_vmax_vx_i64m4_tamu )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vmax_vx_i64m4_tamu )?} } } */

vint64m8_t 
test_vmax_vx_i64m8_tamu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m8_tamu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t(?: test_vmax_vx_i64m8_tamu )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[08]|v16|v24),(?: test_vmax_vx_i64m8_tamu )?} } } */

vint64m1_t 
test_vmax_vx_i64m1_tuma(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m1_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t(?: test_vmax_vx_i64m1_tuma )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmax_vx_i64m1_tuma )?} } } */

vint64m2_t 
test_vmax_vx_i64m2_tuma(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m2_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t(?: test_vmax_vx_i64m2_tuma )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vmax_vx_i64m2_tuma )?} } } */

vint64m4_t 
test_vmax_vx_i64m4_tuma(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m4_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t(?: test_vmax_vx_i64m4_tuma )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vmax_vx_i64m4_tuma )?} } } */

vint64m8_t 
test_vmax_vx_i64m8_tuma(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m8_tuma(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t(?: test_vmax_vx_i64m8_tuma )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[08]|v16|v24),(?: test_vmax_vx_i64m8_tuma )?} } } */

vint64m1_t 
test_vmax_vx_i64m1_tumu(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m1_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t(?: test_vmax_vx_i64m1_tumu )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmax_vx_i64m1_tumu )?} } } */

vint64m2_t 
test_vmax_vx_i64m2_tumu(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m2_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t(?: test_vmax_vx_i64m2_tumu )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vmax_vx_i64m2_tumu )?} } } */

vint64m4_t 
test_vmax_vx_i64m4_tumu(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m4_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t(?: test_vmax_vx_i64m4_tumu )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vmax_vx_i64m4_tumu )?} } } */

vint64m8_t 
test_vmax_vx_i64m8_tumu(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2, size_t vl)
{
  return vmax_vx_i64m8_tumu(mask, maskedoff, op1, op2, vl);
}
/* { dg-final { scan-assembler {vmax\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t(?: test_vmax_vx_i64m8_tumu )?} } } */
/* { dg-final { scan-assembler-not {vmax\.vx\s+(?:v[08]|v16|v24),(?: test_vmax_vx_i64m8_tumu )?} } } */
