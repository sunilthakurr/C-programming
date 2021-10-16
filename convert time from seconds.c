/* Write a C program to convet agiven integer(in seconds)
to hours,minutes,and seconds. */


#include<stdio.h>
#include<math.h>
int
main ()
{
  int a, b, c, d;
  /* where a=input time(in seconds)
     b=time in hours
     c=time in minutes
     d=remaining time in seconds */
  printf ("Enter time in seconds");
  scanf ("%d", &a);
  b = a / 3600;
  c = (a - (b * 3600)) / 60;
  d = a - (b * 3600) - (c * 60);
  printf ("%d seconds can be wriiten as %dhours %dminutes and %dseconds", a,
	  b, c, d);
  return 0;
}
