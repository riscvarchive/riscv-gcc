/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <riscv_vector.h>

/****************** vx ****************/
/*
** test_vmslt_vx_overlap0:
**  ...
**  vmslt.vx\tv0,v8,a0
**  ret
*/
vbool8_t
test_vmslt_vx_overlap0 (vint8m1_t v, int8_t x, size_t vl)
{
  return vmslt_vx_i8m1_b8 (v, x, vl);
}

/*
** test_vmslt_vx_overlap1:
**  ...
**  vmslt.vx\tv0,v8,a0
**  ret
*/
vbool2_t
test_vmslt_vx_overlap1 (vint8m4_t v, int8_t x, size_t vl)
{
  return vmslt_vx_i8m4_b2 (v, x, vl);
}

/*
** test_vmslt_vx_overlap2:
**  ...
**  vmslt.vx\tv8,v8,a0
**  ...
**  ret
*/
vbool2_t
test_vmslt_vx_overlap2 (vint8m4_t v, int8_t x, size_t vl)
{
  vbool2_t m = vmslt_vx_i8m4_b2 (v, x, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v9", "v10", "v11", "v12", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return m;
}

/*
** test_vmslt_vx_ma_overlap1:
**  ...
**  vmslt.vx\tv0,v8,a0,v0.t
**  ret
*/
vbool2_t
test_vmslt_vx_ma_overlap1 (vbool2_t m, vint8m4_t v, int8_t x, size_t vl)
{
  return vmslt_vx_i8m4_b2_ma (m, v, x, vl);
}

/*
** test_vmslt_vx_ma_overlap2:
**  ...
**  vmslt.vx\tv8,v8,a0,v0.t
**  ...
**  ret
*/
vbool2_t
test_vmslt_vx_ma_overlap2 (vbool2_t m, vint8m4_t v, int8_t x, size_t vl)
{
  vbool2_t result = vmslt_vx_i8m4_b2_ma (m, v, x, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v9", "v10", "v11", "v12", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return result;
}

/*
** test_vmslt_vx_mu_overlap1:
**  ...
**  vmslt.vx\tv0,v8,a0,v0.t
**  ret
*/
vbool2_t
test_vmslt_vx_mu_overlap1 (vbool2_t m, vint8m4_t v, int8_t x, size_t vl)
{
  return vmslt_vx_i8m4_b2_mu (m, m, v, x, vl);
}

/****************** vv ****************/
/*
** test_vmslt_vv_overlap1:
**  ...
**  vmslt.vv\tv0,v8,v12
**  ret
*/
vbool2_t
test_vmslt_vv_overlap1 (vint8m4_t v, vint8m4_t v2, size_t vl)
{
  return vmslt_vv_i8m4_b2 (v, v2, vl);
}

/*
** test_vmslt_vv_overlap2:
**  ...
**  vmslt.vv\tv8,v8,v12
**  ...
**  ret
*/
vbool2_t
test_vmslt_vv_overlap2 (vint8m4_t v, vint8m4_t v2, size_t vl)
{
  vbool2_t m = vmslt_vv_i8m4_b2 (v, v2, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v9", "v10", "v11", "v12", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return m;
}

/*
** test_vmslt_vv_overlap3:
**  ...
**  vmslt.vv\tv12,v8,v12
**  ...
**  ret
*/
vbool2_t
test_vmslt_vv_overlap3 (vint8m4_t v, vint8m4_t v2, size_t vl)
{
  vbool2_t m = vmslt_vv_i8m4_b2 (v, v2, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v8", "v9", "v10", "v11", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return m;
}

/*
** test_vmslt_vv_ma_overlap1:
**  ...
**  vmslt.vv\tv0,v8,v12,v0.t
**  ret
*/
vbool2_t
test_vmslt_vv_ma_overlap1 (vbool2_t m, vint8m4_t v, vint8m4_t v2, size_t vl)
{
  return vmslt_vv_i8m4_b2_ma (m, v, v2, vl);
}

/*
** test_vmslt_vv_ma_overlap2:
**  ...
**  vmslt.vv\tv8,v8,v12,v0.t
**  ...
**  ret
*/
vbool2_t
test_vmslt_vv_ma_overlap2 (vbool2_t m, vint8m4_t v, vint8m4_t v2, size_t vl)
{
  vbool2_t result = vmslt_vv_i8m4_b2_ma (m, v, v2, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v9", "v10", "v11", "v12", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return result;
}

/*
** test_vmslt_vv_ma_overlap3:
**  ...
**  vmslt.vv\tv12,v8,v12,v0.t
**  ...
**  ret
*/
vbool2_t
test_vmslt_vv_ma_overlap3 (vbool2_t m, vint8m4_t v, vint8m4_t v2, size_t vl)
{
  vbool2_t result = vmslt_vv_i8m4_b2_ma (m, v, v2, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v8", "v9", "v10", "v11", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return result;
}

/*
** test_vmslt_vv_ma_overlap4:
**  ...
**  vmslt.vv\tv8,v8,v8,v0.t
**  ...
**  ret
*/
vbool2_t
test_vmslt_vv_ma_overlap4 (vbool2_t m, vint8m4_t v, size_t vl)
{
  vbool2_t result = vmslt_vv_i8m4_b2_ma (m, v, v, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v9", "v10", "v11", "v12", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return result;
}

/*
** test_vmslt_vv_mu_overlap1:
**  ...
**  vmslt.vv\tv0,v8,v12,v0.t
**  ret
*/
vbool2_t
test_vmslt_vv_mu_overlap1 (vbool2_t m, vint8m4_t v, vint8m4_t v2, size_t vl)
{
  return vmslt_vv_i8m4_b2_mu (m, m, v, v2, vl);
}