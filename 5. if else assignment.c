/* Write a C program to check whether
a number is even or odd.  */

#include<stdio.h>
int
main ()
{
  int a;
  printf ("Enter the number\n");
  scanf ("%d", &a);
  if (a % 2 == 0)
    {
      printf ("Number is even");
    }
  else
    {
      printf ("Number is odd");
    }
  return 0;
}
