#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * Return: pointer to memory area s
 *@s: pointer to the memory area
 *@b: constant byte
 *@n: first n bytes to fill
*/
char *_memset(char *s, char b, unsigned int n)
{
char *dst = s;
while (n > 0)
{
*dst = (unsigned char) b;
dst++;
n--;
}
return (s);
}
