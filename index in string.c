/* Program to check the index of input character in string */

#include<stdio.h>
int
main ()
{
  int n, i, count = 0;
  char a[100], ch;
  gets (a);
  printf ("Enter the alphabet whose index you want to know\n");
  scanf ("%c", &ch);
  for (i = 0; a[i] != '\0'; i++)
    {
      if (a[i] == ch)
	count = i;
    }
  printf ("Index of %c is %d", ch, count);
  return 0;

}
