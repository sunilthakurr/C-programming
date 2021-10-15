//program to find compound interest
#include<stdio.h>
#include<math.h>
int
main ()
{
  float P, R, T, CI;
  printf ("Enter the principle amount");
  scanf ("%f", &P);
  printf ("Enter the rate of interest");
  scanf ("%f", &R);
  printf ("Enter the time period");
  scanf ("%f", &T);
  CI = (P * pow ((1 + (R / 100)), T)) - P;
  printf ("The compound interest is %f", CI);
  return 0;
}
