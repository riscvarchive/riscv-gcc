/* { dg-do compile } */
/* { dg-options "-O -mcheck-constraints" } */
int foo()
{
}
/* { dg-final { scan-assembler ".option checkconstraints" } } */
