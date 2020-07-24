// cmsis dsp example FIR filter
// https://github.com/ARM-software/CMSIS_5/blob/develop/CMSIS/DSP/Source/FilteringFunctions/arm_fir_f32.c

/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

#if 0
// scalar version
float *fir_kernel(float *pStateCurnt, float *pState, float *pCoeffs,
                         const float *pSrc, float *pDst, uint32_t numTaps,
                         uint32_t blockSize) {
  uint32_t blkCnt = blockSize;

  while (blkCnt > 0u) {

    /* Copy one sample at a time into state buffer */
    *pStateCurnt = *pSrc;

    /* Set the accumulator to zero */
    float acc0 = 0.0f;

    /* Initialize state pointer */
    float *px = pState;

    /* Initialize Coefficient pointer */
    float *pb = (pCoeffs);

    uint32_t i = numTaps;

    /* Perform the multiply-accumulates */
    do {
      acc0 += *px * *pb;
      px++;
      pb++;
      i--;

    } while (i > 0u);

    /* The result is store in the destination buffer. */
    *pDst = acc0;

    pStateCurnt++;
    pSrc++;
    pDst++;

    /* Advance state pointer by 1 for the next sample */
    pState = pState + 1;

    blkCnt--;
  }

  return pState;
}
#endif

float *fir_kernel(float *pStateCurnt, float *pState, float *pCoeffs,
                         const float *pSrc, float *pDst, uint32_t numTaps,
                         uint32_t blockSize) {
  uint32_t blkCnt = blockSize;
  size_t vl;

  for (; vl = vsetvl_e32m1(blkCnt); blkCnt -= vl) {

    /* Copy sample vl time into state buffer */
    *(vfloat32m1_t *)pStateCurnt = *(vfloat32m1_t *)pSrc;

    // nested loop will compute pDst vl times.
    for (int l = 0; l < vl; l++) {

      /* Set the accumulator to zero */
      float acc0 = 0.0;

      /* Initialize state pointer */
      float *px = pState;

      /* Initialize Coefficient pointer */
      float *pb = pCoeffs;

      uint32_t i = numTaps;

      /* Perform the multiply-accumulates */
      // init zero vector
      vfloat32m1_t vsum;
      vsum = vsplat_s_f32m1(0.0);
      size_t nested_vl;
      for (; nested_vl = vsetvl_e32m1(i); i -= nested_vl) {
        vfloat32m1_t *vpx = (vfloat32m1_t *)px;
        vfloat32m1_t *vpb = (vfloat32m1_t *)pb;

        // acc0 += *px * *pb;
        vfloat32m1_t vacc;
        vacc = vfmul_vv_f32m1(*vpx, *vpb);
        vsum = vfredsum_vs_f32m1_f32m1(vsum, vacc, vsum); // reduction sum

        // acc0 = vacc[0];
        float tmp = vfmv_f_s_f32m1_f32(vsum);
        acc0 += tmp;

        px += nested_vl;
        pb += nested_vl;

      } while (i > 0u);

      /* The result is store in the destination buffer. */
      *pDst = acc0;

      /* Advance state pointer by 1 for the next sample */
      pState = pState + 1;
      *pDst++;
    }

    pStateCurnt += vl;
    pSrc += vl;

  }

  return pState;
}
