/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vmv1r_v_i8m1:
**  ...
**	vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint8m1_t 
test_vmv1r_v_i8m1(vint8m1_t src1, vint8m1_t src2)
{
  vint8m1_t dest = src2;
  return dest;
}


/*
** test_vmv1r_v_i16m1:
**  ...
**	vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint16m1_t 
test_vmv1r_v_i16m1(vint16m1_t src1, vint16m1_t src2)
{
  vint16m1_t dest = src2;
  return dest;
}


/*
** test_vmv1r_v_i32m1:
**  ...
**	vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint32m1_t 
test_vmv1r_v_i32m1(vint32m1_t src1, vint32m1_t src2)
{
  vint32m1_t dest = src2;
  return dest;
}


/*
** test_vmv1r_v_i64m1:
**  ...
**	vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vint64m1_t 
test_vmv1r_v_i64m1(vint64m1_t src1, vint64m1_t src2)
{
  vint64m1_t dest = src2;
  return dest;
}


/*
** test_vmv1r_v_u8m1:
**  ...
**	vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint8m1_t 
test_vmv1r_v_u8m1(vuint8m1_t src1, vuint8m1_t src2)
{
  vuint8m1_t dest = src2;
  return dest;
}


/*
** test_vmv1r_v_u16m1:
**  ...
**	vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint16m1_t 
test_vmv1r_v_u16m1(vuint16m1_t src1, vuint16m1_t src2)
{
  vuint16m1_t dest = src2;
  return dest;
}


/*
** test_vmv1r_v_u32m1:
**  ...
**	vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint32m1_t 
test_vmv1r_v_u32m1(vuint32m1_t src1, vuint32m1_t src2)
{
  vuint32m1_t dest = src2;
  return dest;
}


/*
** test_vmv1r_v_u64m1:
**  ...
**	vmv1r\.v\s+(?:v[0-9]|v[1-2][0-9]|v3[0-1]),\s*(?:v[0-9]|v[1-2][0-9]|v3[0-1])
**  ...
**  ret
*/
extern "C" vuint64m1_t 
test_vmv1r_v_u64m1(vuint64m1_t src1, vuint64m1_t src2)
{
  vuint64m1_t dest = src2;
  return dest;
}

