/*program to find the area of triangle 
  by base and height of triangle enterd 
  by user*/
#include<stdio.h>
#include<math.h>
int
main ()
{
  float b, h, A;
  printf ("Enter the base of triangle");
  scanf ("%f", &b);
  printf ("Enter the height of triangle");
  scanf ("%f", &h);

  printf ("The area of triangle is %f", 0.5 * b * h);
  return 0;
}
