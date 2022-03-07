
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8m4_t 
test_vmv4r_v_i8m4(vint8m4_t src1, vint8m4_t src2)
{
  vint8m4_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv4r_v_i8m4 )?} } } */

vint16m4_t 
test_vmv4r_v_i16m4(vint16m4_t src1, vint16m4_t src2)
{
  vint16m4_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv4r_v_i16m4 )?} } } */

vint32m4_t 
test_vmv4r_v_i32m4(vint32m4_t src1, vint32m4_t src2)
{
  vint32m4_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv4r_v_i32m4 )?} } } */

vint64m4_t 
test_vmv4r_v_i64m4(vint64m4_t src1, vint64m4_t src2)
{
  vint64m4_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv4r_v_i64m4 )?} } } */
