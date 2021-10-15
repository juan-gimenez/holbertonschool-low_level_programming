#include "main.h"

/**
 * _strncat - concatenates two strings
 * Return: dest
 *@dest: string given
 *@src: string second
 *@n: number
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0';)
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
