//Program to print anti diagonal elements of array

#include<stdio.h>
int
main ()
{
  int row, sum = 0;
  printf ("Enter the size of matrix\n");
  scanf ("%d", &row);
  int a[row][row], i, j;
  for (i = 0; i < row; i++)
    {
      for (j = 0; j < row; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
  for (i = 0; i < row; i++)
    {
      for (j = 0; j < row; j++)
	{
	  if (i == j)
	    {
	      printf ("%d", a[i][j]);
	      sum += a[i][j];
	    }
	  else
	    printf (" ");
	}
      printf ("\n");
    }
  printf ("Sum of diagonal elements of array is %d", sum);
  return 0;
}
