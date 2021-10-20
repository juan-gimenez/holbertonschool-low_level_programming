#include "main.h"

/**
 * _print_rev_recursion - returns a string in reverse.
 * Return: string reversed
 *@s: given string
 */
void _print_rev_recursion(char *s)
{
int i = 0;
if (s[i] != 0)
{
_print_rev_recursion(s[i + 1]);
_putchar(s[i]);
else
{
_putchar(10);
}
}
}
