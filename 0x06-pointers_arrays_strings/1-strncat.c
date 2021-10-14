#include "main.h"

/**
 * _strcat - concatenates two strings
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
 int i;
 int j;
 for (i = 0; dest[i] != '\0'; i++);
 for (j = 0; src[j]  <= n; j++) {
   dest[i+j] = src[j];
}
 if (
dest[i+j] = '\0';
return (dest);
}
