#include "main.h"

/**
 * _puts_recursion - returns a string using recursion.
 * Return: string
 *@s: given string
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
return (0);
_putchar(*s);
_puts_recursion(s + 1);
}
_putchar(10);
}
