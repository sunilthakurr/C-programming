/*program to convert centimeter into meter and kilometer*/

#include<stdio.h>
int
main ()
{
  float a, R;
  // where a is the length in centimeter and R is the result

  printf ("Enter the lenth in centimeter");
  scanf ("%f", &a);
  R = a / 100;
  printf ("The length in meter is %f", R);
  R = a / 100000;
  printf ("The length in kilometer is %f", R);
  return 0;
}
