//program to convert temperature from celsius to farenheit

#include<stdio.h>
int
main ()
{
  float c, f;
  //where c is temperature in celsius and f is the temperature in farenheit

  printf ("Enter the temperature in celsius");
  scanf ("%f", &c);
  f = (9.0 / 5) * c + 32;
  printf ("Temperature in farenheit is %f", f);
  return 0;
}
