#include<stdio.h>
int
main ()
{
  float P, T, R, SI;
  printf ("Enter the principle amount");
  scanf ("%f", &P);
  printf ("Enter the time period");
  scanf ("%f", &T);
  printf ("Enter the rate of interest");
  scanf ("%f", &R);
  SI = (P * T * R) / 100;
  printf ("The simple interest is %f", SI);
  return 0;
}
