/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-final { check-function-bodies "**" "" } } */

#include <riscv_vector.h>

/****************** vf ****************/
/*
** test_vmfne_vf_overlap0:
**  ...
**  vmfne.vf\tv0,v8,fa0
**  ret
*/
vbool16_t
test_vmfne_vf_overlap0 (vfloat16m1_t v, float16_t x, size_t vl)
{
  return vmfne_vf_f16m1_b16 (v, x, vl);
}

/*
** test_vmfne_vf_overlap1:
**  ...
**  vmfne.vf\tv0,v8,fa0
**  ret
*/
vbool4_t
test_vmfne_vf_overlap1 (vfloat16m4_t v, float16_t x, size_t vl)
{
  return vmfne_vf_f16m4_b4 (v, x, vl);
}

/*
** test_vmfne_vf_overlap2:
**  ...
**  vmfne.vf\tv8,v8,fa0
**  ...
**  ret
*/
vbool4_t
test_vmfne_vf_overlap2 (vfloat16m4_t v, float16_t x, size_t vl)
{
  vbool4_t m = vmfne_vf_f16m4_b4 (v, x, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v9", "v10", "v11", "v12", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return m;
}

/*
** test_vmfne_vf_ma_overlap1:
**  ...
**  vmfne.vf\tv0,v8,fa0,v0.t
**  ret
*/
vbool4_t
test_vmfne_vf_ma_overlap1 (vbool4_t m, vfloat16m4_t v, float16_t x, size_t vl)
{
  return vmfne_vf_f16m4_b4_ma (m, v, x, vl);
}

/*
** test_vmfne_vf_ma_overlap2:
**  ...
**  vmfne.vf\tv8,v8,fa0,v0.t
**  ...
**  ret
*/
vbool4_t
test_vmfne_vf_ma_overlap2 (vbool4_t m, vfloat16m4_t v, float16_t x, size_t vl)
{
  vbool4_t result = vmfne_vf_f16m4_b4_ma (m, v, x, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v9", "v10", "v11", "v12", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return result;
}

/*
** test_vmfne_vf_mu_overlap1:
**  ...
**  vmfne.vf\tv0,v8,fa0,v0.t
**  ret
*/
vbool4_t
test_vmfne_vf_mu_overlap1 (vbool4_t m, vfloat16m4_t v, float16_t x, size_t vl)
{
  return vmfne_vf_f16m4_b4_mu (m, m, v, x, vl);
}

/****************** vv ****************/
/*
** test_vmfne_vv_overlap1:
**  ...
**  vmfne.vv\tv0,v8,v12
**  ret
*/
vbool4_t
test_vmfne_vv_overlap1 (vfloat16m4_t v, vfloat16m4_t v2, size_t vl)
{
  return vmfne_vv_f16m4_b4 (v, v2, vl);
}

/*
** test_vmfne_vv_overlap2:
**  ...
**  vmfne.vv\tv8,v8,v12
**  ...
**  ret
*/
vbool4_t
test_vmfne_vv_overlap2 (vfloat16m4_t v, vfloat16m4_t v2, size_t vl)
{
  vbool4_t m = vmfne_vv_f16m4_b4 (v, v2, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v9", "v10", "v11", "v12", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return m;
}

/*
** test_vmfne_vv_overlap3:
**  ...
**  vmfne.vv\tv12,v8,v12
**  ...
**  ret
*/
vbool4_t
test_vmfne_vv_overlap3 (vfloat16m4_t v, vfloat16m4_t v2, size_t vl)
{
  vbool4_t m = vmfne_vv_f16m4_b4 (v, v2, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v8", "v9", "v10", "v11", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return m;
}

/*
** test_vmfne_vv_ma_overlap1:
**  ...
**  vmfne.vv\tv0,v8,v12,v0.t
**  ret
*/
vbool4_t
test_vmfne_vv_ma_overlap1 (vbool4_t m, vfloat16m4_t v, vfloat16m4_t v2, size_t vl)
{
  return vmfne_vv_f16m4_b4_ma (m, v, v2, vl);
}

/*
** test_vmfne_vv_ma_overlap2:
**  ...
**  vmfne.vv\tv8,v8,v12,v0.t
**  ...
**  ret
*/
vbool4_t
test_vmfne_vv_ma_overlap2 (vbool4_t m, vfloat16m4_t v, vfloat16m4_t v2, size_t vl)
{
  vbool4_t result = vmfne_vv_f16m4_b4_ma (m, v, v2, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v9", "v10", "v11", "v12", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return result;
}

/*
** test_vmfne_vv_ma_overlap3:
**  ...
**  vmfne.vv\tv12,v8,v12,v0.t
**  ...
**  ret
*/
vbool4_t
test_vmfne_vv_ma_overlap3 (vbool4_t m, vfloat16m4_t v, vfloat16m4_t v2, size_t vl)
{
  vbool4_t result = vmfne_vv_f16m4_b4_ma (m, v, v2, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v8", "v9", "v10", "v11", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return result;
}

/*
** test_vmfne_vv_ma_overlap4:
**  ...
**  vmfne.vv\tv8,v8,v8,v0.t
**  ...
**  ret
*/
vbool4_t
test_vmfne_vv_ma_overlap4 (vbool4_t m, vfloat16m4_t v, size_t vl)
{
  vbool4_t result = vmfne_vv_f16m4_b4_ma (m, v, v, vl);
  asm volatile ("clobber_regs" : : :
                "v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7",
                "v9", "v10", "v11", "v12", "v13", "v14", "v15",
                "v16", "v17", "v18", "v19", "v20", "v21", "v22", "v23",
                "v24", "v25", "v26", "v27", "v28", "v29", "v30", "v31");
  return result;
}

/*
** test_vmfne_vv_mu_overlap1:
**  ...
**  vmfne.vv\tv0,v8,v12,v0.t
**  ret
*/
vbool4_t
test_vmfne_vv_mu_overlap1 (vbool4_t m, vfloat16m4_t v, vfloat16m4_t v2, size_t vl)
{
  return vmfne_vv_f16m4_b4_mu (m, m, v, v2, vl);
}