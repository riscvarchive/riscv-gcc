
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8m1_t 
test_vmv1r_v_i8m1(vint8m1_t src1, vint8m1_t src2)
{
  vint8m1_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv1r_v_i8m1 )?} } } */

vint16m1_t 
test_vmv1r_v_i16m1(vint16m1_t src1, vint16m1_t src2)
{
  vint16m1_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv1r_v_i16m1 )?} } } */

vint32m1_t 
test_vmv1r_v_i32m1(vint32m1_t src1, vint32m1_t src2)
{
  vint32m1_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv1r_v_i32m1 )?} } } */

vint64m1_t 
test_vmv1r_v_i64m1(vint64m1_t src1, vint64m1_t src2)
{
  vint64m1_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv1r_v_i64m1 )?} } } */
