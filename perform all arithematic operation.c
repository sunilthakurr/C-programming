//program to perform all arithematic operation using two numbers
#include<stdio.h>
int
main ()
{
  float a, b, result;
  printf ("Enter the first number");
  scanf ("%f", &a);
  printf ("Enter the second number");
  scanf ("%f", &b);

  result = a + b;
  printf ("The sum of %f and %f is %f", a, b, result);
  result = a - b;
  printf ("The difference of %f and %f is %f", a, b, result);
  result = a * b;
  printf ("The product of %f and %f is %f", a, b, result);
  result = a / b;
  printf ("The value of %f by %f is %f", a, b, result);
  return 0;

}
