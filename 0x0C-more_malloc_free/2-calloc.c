#include "main.h"
#include <stdlib.h>
/**
 *_calloc -  allocates memory for an array
 *Return: pointer to the allocated memory.
 *@nmemb: elements of the array
 *@size: bytes used
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int x;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (x = 0; x < (nmemb * size); x++)
{
ptr[x] = 0;
}
return (ptr);
}
