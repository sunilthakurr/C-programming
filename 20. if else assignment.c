/* 20. Write a C program to input basic 
salary of an employee and calculate its
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%  */


#include<stdio.h>
int
main ()
{
  float a, b, c;
  printf ("Enter the basic salary of an employee\n");
  scanf ("%f", &a);
  if (a <= 10000)
    {
      b = 0.2 * a;
      c = 0.8 * a;
      printf ("Gross salary = %f", a + b + c);
    }
  else if (a <= 20000)
    {
      b = 0.25 * a;
      c = 0.9 * a;
      printf ("Gross salary = %f", a + b + c);
    }
  else if (a > 20000)
    {
      b = 0.3 * a;
      c = 0.95 * a;
      printf ("Gross salary = %f", a + b + c);
    }
  return 0;






}
