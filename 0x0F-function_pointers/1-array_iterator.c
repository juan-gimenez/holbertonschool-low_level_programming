#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 *@array: array to execute
 *@size: size of array
 *@action: functiony
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x = 0; /** if int not comparable*/

if (action && array)
{
while (x < size)
{
action(array[x]);
x++;
}
}
}
