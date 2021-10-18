#include "main.h"
/**
 * _strchr -  locates a character in a string.
 * Return: s or null
 *@s: string to find the char
 *@c: char to find in s
*/
char *_strchr(char *s, char c)
{
for (;; s++)
{
if (*s == c)
return (s);
if (!*s)
return ('\0');
}
return ('\0');
}
