//program to find power of any number 

#include<stdio.h>
#include<math.h>
int
main ()
{
  float a, b, result;
  printf ("Enter the first number");
  scanf ("%f", &a);
  printf ("Enter its power");
  scanf ("%f", &b);
  result = pow (a, b);
  printf ("The value of %f^%f is %f", a, b, result);
  return 0;
}
