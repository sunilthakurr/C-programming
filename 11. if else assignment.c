/*Write a C program to input week number and print week day.*/
#include<stdio.h>
int
main ()
{
  int a;
  printf ("Enter the week number from 1 to 7 and week starts with monday\n");
  scanf ("%d", &a);
  if (a == 1)
    printf ("The day is Monday");
  else if (a == 2)
    printf ("The day is Tuesday");
    else
  if (a == 3)
    printf ("The day is Wednesday");
  else if (a == 4)
    printf ("The day is Thursday");
  else if (a == 5)
    printf ("The day is friday");
  else if (a == 6)
    printf ("The day is Saturday");
  else if (a == 7)
    printf ("The day is Sunday");
  else
    printf ("Enter the valid week number");
}
