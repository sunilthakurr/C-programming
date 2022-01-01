//WAP to calculate the size of string.

#include<stdio.h>
#include<stdio.h>
int
main ()
{
  int count = 0;
  char x[100];
  gets (x);
  count = strlen (x);
  printf ("Number of character in string is %d", count);
  return 0;
}
