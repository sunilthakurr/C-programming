/*program to find the area of equilateral triangle*/

#include<stdio.h>
#include<math.h>
int
main ()
{
  float a, A;
  printf ("Enter the side of triangle");
  scanf ("%f", &a);
  A = sqrt (3.0 / 2) * a * a;
  printf ("The area of triangle is %f", A);
  return 0;
}
