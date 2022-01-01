/*Program to check wheter a string is pallandrome or not */

#include<stdio.h>
#include<string.h>
int
main ()
{
  int n, i, count = 0;
  char a[100];
  printf ("Enter the string\n");
  gets (a);
  n = strlen (a);
  for (i = 0; i < n / 2; i++)
    {
      if (a[i] == a[n - 1 - i])
	count = 1;
      else
	break;
    }
  if (count == 1)
    printf ("Entered string is pallandrome");
  else
    printf ("Entered string is not pallandrome");
  return 0;
}
