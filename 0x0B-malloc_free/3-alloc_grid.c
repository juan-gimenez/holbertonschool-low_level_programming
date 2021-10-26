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
int i;
int **array;
if (width == 0 || width < 0)
{
return (NULL);
}
if (height == 0 || height < 0)
{
return (NULL);
}
array = malloc(width * sizeof(int));
for (i = 0; i < width; i++)
{
array [i] = malloc(height * sizeof(int *));
if (array[i] == NULL)
{
return (NULL);
for (i = 0; i < width; i++)
free(array[i]);
free(array);
}
}
return (array);
}
