//program to find the area of a square
#include<stdio.h>
int
main ()
{
  float a, b;			//a is side of square and b is the area of square
  printf ("Enter the side of square");
  scanf ("%f", &a);
  b = a * a;
  printf ("Area of square is %f", b);
  return 0;
}
