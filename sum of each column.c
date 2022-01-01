//Program to print the sum of each column of matrix

#include<stdio.h>
int
main ()
{
  int row, col;
  printf ("Enter the row and column size of array\n");
  scanf ("%d%d", &row, &col);
  int a[row][col], i, j, sum = 0;
  for (i = 0; i < row; i++)
    {
      for (j = 0; j < col; j++)
	{
	  printf ("Enter the elements of %d row and %d column: ", i, j);
	  scanf ("%d", &a[i][j]);
	}
    }
  for (j = 0; j < col; j++)
    {
      for (i = 0; i < row; i++)
	{
	  sum += a[i][j];
	}
      printf ("Sum of %d column is %d \n", j, sum);
    }
  return 0;
}
