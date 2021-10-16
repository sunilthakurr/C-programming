/* write a program to find the slope of a line & angle of 
inclination that passes through two points P & Q with 
coordinates(Xp,Yp)and(Xq,Yq) respectively. */


#include<stdio.h>
#include<math.h>
int
main ()
{
  float A, Xp, Yp, Xq, Yq, m;
  printf ("Enter the value of Xp,Yp\n");
  scanf ("%f%f", &Xp, &Yp);
  printf ("Enter the value of Xq,Yq\n");
  scanf ("%f%f", &Xq, &Yq);
  m = (Yq - Yp) / (Xq - Xp);
  printf ("The slope of line is %f\n", m);
  A = atan (m) * 180 / 3.14;	/*we use a before sin cos and tan to find its inverse */
  printf ("%f\n", A);
  return 0;
}
