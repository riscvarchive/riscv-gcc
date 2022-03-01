
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8m2_t 
test_vmv2r_v_u8m2(vuint8m2_t src1, vuint8m2_t src2)
{
  vuint8m2_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv2r_v_u8m2 )?} } } */

vuint16m2_t 
test_vmv2r_v_u16m2(vuint16m2_t src1, vuint16m2_t src2)
{
  vuint16m2_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv2r_v_u16m2 )?} } } */

vuint32m2_t 
test_vmv2r_v_u32m2(vuint32m2_t src1, vuint32m2_t src2)
{
  vuint32m2_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv2r_v_u32m2 )?} } } */

vuint64m2_t 
test_vmv2r_v_u64m2(vuint64m2_t src1, vuint64m2_t src2)
{
  vuint64m2_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)\n(?: test_vmv2r_v_u64m2 )?} } } */
