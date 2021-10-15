#include<stdio.h>
int
main ()
{
  float a, b, c, ar;
  printf ("Enter the height and parallel sides of triangle");
  scanf ("%f%f%f", &a, &b, &c);
  ar = 0.5 * (b + c) * a;
  printf ("The area of trapezium is %f", ar);
  return 0;
}
