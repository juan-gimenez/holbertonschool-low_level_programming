#include "search_algos.h"
/**
 *linear_search - search a value w linear search
 *@array: array
 *@size: size of array
 *@value: number to search
 *Return: index if success or -1 if it fails
 */

int linear_search(int *array, size_t size, int value)
{
size_t x = 0;

while (i < size)
{
printf("Value checked array[%lu] = [%d]\n", x, array[x]);
if (array[x] == value)
return (x);
x++;
}
return (-1);
}
