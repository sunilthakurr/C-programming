//program to find the area of triangle using hereon's formula
#include<stdio.h>
#include<math.h>
int
main ()
{
  float a, b, c, s, ar;
  printf ("Enter the side of triangle");
  scanf ("%f%f%f", &a, &b, &c);
  s = (a + b + c) / 2;
  ar = pow(s*(s - a)*(s - b)*(s - c),0.5);
  printf ("The area of triangle is %f", ar);
  return 0;
}
