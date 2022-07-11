/* { dg-do compile } */
/* { dg-additional-options "-O3" } */
/* { dg-skip-if "test intrinsic using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

#include <stddef.h>
#include <riscv_vector.h>

void foo (int32_t * __restrict y, const int32_t * __restrict x, int32_t * __restrict input0, const int32_t * __restrict input1, int N, int align)
{
    int32_t blocksize = N;
    if (blocksize < 0) {
      __builtin_abort();
    } else {
        int32_t shift_amount = 32;
        const int32_t * __restrict weight = NULL;
        const int32_t * __restrict gain = NULL;
        int32_t * __restrict dest = y;

        const int32_t cnt = N & (~(0x1f));
        const int32_t tail = (N & 0x1f) >> 4;
        const int32_t tail_less16 = N & 0xf;
        
        vint64m1_t v0;
        vint64m1_t v1;
        vint64m1_t v2;
        vint64m1_t v3;
        vint64m1_t v4;
        vint64m1_t v5;
        vint64m1_t v6;
        vint64m1_t v7;

        for(int i = 0; i < 1024; i += 32) {
            size_t vlmax = vsetvlmax_e64m8 ();
            vint64m8_t result = vmv_v_x_i64m8(0, vlmax);
            v0 = vget_v_i64m8_i64m1(result, 0);
            v1 = vget_v_i64m8_i64m1(result, 1);
            v2 = vget_v_i64m8_i64m1(result, 2);
            v3 = vget_v_i64m8_i64m1(result, 3);
            v4 = vget_v_i64m8_i64m1(result, 4);
            v5 = vget_v_i64m8_i64m1(result, 5);
            v6 = vget_v_i64m8_i64m1(result, 6);
            v7 = vget_v_i64m8_i64m1(result, 7);
            int k = 0;
            for (; k < 4; k++) {
                weight = input1;
                gain = input0 + i + k;
                vint64m1_t v16 = vle64_v_i64m1((int64_t *)gain, 32);
                vint64m1_t v17 = vle64_v_i64m1((int64_t *)gain + 8, 32);
                vint64m1_t v18 = vle64_v_i64m1((int64_t *)gain + 16, 32);
                vint64m1_t v24 = vle64_v_i64m1((int64_t *)gain + 4, 32);
                vint64m1_t v25 = vle64_v_i64m1((int64_t *)gain + 12, 32);
                vint64m1_t v26 = vle64_v_i64m1((int64_t *)gain + 20, 32);
                int mvec = 0;
                for (; mvec < align; mvec++) {
                    vint32m8_t coeffs = vle32_v_i32m8(weight, 256);
                    vint32m1_t coeff_v8  = vget_v_i32m8_i32m1(coeffs, 0);
                    vint32m1_t coeff_v9  = vget_v_i32m8_i32m1(coeffs, 1);
                    vint32m1_t coeff_v10 = vget_v_i32m8_i32m1(coeffs, 2);
                    vint32m1_t coeff_v11 = vget_v_i32m8_i32m1(coeffs, 3);
                    vint32m1_t coeff_v12 = vget_v_i32m8_i32m1(coeffs, 4);
                    vint32m1_t coeff_v13 = vget_v_i32m8_i32m1(coeffs, 5);
                    vint32m1_t coeff_v14 = vget_v_i32m8_i32m1(coeffs, 6);
                    vint32m1_t coeff_v15 = vget_v_i32m8_i32m1(coeffs, 7);
                    vint64m1_t v19 = vle64_v_i64m1((int64_t *)gain + 24, 32);
                    vint64m1_t v20 = vle64_v_i64m1((int64_t *)gain + 32, 32);
                    vint64m1_t v21 = vle64_v_i64m1((int64_t *)gain + 40, 32);
                    vint64m1_t v22 = vle64_v_i64m1((int64_t *)gain + 48, 32);
                    vint64m1_t v23 = vle64_v_i64m1((int64_t *)gain + 56, 32);
                    v0 = vwredsum_vs_i32m1_i64m1(v0, coeff_v8, v16, 32);
                    v2 = vwredsum_vs_i32m1_i64m1(v2, coeff_v8, v17, 32);
                    v4 = vwredsum_vs_i32m1_i64m1(v4, coeff_v8, v18, 32);
                    v6 = vwredsum_vs_i32m1_i64m1(v6, coeff_v8, v19, 32);
                    v0 = vwredsum_vs_i32m1_i64m1(v0, coeff_v9, v17, 32);
                    v2 = vwredsum_vs_i32m1_i64m1(v2, coeff_v9, v18, 32);
                    v4 = vwredsum_vs_i32m1_i64m1(v4, coeff_v9, v19, 32);
                    v6 = vwredsum_vs_i32m1_i64m1(v6, coeff_v9, v20, 32);
                    v0 = vwredsum_vs_i32m1_i64m1(v0, coeff_v10, v18, 32);
                    v2 = vwredsum_vs_i32m1_i64m1(v2, coeff_v10, v19, 32);
                    v4 = vwredsum_vs_i32m1_i64m1(v4, coeff_v10, v20, 32);
                    v6 = vwredsum_vs_i32m1_i64m1(v6, coeff_v10, v21, 32);
                    v16 = vle64_v_i64m1((int64_t *)gain + 64, 32);
                    v0 = vwredsum_vs_i32m1_i64m1(v0, coeff_v11, v19, 32);
                    v2 = vwredsum_vs_i32m1_i64m1(v2, coeff_v11, v20, 32);
                    v4 = vwredsum_vs_i32m1_i64m1(v4, coeff_v11, v21, 32);
                    v6 = vwredsum_vs_i32m1_i64m1(v6, coeff_v11, v22, 32);
                    v17 = vle64_v_i64m1((int64_t *)gain + 72, 32);
                    v0 = vwredsum_vs_i32m1_i64m1(v0, coeff_v12, v20, 32);
                    v2 = vwredsum_vs_i32m1_i64m1(v2, coeff_v12, v21, 32);
                    v4 = vwredsum_vs_i32m1_i64m1(v4, coeff_v12, v22, 32);
                    v6 = vwredsum_vs_i32m1_i64m1(v6, coeff_v12, v23, 32);
                    v18 = vle64_v_i64m1((int64_t *)gain + 128, 32);
                    v0 = vwredsum_vs_i32m1_i64m1(v0, coeff_v13, v21, 32);
                    v2 = vwredsum_vs_i32m1_i64m1(v2, coeff_v13, v22, 32);
                    v4 = vwredsum_vs_i32m1_i64m1(v4, coeff_v13, v23, 32);
                    v6 = vwredsum_vs_i32m1_i64m1(v6, coeff_v13, v16, 32);
                    v0 = vwredsum_vs_i32m1_i64m1(v0, coeff_v14, v22, 32);
                    v2 = vwredsum_vs_i32m1_i64m1(v2, coeff_v14, v23, 32);
                    v4 = vwredsum_vs_i32m1_i64m1(v4, coeff_v14, v16, 32);
                    v6 = vwredsum_vs_i32m1_i64m1(v6, coeff_v14, v17, 32);
                    v0 = vwredsum_vs_i32m1_i64m1(v0, coeff_v15, v23, 32);
                    v2 = vwredsum_vs_i32m1_i64m1(v2, coeff_v15, v16, 32);
                    v4 = vwredsum_vs_i32m1_i64m1(v4, coeff_v15, v17, 32);
                    v6 = vwredsum_vs_i32m1_i64m1(v6, coeff_v15, v18, 32);
                    vint64m1_t v27 = vle64_v_i64m1((int64_t *)gain + 28, 32);
                    vint64m1_t v28 = vle64_v_i64m1((int64_t *)gain + 36, 32);
                    vint64m1_t v29 = vle64_v_i64m1((int64_t *)gain + 44, 32);
                    vint64m1_t v30 = vle64_v_i64m1((int64_t *)gain + 52, 32);
                    vint64m1_t v31 = vle64_v_i64m1((int64_t *)gain + 60, 32);
                    v1 = vwredsum_vs_i32m1_i64m1(v1, coeff_v8, v24,  32);
                    v3 = vwredsum_vs_i32m1_i64m1(v3, coeff_v8, v25,  32);
                    v5 = vwredsum_vs_i32m1_i64m1(v5, coeff_v8, v26,  32);
                    v7 = vwredsum_vs_i32m1_i64m1(v7, coeff_v8, v27,  32);
                    v1 = vwredsum_vs_i32m1_i64m1(v1, coeff_v9, v25,  32);
                    v3 = vwredsum_vs_i32m1_i64m1(v3, coeff_v9, v26,  32);
                    v5 = vwredsum_vs_i32m1_i64m1(v5, coeff_v9, v27,  32);
                    v7 = vwredsum_vs_i32m1_i64m1(v7, coeff_v9, v28,  32);
                    v1 = vwredsum_vs_i32m1_i64m1(v1, coeff_v10, v26, 32);
                    v3 = vwredsum_vs_i32m1_i64m1(v3, coeff_v10, v27, 32);
                    v5 = vwredsum_vs_i32m1_i64m1(v5, coeff_v10, v28, 32);
                    v7 = vwredsum_vs_i32m1_i64m1(v7, coeff_v10, v29, 32);
                    v24 = vle64_v_i64m1((int64_t *)gain + 88, 32);
                    v1 = vwredsum_vs_i32m1_i64m1(v1, coeff_v11, v27,  32);
                    v3 = vwredsum_vs_i32m1_i64m1(v3, coeff_v11, v28,  32);
                    v5 = vwredsum_vs_i32m1_i64m1(v5, coeff_v11, v29,  32);
                    v7 = vwredsum_vs_i32m1_i64m1(v7, coeff_v11, v30,  32);
                    v25 = vle64_v_i64m1((int64_t *)gain + 96, 32);
                    v1 = vwredsum_vs_i32m1_i64m1(v1, coeff_v12, v28,  32);
                    v3 = vwredsum_vs_i32m1_i64m1(v3, coeff_v12, v29,  32);
                    v5 = vwredsum_vs_i32m1_i64m1(v5, coeff_v12, v30,  32);
                    v7 = vwredsum_vs_i32m1_i64m1(v7, coeff_v12, v31,  32);
                    v26 = vle64_v_i64m1((int64_t *)gain + 104, 32);
                    v1 = vwredsum_vs_i32m1_i64m1(v1, coeff_v13, v29,  32);
                    v3 = vwredsum_vs_i32m1_i64m1(v3, coeff_v13, v30,  32);
                    v5 = vwredsum_vs_i32m1_i64m1(v5, coeff_v13, v31,  32);
                    v7 = vwredsum_vs_i32m1_i64m1(v7, coeff_v13, v24,  32);
                    v1 = vwredsum_vs_i32m1_i64m1(v1, coeff_v14, v30,  32);
                    v3 = vwredsum_vs_i32m1_i64m1(v3, coeff_v14, v31,  32);
                    v5 = vwredsum_vs_i32m1_i64m1(v5, coeff_v14, v24,  32);
                    v7 = vwredsum_vs_i32m1_i64m1(v7, coeff_v14, v25,  32);
                    v1 = vwredsum_vs_i32m1_i64m1(v1, coeff_v15, v31,  32);
                    v3 = vwredsum_vs_i32m1_i64m1(v3, coeff_v15, v24,  32);
                    v5 = vwredsum_vs_i32m1_i64m1(v5, coeff_v15, v25,  32);
                    v7 = vwredsum_vs_i32m1_i64m1(v7, coeff_v15, v26,  32);
                    weight += 64;
                    gain += 64;
                }
            }
            
            vse64_v_i64m1((int64_t *)(dest + 64*0), v0, 64);
            vse64_v_i64m1((int64_t *)(dest + 64*1), v1, 64);
            vse64_v_i64m1((int64_t *)(dest + 64*2), v2, 64);
            vse64_v_i64m1((int64_t *)(dest + 64*3), v3, 64);
            vse64_v_i64m1((int64_t *)(dest + 64*4), v4, 64);
            vse64_v_i64m1((int64_t *)(dest + 64*5), v5, 64);
            vse64_v_i64m1((int64_t *)(dest + 64*6), v6, 64);
            vse64_v_i64m1((int64_t *)(dest + 64*7), v7, 64);
            dest += 64;
        }
        return ;
    }
}

/* { dg-final { scan-assembler-not {vmv1r.v} } } */
/* { dg-final { scan-assembler-not {vmv2r.v} } } */
/* { dg-final { scan-assembler-not {vmv4r.v} } } */
/* { dg-final { scan-assembler-not {vmv8r.v} } } */