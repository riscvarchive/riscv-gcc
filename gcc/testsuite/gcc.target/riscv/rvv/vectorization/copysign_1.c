/* { dg-do compile } */
/* { dg-additional-options "-O2 -ftree-vectorize -ffast-math -fdump-tree-vect-details --save-temps" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*v*zfh*" } } */

void
copysign_half (_Float16 * restrict a, _Float16 * restrict b,
	       _Float16 * restrict r, int n)
{
  for (int i = 0; i < n; i++)
    {
      r[i] = __builtin_copysignf16 (a[i], b[i]);
    }
}

void
copysign_float (float *restrict a, float *restrict b, float *restrict r,
		int n)
{
  for (int i = 0; i < n; i++)
    {
      r[i] = __builtin_copysignf (a[i], b[i]);
    }
}

void
copysign_double (double *restrict a, double *restrict b, double *restrict r,
		 int n)
{
  for (int i = 0; i < n; i++)
    {
      r[i] = __builtin_copysign (a[i], b[i]);
    }
}

/* { dg-final { scan-tree-dump-times "vectorized 1 loops in function" 3 "vect" } } */
/* { dg-final { scan-assembler-times {\tvfsgnj\.vv} 3 } } */