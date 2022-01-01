//Program to print the sum of two matrix


#include<stdio.h>
int
main ()
{
  int row, col;
  printf ("Enter the size of row and column\n");
  scanf ("%d%d", &row, &col);
  int a[row][col], b[row][col], i, j;
  printf ("Enter the elements of 1st array\n");
  for (i = 0; i < row; i++)
    {
      for (j = 0; j < col; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
  printf ("Enter the elements of 2nd array\n");
  for (i = 0; i < row; i++)
    {
      for (j = 0; j < col; j++)
	{
	  scanf ("%d", &b[i][j]);
	}
    }
  printf ("The resultant matrix is \n");
  for (i = 0; i < row; i++)
    {
      for (j = 0; j < col; j++)
	{
	  printf ("%d ", a[i][j] + b[i][j]);
	}
      printf ("\n");
    }
  return 0;
}
