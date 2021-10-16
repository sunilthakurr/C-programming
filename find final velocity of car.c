/* A car is travelling at 30 m/s accelerates steadily at 5 m/s2 for a 
distance of 70m. What is the final velocity of car ? */


#include<stdio.h>
#include<math.h>
int
main ()
{
  int u = 30, a = 5, s = 70;
  float v;
  v = sqrt (pow (u, 2) + (2 * a * s));
  printf ("The final velocity of car is %f", v);
  return 0;

}
