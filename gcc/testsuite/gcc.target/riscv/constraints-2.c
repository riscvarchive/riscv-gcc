/* { dg-do compile } */
/* { dg-options "-O -mno-check-constraints" } */
int foo()
{
}
/* { dg-final { scan-not-assembler ".option checkconstraints" } } */
