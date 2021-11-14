/* 06. Write a C program to check whether
   a year is leap year or not. */

#include<stdio.h>
int
main ()
{
  int a;
  printf ("Enter the year\n");
  scanf ("%d", &a);
  if (a % 400 == 0)
    {
      printf ("Year is leap");
    }
  else if (a % 100 == 0)
    {
      printf ("Year is not leap");
    }
  else if (a % 4 == 0)
    {
      printf ("Year is leap");
    }
  else
    {
      printf ("Year is not leap");
    }
  return 0;
}
