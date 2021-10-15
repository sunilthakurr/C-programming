//program to convert days into years,weeks & days
#include<stdio.h>
#include<math.h>
int
main ()
{
  int a, c, d, e;
  /*where a=no. of days input by user
     c=no. of years
     d=no. of weeks
     e=no. of remaining days */
  printf ("Enter the number of days");
  scanf ("%d", &a);
  c = a / 365;
  d = (a - (c * 365)) / 7;
  e = (a - (c * 365) + (d * 7));
  printf ("The %d days can be written as %d year %d weeks and %d days", a, c,
	  d, e);

  return 0;
}
