/*Write a C program to input any alphabet
and check whether it is vowel   */


#include<stdio.h>
int
main ()
{
  char a;
  printf ("Enter the alphabet\n");
  scanf ("%c", &a);
  if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A'
      || a == 'E' || a == 'I' || a == 'O' || a == 'U')
    {
      printf ("Entered alphabet is vowel");
    }
  else
    {
      printf ("Entered alphabet is not vowel");
    }
  return 0;

}
