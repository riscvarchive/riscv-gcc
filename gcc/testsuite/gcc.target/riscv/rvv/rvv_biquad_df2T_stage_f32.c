// https://github.com/PaulStoffregen/arm_math/blob/master/src/arm_biquad_cascade_df2T_f32.c

/* { dg-do compile } */

#include <riscv_vector.h>
#include <stddef.h>
#include <stdint.h>

#define float32_t float
typedef struct {
  uint8_t numStages; /**< number of 2nd order stages in the filter.  Overall
                        order is 2*numStages. */
  float32_t *pState; /**< points to the array of state coefficients.  The array
                        is of length 2*numStages. */
  const float32_t *pCoeffs; /**< points to the array of coefficients.  The array
                               is of length 5*numStages. */
} riscv_biquad_cascade_df2T_instance_f32;

void riscv_biquad_df2T_stage_f32(const float32_t *pIn, float32_t *pOut,
                                 const float32_t *pCoeffs, float32_t *pState,
                                 uint32_t sample);

void riscv_biquad_cascade_df2T_f32(
    const riscv_biquad_cascade_df2T_instance_f32 *S, const float32_t *pSrc,
    float32_t *pDst, uint32_t blockSize) {
  const float32_t *pIn = pSrc;           /*  source pointer            */
  float32_t *pOut = pDst;                /*  destination pointer       */
  float32_t *pState = S->pState;         /*  State pointer             */
  const float32_t *pCoeffs = S->pCoeffs; /*  coefficient pointer       */
  float32_t acc1;                        /*  accumulator               */
  float32_t b0, b1, b2, a1, a2;          /*  Filter coefficients       */
  float32_t Xn1;                         /*  temporary input           */
  float32_t d1, d2;                      /*  state variables           */
  uint32_t sample, stage = S->numStages; /*  loop counters             */

  do {
    sample = blockSize;
    riscv_biquad_df2T_stage_f32(pIn, pOut, pCoeffs, pState, sample);
    pCoeffs += 5U;
    pState += 2U;
    /* The current stage input is given as the output to the next stage */
    pIn = pDst;

    /*Reset the output working pointer */
    pOut = pDst;

    /* decrement the loop counter */
    stage--;

  } while (stage > 0u);
}

// scalar version
#if 0
void riscv_biquad_df2T_stage_f32(const float32_t *pIn, float32_t *pOut,
                                 const float32_t *pCoeffs, float32_t *pState,
                                 uint32_t sample) {
  /* Reading the coefficients */
  b0 = pCoeffs[0];
  b1 = pCoeffs[1];
  b2 = pCoeffs[2];
  a1 = pCoeffs[3];
  a2 = pCoeffs[4];

  /*Reading the state values */
  d1 = pState[0];
  d2 = pState[1];

  while (sample > 0u) {
    /* Read the input */
    Xn1 = *pIn++;

    /* y[n] = b0 * x[n] + d1 */
    acc1 = (b0 * Xn1) + d1;

    /* Store the result in the accumulator in the destination buffer. */
    *pOut++ = acc1;

    /* Every time after the output is computed state should be updated. */
    /* d1 = b1 * x[n] + a1 * y[n] + d2 */
    d1 = ((b1 * Xn1) + (a1 * acc1)) + d2;

    /* d2 = b2 * x[n] + a2 * y[n] */
    d2 = (b2 * Xn1) + (a2 * acc1);

    /* decrement the loop counter */
    sample--;
  }

  /* Store the updated state variables back into the state array */
  pState[0] = d1;
  pState[1] = d2;
}
#endif

// rvv intrinsic version
// This is tail-zeroing implementation
void riscv_biquad_df2T_stage_f32(const float32_t *pIn, float32_t *pOut,
                                 const float32_t *pCoeffs, float32_t *pState,
                                 uint32_t sample) {

  // this kernel implementation assume VLMAX >= 3 when SEW is 32
  // assert(rvvsetvl32m1(-1) >= 3);

  /* Reading the coefficients */
  // b0 = pCoeffs[0];
  // b1 = pCoeffs[1];
  // b2 = pCoeffs[2];
  size_t vl = vsetvl_e32m1(3); // set vl = 3
  vfloat32m1_t v_coef_b;
  v_coef_b = vle32_v_f32m1(pCoeffs);
  pCoeffs += vl;

  // a1 = pCoeffs[3];
  // a2 = pCoeffs[4];
  vl = vsetvl_e32m1(2); // set vl = 2
  vfloat32m1_t v_coef_a;
  v_coef_a = vle32_v_f32m1(pCoeffs);
  pCoeffs += vl;

  /*Reading the state values */
  // d1 = pState[0];
  // d2 = pState[1];
  vfloat32m1_t v_d;
  v_d = *(vfloat32m1_t *)pState;

  while (sample > 0u) {
    /* Read the input */
    float32_t xn = *pIn++;

    // acc1 = (b0 * Xn1) + d1;
    vsetvl_e32m1(3); // set vl = 3
    v_d = vfmacc_vf_f32m1(
        v_d, xn,
        v_coef_b); // v_d = {b0 * x[n] + d1, b1 * x[n] + d2, b2 * x[n] + 0x0}
    float acc1 = vfmv_f_s_f32m1_f32 (v_d); // acc1 = v_d[0] = b0 * x[n] + d1

    /* Store the result in the accumulator in the destination buffer. */
    *pOut++ = acc1;

    // I'm not sure why does need to use another vector register
    vfloat32m1_t v_slide;
    v_slide = vcopy_v_f32m1(v_d);

    v_d = vslidedown_vx_f32m1(
	vundefined_f32m1 (),
        v_slide,
        0x1); // v_d = {b1 * x[n] + d2, b2 * x[n] + 0x0, nan}

    // d1 = (b1 * Xn1) + (a1 * acc1) + d2;
    // d2 = (b2 * Xn1) + (a2 * acc1);
    vsetvl_e32m1(2); // set vl = 2
    v_d = vfmacc_vf_f32m1(v_d, acc1,
                                v_coef_a); // v_d = {b1 * x[n] + d2 + a1 * acc1,
                                           // b2 * x[n] + 0x0 + a2 * acc1}

    /* decrement the loop counter */
    sample--;
  }

  // pState[0] = d1;
  // pState[1] = d2;
  *(vfloat32m1_t *)pState = v_d;
}
