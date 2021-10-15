//program to find the third angle of a triangle by entering its remaining angles

#include<stdio.h>
#include<math.h>
int
main ()
{
  float a, b, c;
  printf ("Enter the first angle of triangle");
  scanf ("%f", &a);
  printf ("Enter the second angle of triangle");
  scanf ("%f", &b);
  c = 180 - (a + b);
  printf ("The third angle will be %f", c);
  return 0;
}
