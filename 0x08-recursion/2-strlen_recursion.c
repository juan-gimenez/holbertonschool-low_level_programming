#include "main.h"

/**
 * _strlen_recursion - return lenght of s.
 * Return: string lenght
 *@s: given string
 */
int _strlen_recursion(char *s)
{
int i = 0;
if (s[i] == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
