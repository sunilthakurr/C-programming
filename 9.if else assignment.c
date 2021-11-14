/*Write a C program to check whether a 
character is uppercase or lowercase 
alphabet.   */



#include<stdio.h>
int
main ()
{
  char a;
  printf ("Enter the character\n");
  scanf ("%c", &a);
  if (a >= 'a' && a <= 'z')
    {
      printf ("character is in lower case");
    }
  else if (a >= 'A' && a < 'Z')
    {
      printf ("character is in uppercase");
    }
  else
    {
      printf ("Input character is a special character");
    }
  return 0;
}
