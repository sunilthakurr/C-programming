/* suppose there is presiden electin in US and there are 2
candidates and Trump and Biden. Input the votes of both 
the candidates in 10 states of US and calculate state
wise and overall winner . */


#include<stdio.h>
int
main ()
{
  int a[10], b[10], i, x = 0, y = 0;
  for (i = 0; i < 10; i++)
    {
      printf ("Enter the votes of trump and biden in %d state", i + 1);
      scanf ("%d %d", &a[i], &b[i]);
      if (a[i] > b[i])
	{
	  printf ("Trump is winner in %d state", i + 1);
	  x++;
	}
      else if (a[i] < b[i])
	{
	  printf ("Biden is winner in %d state", i + 1);
	  y++;
	}
      else
	printf ("Both Trump and Biden has same vote\n");

    }
  if (x > y)
    printf ("Trump is overall winner\n");
  else if (x < y)
    printf ("Biden is overall winner\n");
  else
    printf ("Both Trump and Biden win the same number of seats");
}
