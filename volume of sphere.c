#include<stdio.h>
int
main ()
{
  float r, V;
  printf ("Enter the radius of the sphere");
  scanf ("%f", &r);
  V = (4.0 / 3) * 3.14 * r * r * r;
  printf ("The volume of the sphere is %f", V);
  return 0;
}
