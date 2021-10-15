#include<stdio.h>
int
main ()
{
  float a, b, c;
  printf ("Enter the first number");
  scanf ("%f", &a);
  printf ("Enter the second number");
  scanf ("%f", &b);
  c = a + b;
  printf ("The sum of %f and %f is %f", a, b, c);
  return 0;
}
