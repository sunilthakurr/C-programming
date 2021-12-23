/*WAP to input an array of N number of elements and
find the smallest element in that array.  */

#include<stdio.h>
int
main ()
{
  int size;
  printf ("Enter the size of array\n");
  scanf ("%d", &size);
  int a[size], min, i;
  printf ("Enter the elements of array\n");
  for (i = 0; i < size; i++)
    {
      scanf ("%d", &a[i]);
      min = a[0];
    }
  for (i = 0; i < size; i++)
    {
      if (a[i] < min)
	min = a[i];
    }
  printf ("Smallest element in array is : %d", min);
  return 0;
}
