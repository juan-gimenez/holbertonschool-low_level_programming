#include "main.h"

/**
 * _print_rev_recursion - returns a string in reverse.
 * Return: string reversed
 *@s: given string
 */
void _print_rev_recursion(char *s)
{
if (*s == 0)
return;
_print_rev_recursion(s + 1);
_putchar(*s);
}
