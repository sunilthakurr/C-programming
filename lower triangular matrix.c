// Program to print lower triangular matrix

#include<stdio.h>
int
main ()
{
  int x;
  printf ("Enter the size of array\n");
  scanf ("%d", &x);
  int a[x][x], i, j;
  for (i = 0; i < x; i++)
    {
      for (j = 0; j < x; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
  for (i = 0; i < x; i++)
    {
      for (j = 0; j < x; j++)
	{
	  if (i + j >= x || i + j == x - 1)
	    printf ("%d", a[i][j]);
	  else
	    printf (" ");
	}
      printf ("\n");
    }
  return 0;
}
