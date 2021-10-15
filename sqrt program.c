//program to enter any number and calculate its square root

#include<stdio.h>
#include<math.h>
int
main ()
{
  float a;
  printf ("Enter the number");
  scanf ("%f", &a);
  printf ("Square root of %f is %f", a, sqrt (a));
  return 0;
}
