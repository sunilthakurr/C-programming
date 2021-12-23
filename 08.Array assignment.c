#include<stdio.h>
int
main ()
{
  int a[500], i, k = 0;
  printf ("Enter the elements of array\n");
  for (i = 0; i < 500; i++)
    {
      scanf ("%d", &a[i]);
      if (a[i] > 60)
	k++;
    }
  printf ("Total number of students score above 60 is : %d", k);
  return 0;

}
