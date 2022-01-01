//Program to find the sum of each row of matrix.


#include<stdio.h>
int
main ()
{
  int n, o;
  printf ("Enter the row and column size of array\n");
  scanf ("%d%d", &n, &o);
  int a[n][o], i, j, sum = 0;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < o; j++)
	{
	  printf ("Enter the element of %d row and %d column: ", i, j);
	  scanf ("%d", &a[i][j]);
	}
    }
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  sum += a[i][j];
	}
      printf ("sum of %d row is %d\n", i, sum);

    }
  return 0;

}
