/* { dg-do compile } */
/* { dg-skip-if "test vector intrinsic" { *-*-* } { "*" } { "-march=rv*v*" } } */
/* { dg-final { check-function-bodies "**" "" } } */
#include <stddef.h>
#include <riscv_vector.h>

/*
** test_vmv4r_v_i8m4:
**  ...
**	vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vint8m4_t 
test_vmv4r_v_i8m4(vint8m4_t src1, vint8m4_t src2)
{
  vint8m4_t dest = src2;
  return dest;
}


/*
** test_vmv4r_v_i16m4:
**  ...
**	vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vint16m4_t 
test_vmv4r_v_i16m4(vint16m4_t src1, vint16m4_t src2)
{
  vint16m4_t dest = src2;
  return dest;
}


/*
** test_vmv4r_v_i32m4:
**  ...
**	vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vint32m4_t 
test_vmv4r_v_i32m4(vint32m4_t src1, vint32m4_t src2)
{
  vint32m4_t dest = src2;
  return dest;
}


/*
** test_vmv4r_v_i64m4:
**  ...
**	vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vint64m4_t 
test_vmv4r_v_i64m4(vint64m4_t src1, vint64m4_t src2)
{
  vint64m4_t dest = src2;
  return dest;
}


/*
** test_vmv4r_v_u8m4:
**  ...
**	vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint8m4_t 
test_vmv4r_v_u8m4(vuint8m4_t src1, vuint8m4_t src2)
{
  vuint8m4_t dest = src2;
  return dest;
}


/*
** test_vmv4r_v_u16m4:
**  ...
**	vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint16m4_t 
test_vmv4r_v_u16m4(vuint16m4_t src1, vuint16m4_t src2)
{
  vuint16m4_t dest = src2;
  return dest;
}


/*
** test_vmv4r_v_u32m4:
**  ...
**	vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint32m4_t 
test_vmv4r_v_u32m4(vuint32m4_t src1, vuint32m4_t src2)
{
  vuint32m4_t dest = src2;
  return dest;
}


/*
** test_vmv4r_v_u64m4:
**  ...
**	vmv4r\.v\s+(?:v[048]|v1[26]|v2[048]),\s*(?:v[048]|v1[26]|v2[048])
**  ...
**  ret
*/
extern "C" vuint64m4_t 
test_vmv4r_v_u64m4(vuint64m4_t src1, vuint64m4_t src2)
{
  vuint64m4_t dest = src2;
  return dest;
}

