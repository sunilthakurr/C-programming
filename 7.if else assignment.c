/* Write a C program to check whether 
a character is alphabet or not.  */


#include<stdio.h>
int
main ()
{
  char a;
  printf ("Enter the character\n");
  scanf ("%c", &a);
  if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z')
    {
      printf ("Enter character is alphabet");
    }
  else
    {
      printf ("Enter character is not alphabet");
    }
  return 0;
}
