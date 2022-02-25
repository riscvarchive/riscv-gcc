
/* { dg-do compile } */
/* { dg-additional-options "-std=c99 -pedantic-errors" } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv32*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint64m1_t 
test_vmadd_vx_i64m1_ta_vl31(vint64m1_t dest, int64_t op1, vint64m1_t op2)
{
  return vmadd_vx_i64m1_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler {vmadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])(?: test_vmadd_vx_i64m1_ta_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vmadd\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmadd_vx_i64m1_ta_vl31 )?} } } */

vint64m2_t 
test_vmadd_vx_i64m2_ta_vl31(vint64m2_t dest, int64_t op1, vint64m2_t op2)
{
  return vmadd_vx_i64m2_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler {vmadd\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)(?: test_vmadd_vx_i64m2_ta_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vmadd\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vmadd_vx_i64m2_ta_vl31 )?} } } */

vint64m4_t 
test_vmadd_vx_i64m4_ta_vl31(vint64m4_t dest, int64_t op1, vint64m4_t op2)
{
  return vmadd_vx_i64m4_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler {vmadd\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])(?: test_vmadd_vx_i64m4_ta_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vmadd\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vmadd_vx_i64m4_ta_vl31 )?} } } */

vint64m8_t 
test_vmadd_vx_i64m8_ta_vl31(vint64m8_t dest, int64_t op1, vint64m8_t op2)
{
  return vmadd_vx_i64m8_ta(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler {vmadd\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)(?: test_vmadd_vx_i64m8_ta_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vmadd\.vx\s+(?:v[08]|v16|v24),(?: test_vmadd_vx_i64m8_ta_vl31 )?} } } */

vint64m1_t 
test_vmadd_vx_i64m1_tu_vl31(vint64m1_t dest, int64_t op1, vint64m1_t op2)
{
  return vmadd_vx_i64m1_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler {vmadd\.vv\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])(?: test_vmadd_vx_i64m1_tu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vmadd\.vx\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),(?: test_vmadd_vx_i64m1_tu_vl31 )?} } } */

vint64m2_t 
test_vmadd_vx_i64m2_tu_vl31(vint64m2_t dest, int64_t op1, vint64m2_t op2)
{
  return vmadd_vx_i64m2_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler {vmadd\.vv\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)(?: test_vmadd_vx_i64m2_tu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vmadd\.vx\s+(?:v[02468]|v[1-2][02468]|v30),(?: test_vmadd_vx_i64m2_tu_vl31 )?} } } */

vint64m4_t 
test_vmadd_vx_i64m4_tu_vl31(vint64m4_t dest, int64_t op1, vint64m4_t op2)
{
  return vmadd_vx_i64m4_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler {vmadd\.vv\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])(?: test_vmadd_vx_i64m4_tu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vmadd\.vx\s+(?:v[048]|v1[26]|v2[048]),(?: test_vmadd_vx_i64m4_tu_vl31 )?} } } */

vint64m8_t 
test_vmadd_vx_i64m8_tu_vl31(vint64m8_t dest, int64_t op1, vint64m8_t op2)
{
  return vmadd_vx_i64m8_tu(dest, op1, op2, 31);
}
/* { dg-final { scan-assembler {vmadd\.vv\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)(?: test_vmadd_vx_i64m8_tu_vl31 )?} } } */
/* { dg-final { scan-assembler-not {vmadd\.vx\s+(?:v[08]|v16|v24),(?: test_vmadd_vx_i64m8_tu_vl31 )?} } } */
