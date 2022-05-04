#include "search_algos.h"

/**
 * binary_search - search using binary_search
 * @array: array
 * @size: size of array
 * @value: number
 * Return: number and index
 */
int binary_search(int *array, size_t size, int value)
{
int y = 0;
int r = size - 1;
int middel = (y + r) / 2;
int x;

/**
 * array is NULL, your function must return -1
*/

if (array == NULL)
return (-1);

while (y <= r)
{
printf("Searching in array: ");
for (x = y; x <= r - 1; x++)
printf("%d, ", array[x]);
printf("%d\n", array[x]);
if (value == array[middel])
return (middel);
else if (value < array[middel])
r = middel - 1;
else
y = middel + 1;
middel = (y + r) / 2;
}
return (-1);
}
