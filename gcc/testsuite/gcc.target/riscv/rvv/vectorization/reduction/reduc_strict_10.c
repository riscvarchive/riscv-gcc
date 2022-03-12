/* { dg-do run } */
/* { dg-additional-options "-O2 -ftree-vectorize" } */
/* { dg-skip-if "test vectorization using rvv" { *-*-* } { "*" } { "-march=rv*gc*v*zfh*" } } */

#include <stdint.h>
#include <stdio.h>
int64_t mat[100][12];

int64_t __attribute__ ((noinline, noclone))
slp_reduc_plus (int n)
{
  int64_t tmp = 0;
  for (int i = 0; i < n; i++)
    {
      tmp = tmp + mat[i][0];
      tmp = tmp + mat[i][1];
      tmp = tmp + mat[i][2];
      tmp = tmp + mat[i][3];
      tmp = tmp + mat[i][4];
      tmp = tmp + mat[i][5];
      tmp = tmp + mat[i][6];
      tmp = tmp + mat[i][7];
      tmp = tmp + mat[i][8];
      tmp = tmp + mat[i][9];
      tmp = tmp + mat[i][10];
      tmp = tmp + mat[i][11];
    }
  return tmp;
}

#pragma GCC push_options
#pragma GCC optimize ("O0")
int64_t __attribute__ ((noinline, noclone))
slp_reduc_plus_golden (int n)
{
  int64_t tmp = 0;
  for (int i = 0; i < n; i++)
    {
      tmp = tmp + mat[i][0];
      tmp = tmp + mat[i][1];
      tmp = tmp + mat[i][2];
      tmp = tmp + mat[i][3];
      tmp = tmp + mat[i][4];
      tmp = tmp + mat[i][5];
      tmp = tmp + mat[i][6];
      tmp = tmp + mat[i][7];
      tmp = tmp + mat[i][8];
      tmp = tmp + mat[i][9];
      tmp = tmp + mat[i][10];
      tmp = tmp + mat[i][11];
    }
  return tmp;
}
#pragma GCC pop_options

int main (void)
{
  for (int i = 0; i < 100; i++)
    {
      for (int j = 0; j < 12; j++)
        {
          mat[i][j] = i * 12 + j;
        }
    }
  
  int64_t result = slp_reduc_plus (77);
  int64_t golden = slp_reduc_plus_golden (77);
  
  if (result != golden)
    {
      printf("slp_reduc_plus:result:%lld,golden:%lld\n",result,golden);
      __builtin_abort();
    }
  return 0;
}