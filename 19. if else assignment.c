/* 19.   Write a C program to input marks of five 
subjects Physics, Chemistry, Biology,Mathematics 
and Computer. Calculate percentage and grade 
according to
following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F  */

#include<stdio.h>
int
main ()
{
  float a, b, c, d, e, x;
  printf
    ("Enter the marks out of 100 in Physics,Chemistry,Biology,Mathematics and Computer\n");
  scanf ("%f%f%f%f%f", &a, &b, &c, &d, &e);
  x = (a + b + c + d + e) / 5;
  if (x >= 90)
    {
      printf ("Grade A");
    }

  else if (x >= 80)
    {
      printf ("Grade B");
    }
  else if (x >= 70)
    {
      printf ("Grade C");
    }
  else if (x >= 60)
    {
      printf ("Grade D");
    }
  else if (x >= 50)
    {
      printf ("Grade E");
    }
  else if (x >= 40)
    {
      printf ("Grade F");
    }
  return 0;






}
