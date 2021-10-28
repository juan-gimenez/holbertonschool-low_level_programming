#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b: amount of memory .
 * Return: pointer.
*/
void *malloc_checked(unsigned int b)
{
char *ptr;
ptr = malloc(b);
if (ptr == 0)
exit(98);
return (ptr);
}
