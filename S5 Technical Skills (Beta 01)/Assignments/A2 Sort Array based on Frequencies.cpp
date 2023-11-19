#include <stdio.h>
#define MAX 256
int main ()
{
  int a[MAX][2], b[MAX][2];
  int k = 0, n, temp, count;
 

  scanf ("%d", &n);
 
 
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &a[i][0]);
      a[i][1] = 0;
    }
  
  for (int i = 0; i < n; i++)
    {
      if (a[i][1])
	continue;
      count = 1;
      for (int j = i + 1; j < n; j++)
	{
	  if (a[i][0] == a[j][0])
	    {
	      a[j][1] = 1;
	      count++;
	    }
	}
      b[k][0] = a[i][0];
      b[k][1] = count;
      k++;
    }
  n = k;
 
  for (int i = 0; i < n - 1; i++)
    {
      temp = b[i][1];
      for (int j = i + 1; j < n; j++)
	{
	  if (temp < b[j][1])
	    {
	      temp = b[j][1];
	      b[j][1] = b[i][1];
	      b[i][1] = temp;

	      temp = b[j][0];
	      b[j][0] = b[i][0];
	      b[i][0] = temp;
	    }
	}
    }
  
  printf ("\nSorted Array Elements based on their frequency:\n");
  printf (" Elements   Frequency\n");
  for (int i = 0; i < n; i++)
    {
      printf ("   %d          %d    \n", b[i][0], b[i][1]);
    }
  
  printf ("\n Sorted Array based on its frequency:\n");
  for (int i = 0; i < n; i++)
    {
      while (b[i][1] != 0)
	{
	  printf (" %d  ", b[i][0]);
	  b[i][1]--;
	}
    }
  return 0;
}