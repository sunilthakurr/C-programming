/*write a program to calculate the frequency(f) of a given wave with 
wavelength(lemda)& speed(c), where c=lembda.f */


#include<stdio.h>
int
main ()
{
  float a, b;
  int c = 300000;
  printf ("Enter the value of wavelength\n");
  scanf ("%f", &a);
  b = c / a;
  printf ("Frequency of given wave is %f", b);
  return 0;

}
