/*WAP to input an array of N number of elements and
find the largest element in that array.  */

#include<stdio.h>
int
main ()
{
  int size;
  printf ("Enter the size of array\n");
  scanf ("%d", &size);
  int a[size], max, i;
  printf ("Enter the elements of array\n");
  for (i = 0; i < size; i++)
    {
      scanf ("%d", &a[i]);
      max = a[0];
    }
  for (i = 0; i < size; i++)
    {
      if (a[i] > max)
	max = a[i];
    }
  printf ("Largest element in array is : %d", max);
  return 0;
}
