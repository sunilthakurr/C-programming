 /* 17. Write a C program to calculate profit or loss */


#include<stdio.h>
int
main ()
{
  float a, b, c;
  printf ("Enter the cost price and selling price of product\n");
  scanf ("%f%f", &a, &b);
  if (a > b)
    {
      c = a - b;
      printf ("You are in loss of %f", c);
    }
  else if (a < b)
    {
      c = b - a;
      printf ("You are in profit of %f", c);
    }
  else
    {
      printf ("You are neither in profit nor in loss");
    }
  return 0;

}
