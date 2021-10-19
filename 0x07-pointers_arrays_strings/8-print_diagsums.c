#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
  int i;
  int j;
  int sum;
  for(i = 0; i < size; i++)
        {
	  for(j = 0; j < size; j++)
	    if(i == j || i + j == size - 1)
 	    {
	      sum = sum + a[i][j];
	    }
	}
    }
}
