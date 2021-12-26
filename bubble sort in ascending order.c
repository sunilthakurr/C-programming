#include<stdio.h>
int
main ()
{
  int n;
  printf ("Enter the size of array\n");
  scanf ("%d", &n);
  int a[n], i, j, temp;
  printf ("Enter the elements of array\n");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  for (i = 0; i < n - 1; i++)
    {
      int flag = 0;
      for (j = 0; j < n - 1 - i; j++)
	{
	  if (a[j] > a[j + 1])
	    {
	      temp = a[j];
	      a[j] = a[j + 1];
	      a[j + 1] = temp;
	      flag = 1;
	    }
	}
      /* if(flag==0)
         break; */
    }
  printf ("Sorted array is \n");
  for (i = 0; i < n; i++)
    {
      printf ("%d   ", a[i]);
    }
  return 0;
}
