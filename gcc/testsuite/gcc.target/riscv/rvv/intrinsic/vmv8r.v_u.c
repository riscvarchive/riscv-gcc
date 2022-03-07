
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8m8_t 
test_vmv8r_v_u8m8(vuint8m8_t src1, vuint8m8_t src2)
{
  vuint8m8_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmv8r_v_u8m8 )?} } } */

vuint16m8_t 
test_vmv8r_v_u16m8(vuint16m8_t src1, vuint16m8_t src2)
{
  vuint16m8_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmv8r_v_u16m8 )?} } } */

vuint32m8_t 
test_vmv8r_v_u32m8(vuint32m8_t src1, vuint32m8_t src2)
{
  vuint32m8_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmv8r_v_u32m8 )?} } } */

vuint64m8_t 
test_vmv8r_v_u64m8(vuint64m8_t src1, vuint64m8_t src2)
{
  vuint64m8_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv8r\.v\s+(?:v[08]|v16|v24),\s*(?:v[08]|v16|v24)\n(?: test_vmv8r_v_u64m8 )?} } } */
