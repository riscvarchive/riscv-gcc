
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vrem_vx_i64m1_tama_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vrem_vx_i64m1_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t(?: test_vrem_vx_i64m1_tama_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vrem_vx_i64m1_tama_vl31 )?} } } */

vint64m2_t 
test_vrem_vx_i64m2_tama_vl31(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vrem_vx_i64m2_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t(?: test_vrem_vx_i64m2_tama_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vrem_vx_i64m2_tama_vl31 )?} } } */

vint64m4_t 
test_vrem_vx_i64m4_tama_vl31(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vrem_vx_i64m4_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t(?: test_vrem_vx_i64m4_tama_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vrem_vx_i64m4_tama_vl31 )?} } } */

vint64m8_t 
test_vrem_vx_i64m8_tama_vl31(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vrem_vx_i64m8_tama(mask, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t(?: test_vrem_vx_i64m8_tama_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[08]|v16|v24),(?: test_vrem_vx_i64m8_tama_vl31 )?} } } */

vint64m1_t 
test_vrem_vx_i64m1_tamu_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vrem_vx_i64m1_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t(?: test_vrem_vx_i64m1_tamu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vrem_vx_i64m1_tamu_vl31 )?} } } */

vint64m2_t 
test_vrem_vx_i64m2_tamu_vl31(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vrem_vx_i64m2_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t(?: test_vrem_vx_i64m2_tamu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vrem_vx_i64m2_tamu_vl31 )?} } } */

vint64m4_t 
test_vrem_vx_i64m4_tamu_vl31(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vrem_vx_i64m4_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t(?: test_vrem_vx_i64m4_tamu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vrem_vx_i64m4_tamu_vl31 )?} } } */

vint64m8_t 
test_vrem_vx_i64m8_tamu_vl31(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vrem_vx_i64m8_tamu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t(?: test_vrem_vx_i64m8_tamu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[08]|v16|v24),(?: test_vrem_vx_i64m8_tamu_vl31 )?} } } */

vint64m1_t 
test_vrem_vx_i64m1_tuma_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vrem_vx_i64m1_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t(?: test_vrem_vx_i64m1_tuma_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vrem_vx_i64m1_tuma_vl31 )?} } } */

vint64m2_t 
test_vrem_vx_i64m2_tuma_vl31(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vrem_vx_i64m2_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t(?: test_vrem_vx_i64m2_tuma_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vrem_vx_i64m2_tuma_vl31 )?} } } */

vint64m4_t 
test_vrem_vx_i64m4_tuma_vl31(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vrem_vx_i64m4_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t(?: test_vrem_vx_i64m4_tuma_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vrem_vx_i64m4_tuma_vl31 )?} } } */

vint64m8_t 
test_vrem_vx_i64m8_tuma_vl31(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vrem_vx_i64m8_tuma(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t(?: test_vrem_vx_i64m8_tuma_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[08]|v16|v24),(?: test_vrem_vx_i64m8_tuma_vl31 )?} } } */

vint64m1_t 
test_vrem_vx_i64m1_tumu_vl31(vbool64_t mask, vint64m1_t maskedoff, vint64m1_t op1, int64_t op2)
{
  return vrem_vx_i64m1_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*v0\.t(?: test_vrem_vx_i64m1_tumu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vrem_vx_i64m1_tumu_vl31 )?} } } */

vint64m2_t 
test_vrem_vx_i64m2_tumu_vl31(vbool32_t mask, vint64m2_t maskedoff, vint64m2_t op1, int64_t op2)
{
  return vrem_vx_i64m2_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*v0\.t(?: test_vrem_vx_i64m2_tumu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vrem_vx_i64m2_tumu_vl31 )?} } } */

vint64m4_t 
test_vrem_vx_i64m4_tumu_vl31(vbool16_t mask, vint64m4_t maskedoff, vint64m4_t op1, int64_t op2)
{
  return vrem_vx_i64m4_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*v0\.t(?: test_vrem_vx_i64m4_tumu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vrem_vx_i64m4_tumu_vl31 )?} } } */

vint64m8_t 
test_vrem_vx_i64m8_tumu_vl31(vbool8_t mask, vint64m8_t maskedoff, vint64m8_t op1, int64_t op2)
{
  return vrem_vx_i64m8_tumu(mask, maskedoff, op1, op2, 31);
}
/* { dg-final { scan-assembler {vrem\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*v0\.t(?: test_vrem_vx_i64m8_tumu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vrem\.vx\s+(?:v[08]|v16|v24),(?: test_vrem_vx_i64m8_tumu_vl31 )?} } } */
