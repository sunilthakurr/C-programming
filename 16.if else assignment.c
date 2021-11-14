/*16. Write a C program to check whether
the triangle is equilateral, isosceles or 
scalene triangle      */



#include<stdio.h>
int
main ()
{
  float a, b, c;
  printf ("Enter the sides of triangle\n");
  scanf ("%f%f%f", &a, &b, &c);
  if (a == b && b == c)
    printf ("Equilateral triangle");
  else
  +-if (a == b || a == c || b == c)
    printf ("Isosceles triangle");
  else
    printf ("Scalene triangle");
  return 0;

}
