#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 *@array: array
 *@size: size of array
 *@cmp: compares
 *Return: -1 if fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a = 0;
if (size <= 0)
{
return (-1);
}
if (array != 0 && cmp != 0)
{
while (a < size)
{
if (cmp(array[a]))
{
return (a);
}
a++;
}
}
return (-1);
}
