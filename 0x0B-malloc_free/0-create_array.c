#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars
 *Return: ptr
 *@size: size
 *@c: create array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
if (size == 0)
{
return ('\0');
}
ptr = malloc(sizeof(char) * size);
if (ptr)
{
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
}
else
{
return ('\0');
}
return (ptr);
}
