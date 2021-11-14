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
    printf ("entered character is a lower case alphabet");
  else if (a >= 'A' && a <= 'Z')
    printf ("Entered character is a uppeer case alphabet");
  else
    printf ("Entered character is not alphabet");
  return 0;







}
