#include "main.h"

/**
 * _memcpy - copies memory area
 * Return: pointer to memory area s
 *@dest: dest str
 *@src: string
 *@n: first n bytes to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
