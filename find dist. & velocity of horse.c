/* A horse accelerates steadily from rest at 4m/s2 for 3s.
(a). What is its final velocity ?
(b). How far has it travelled ?   */


#include<stdio.h>
#include<math.h>
int
main ()
{
  int u = 0, a = 4, t = 3;
  float v, s;
  v = u + a * t;
  printf ("The final velocity of horse is %f m/s\n", v);
  s = (u * t) + (a * t * t) / 2;
  printf ("Distance travelled by horse is %f m\n", s);
  return 0;
}
