/* Write a program to convert a given integer(in days) to dyears
,months and days. Assume that all months have 30days and all 
years have 365days. */



#include<stdio.h>
#include<math.h>
int
main ()
{
  int a, b, c, d;
  /* Where a=no. of days (input)
     b=no. of years
     c=n0. of months
     d=no. of remaining days  */
  printf ("Enter total number of days");
  scanf ("%d", &a);
  b = a / 365;
  c = (a - (b * 365)) / 30;
  d = (a - (b * 365) - (c * 30));
  printf ("%d days can be written as %dyears %dmonths and %ddays", a, b, c,
	  d);
  return 0;
}
