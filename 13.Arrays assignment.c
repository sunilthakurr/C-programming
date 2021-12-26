/*WAP to find an array of N number of distinct elements. Input an element you want to search and find it. If found then print
the position of that element otherwise print not found. */


#include<stdio.h>
int
main ()
{
  int A, n, flag = 0, x;
  printf ("Enter the size of array\n");
  scanf ("%d", &n);
  printf ("Enter the elements of array\n");
  int a[n], i;
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  printf ("Enter the elements you want to search\n");
  scanf ("%d", &A);
  for (i = 0; i < n; i++)
    {
      flag++;
      if (a[i] == A)
	{
	  x = 1;
	  printf ("The elements you want to search is at %d position", flag);
	  break;
	}
    }
  if (x != 1)
    printf ("Not found");
  return 0;
}
