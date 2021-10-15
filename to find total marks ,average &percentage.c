/*program to calculate the total,average and percentage 
by entering the marks of five subject*/

#include<stdio.h>
#include<math.h>
int
main ()
{
  float a, b, c, d, e, T, A, P;

  printf ("Enter the marks of first subject");
  scanf ("%f", &a);
  printf ("Enter the marks of second subject");
  scanf ("%f", &b);
  printf ("Enter the marks of third subject");
  scanf ("%f", &c);
  printf ("Enter the marks of fourh subject");
  scanf ("%f", &d);
  printf ("Enter the marks of fourth subject");
  scanf ("%f", &e);

  printf ("The sum of marks of all subject is %f", a + b + c + d + e);
  printf ("The average marks is %f ", (a + b + c + d + e) / 2);
  printf ("The overall percantage is %f", (a + b + c + d + e) / 5);
  return 0;

}
