//program to find the perimeter of rectangle by its length and breadth
#include<stdio.h>
int
main ()
{
  float a, b, P;
  //a=length,b=breadth and P is is the perimeter 
  printf ("Enter the length of rectangle");
  scanf ("%f", &a);
  printf ("Enter the breadth of rectangle");
  scanf ("%f", &b);
  P = 2 * (a + b);
  printf ("The perimeter of rectangle is %f", P);
  return 0;
}
