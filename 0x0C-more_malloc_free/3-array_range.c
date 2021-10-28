#include "main.h"
#include <stdlib.h>
/**
 *array_range - function that creates an array of integers.
 *@min: value to include in array
 *@max: max value of array ints
 *Return: pointer to the newly created array
 * ordered from min to max
*/
int *array_range(int min, int max)
{
int *arrayofint;
int x = 0;
if (min > max)
{
return (NULL);
}
arrayofint = malloc(sizeof(*arrayofint) * ((max - min) + 1));
if (!arrayofint)
{
return (NULL);
}
while  (min <= max)
{
arrayofint[x] = min;
x++;
min++;
}
return (arrayofint);
}
