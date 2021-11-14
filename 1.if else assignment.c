/* Write a C program to find maximum between two numbers*/

#include<stdio.h>
int
main ()
{
  int a, b;
  printf ("Enter two numbers\n");
  scanf ("%d%d", &a, &b);
  if (a > b)
    {
      printf ("a is greater");
    }
  else
    {
      printf ("b is greater");
    }
  return 0;

}
