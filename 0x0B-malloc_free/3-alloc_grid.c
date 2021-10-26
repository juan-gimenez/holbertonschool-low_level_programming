#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - eturns a pointer to a 2 dimensional array of integers.
 *Return: array of 2 dimensions
 *@width: width of 2d array
 *@height: height of 2d array
 */
int **alloc_grid(int width, int height)
{
  int i,j;
  int **array;
  if (width == 0 || width < 0)
    {
      return (NULL);
    }
  if (height == 0 || height < 0)
    {
      return (NULL);
    }
  array = malloc(height * sizeof(int *));

  if (array == NULL)
    {
      free(array);
      return (NULL);
    }
  
  for (i = 0; i < width; i++)
    {
      array [i] = malloc(width * sizeof(int));
      if (array[i] == NULL)
	{
	  for(i--; i >= 0; i--)
	  free(array[i]);
	  free(array);
	  return (NULL);
	}
    }
  for (i = 0; i < height; i++)
    {
    for (j = 0; j < width; j++)
      {
      array[i][j] = 0;
      }
    }

  return (array);
}
