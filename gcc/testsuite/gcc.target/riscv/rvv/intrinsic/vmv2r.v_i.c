
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8m2_t 
test_vmv2r_v_i8m2(vint8m2_t src1, vint8m2_t src2)
{
  vint8m2_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv2r_v_i8m2 )?} } } */

vint16m2_t 
test_vmv2r_v_i16m2(vint16m2_t src1, vint16m2_t src2)
{
  vint16m2_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv2r_v_i16m2 )?} } } */

vint32m2_t 
test_vmv2r_v_i32m2(vint32m2_t src1, vint32m2_t src2)
{
  vint32m2_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv2r_v_i32m2 )?} } } */

vint64m2_t 
test_vmv2r_v_i64m2(vint64m2_t src1, vint64m2_t src2)
{
  vint64m2_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv2r_v_i64m2 )?} } } */
