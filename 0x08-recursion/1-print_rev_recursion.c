#include "main.h"

/**
 * _print_rev_recursion - returns a string in reverse.
 * Return: string reversed
 *@s: given string
 */
void _print_rev_recursion(char *s)
{
int index = 0;
if (s[index] != '\0')
{
_print_rev_recursion(*s[index + 1]);
_putchar(s[index]);
}
_putchar(10);
}
