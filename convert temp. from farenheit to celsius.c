// convert temperature from farenheit to celsius

#include<stdio.h>
int
main ()
{
  float c, f;
  // where c and f is temperature in celsius and farenheit respectivelu

  printf ("Enter the temperature in farenheit");
  scanf ("%f", &f);
  c = (f - 32) * 5.0 / 9;
  printf ("Temperature in celsius is %f", c);
  return 0;
}
