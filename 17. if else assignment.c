/* 17. Write a C program to find all 
roots of a quadratic equation.  */
#include<stdio.h>
#include<math.h>
int
main ()
{
  float a, b, c, r1, r2, d;
  printf ("Enter the coefficient of x^2,x and constant\n");
  scanf ("%f%f%f", &a, &b, &c);
  d = b * b - 4 * a * c;
  if (d > 0)
    {
      r1 = -b + sqrt (d) / (2 * a);
      r2 = -b + sqrt (d) / (2 * a);
      printf ("The real roots are %f and %f", r1, r2);
    }
  else if (d == 0)
    {
      r1 = -b / (2 * a);
      printf ("The real and equal roots are %f ", r1);
    }
  else
    {
      printf ("The roots are imaginary");
    }
  return 0;


}
