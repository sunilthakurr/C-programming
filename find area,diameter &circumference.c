//program to find the diameter,circumference and area of the of the circle by its radius

#include<stdio.h>
int
main ()
{
  float r, D, C, A;
  /*where r is the radius of the circle, D is the diameter , 
     C is circumference and A is its area */
  printf ("Enter the radius of the circle\n");
  scanf ("%f", &r);
  D = 2 * r;
  printf ("The diameter of the circle is %f\n", D);
  C = 2 * 3.14 * r;
  printf ("The circumference of the circle is %f\n", C);
  A = 3.14 * r * r;
  printf ("The area of the circle is %f", A);
  return 0;
}
