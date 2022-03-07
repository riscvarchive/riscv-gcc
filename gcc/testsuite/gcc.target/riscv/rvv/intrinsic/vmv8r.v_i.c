
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vint8m8_t 
test_vmv8r_v_i8m8(vint8m8_t src1, vint8m8_t src2)
{
  vint8m8_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmv8r_v_i8m8 )?} } } */

vint16m8_t 
test_vmv8r_v_i16m8(vint16m8_t src1, vint16m8_t src2)
{
  vint16m8_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmv8r_v_i16m8 )?} } } */

vint32m8_t 
test_vmv8r_v_i32m8(vint32m8_t src1, vint32m8_t src2)
{
  vint32m8_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmv8r_v_i32m8 )?} } } */

vint64m8_t 
test_vmv8r_v_i64m8(vint64m8_t src1, vint64m8_t src2)
{
  vint64m8_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmv8r_v_i64m8 )?} } } */
