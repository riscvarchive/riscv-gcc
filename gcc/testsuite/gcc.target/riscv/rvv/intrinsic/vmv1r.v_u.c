
/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */

#include <stddef.h>
#include <riscv_vector.h>


vuint8m1_t 
test_vmv1r_v_u8m1(vuint8m1_t src1, vuint8m1_t src2)
{
  vuint8m1_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv1r_v_u8m1 )?} } } */

vuint16m1_t 
test_vmv1r_v_u16m1(vuint16m1_t src1, vuint16m1_t src2)
{
  vuint16m1_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv1r_v_u16m1 )?} } } */

vuint32m1_t 
test_vmv1r_v_u32m1(vuint32m1_t src1, vuint32m1_t src2)
{
  vuint32m1_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv1r_v_u32m1 )?} } } */

vuint64m1_t 
test_vmv1r_v_u64m1(vuint64m1_t src1, vuint64m1_t src2)
{
  vuint64m1_t dest = src2;
  return dest;
}
/* { dg-final { scan-assembler {vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])\n(?: test_vmv1r_v_u64m1 )?} } } */
