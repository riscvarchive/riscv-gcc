/* { dg-do compile } */
/* { dg-additional-options "-mriscv-vector-bits=128 -O2 -ftree-vectorize -ffast-math -fdump-tree-vect-details --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

void
xorsign_half (_Float16 * restrict a, _Float16 * restrict b,
	      _Float16 * restrict r, int n)
{
  for (int i = 0; i < 16; i++)
    {
      r[i] = a[i] * __builtin_copysignf16 (1.0f16, b[i]);
    }
}

void
xorsign_float (float *restrict a, float *restrict b, float *restrict r, int n)
{
  for (int i = 0; i < 16; i++)
    {
      r[i] = a[i] * __builtin_copysignf (1.0f, b[i]);
    }
}

void
xorsign_double (double *restrict a, double *restrict b, double *restrict r,
		int n)
{
  for (int i = 0; i < 16; i++)
    {
      r[i] = a[i] * __builtin_copysign (1.0d, b[i]);
    }
}

/* { dg-final { scan-tree-dump-times "vectorized 1 loops in function" 3 "vect" } } */
/* { dg-final { scan-assembler-times {\tvfsgnjx\.vv} 4 } } */