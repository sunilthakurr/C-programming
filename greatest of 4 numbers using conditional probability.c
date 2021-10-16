#include<stdio.h>
int
main ()
{
  int a, b, c, d;
  scanf ("%d%d%d%d", &a, &b, &c, &d);
  a > b && a > c && a > d ? printf ("a is greatest") :
    b > c && b > d ? printf ("b is greatest") :
    c > d ? printf ("c is greatest") : printf ("d is greatest");
  return 0;
}
