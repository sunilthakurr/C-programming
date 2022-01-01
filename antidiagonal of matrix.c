//Program to print anti diagonal elements of array

#include<stdio.h>
int
main ()
{
  int row, col;
  printf ("Enter the size of row and column\n");
  scanf ("%d%d", &row, &col);
  int a[row][col], i, j;
  for (i = 0; i < row; i++)
    {
      for (j = 0; j < col; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
  for (i = 0; i < row; i++)
    {
      for (j = 0; j < col; j++)
	{
	  if (i + j == row - 1)
	    printf ("%d", a[i][j]);
	  else
	    printf (" ");
	}
      printf ("\n");
    }
  return 0;
}
