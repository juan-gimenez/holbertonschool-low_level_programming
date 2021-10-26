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
int **array;
array = malloc(width * sizeof(int *));
for(i = 0; i < width; i++)
{
array[i] = malloc(height * sizeof(int));
}
return (array);
}
