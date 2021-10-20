#include "main.h"

/**
 * _strlen_recursion - return lenght of s.
 * Return: string lenght
 *@s: given string
 */
int _strlen_recursion(char *s)
{
int count = 0;
if (*s == '\0')
{
_putchar(10);
return (0);
}
_strlen_recursion(s + 1);
count++;
return (count);
}
