/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>


/*
** test_vmv2r_v_i8m2:
**  ...
**	vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint8m2_t 
test_vmv2r_v_i8m2(vint8m2_t src1, vint8m2_t src2)
{
  vint8m2_t dest = src2;
  return dest;
}

/*
** test_vmv2r_v_i16m2:
**  ...
**	vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint16m2_t 
test_vmv2r_v_i16m2(vint16m2_t src1, vint16m2_t src2)
{
  vint16m2_t dest = src2;
  return dest;
}

/*
** test_vmv2r_v_i32m2:
**  ...
**	vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint32m2_t 
test_vmv2r_v_i32m2(vint32m2_t src1, vint32m2_t src2)
{
  vint32m2_t dest = src2;
  return dest;
}

/*
** test_vmv2r_v_i64m2:
**  ...
**	vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vint64m2_t 
test_vmv2r_v_i64m2(vint64m2_t src1, vint64m2_t src2)
{
  vint64m2_t dest = src2;
  return dest;
}

/*
** test_vmv2r_v_u8m2:
**  ...
**	vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint8m2_t 
test_vmv2r_v_u8m2(vuint8m2_t src1, vuint8m2_t src2)
{
  vuint8m2_t dest = src2;
  return dest;
}

/*
** test_vmv2r_v_u16m2:
**  ...
**	vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint16m2_t 
test_vmv2r_v_u16m2(vuint16m2_t src1, vuint16m2_t src2)
{
  vuint16m2_t dest = src2;
  return dest;
}

/*
** test_vmv2r_v_u32m2:
**  ...
**	vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint32m2_t 
test_vmv2r_v_u32m2(vuint32m2_t src1, vuint32m2_t src2)
{
  vuint32m2_t dest = src2;
  return dest;
}

/*
** test_vmv2r_v_u64m2:
**  ...
**	vmv2r\.v\s+(?:v[02468]|v[1-2][02468]|v30),\s*(?:v[02468]|v[1-2][02468]|v30)
**  ...
**  ret
*/
vuint64m2_t 
test_vmv2r_v_u64m2(vuint64m2_t src1, vuint64m2_t src2)
{
  vuint64m2_t dest = src2;
  return dest;
}

