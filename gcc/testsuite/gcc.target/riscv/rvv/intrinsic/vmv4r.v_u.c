
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8m4_t 
test_vmv4r_v_u8m4(vuint8m4_t src1, vuint8m4_t src2)
{
  vuint8m4_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv4r_v_u8m4 )?} } } */

vuint16m4_t 
test_vmv4r_v_u16m4(vuint16m4_t src1, vuint16m4_t src2)
{
  vuint16m4_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv4r_v_u16m4 )?} } } */

vuint32m4_t 
test_vmv4r_v_u32m4(vuint32m4_t src1, vuint32m4_t src2)
{
  vuint32m4_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv4r_v_u32m4 )?} } } */

vuint64m4_t 
test_vmv4r_v_u64m4(vuint64m4_t src1, vuint64m4_t src2)
{
  vuint64m4_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])\n(?: test_vmv4r_v_u64m4 )?} } } */
