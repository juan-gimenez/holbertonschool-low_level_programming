#include "main.h"

/**
 * print_rev - print string in reverse
 * Return: no return
 * @s: pointer
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] >= 0)
{_putchar(s[i]);
i++; }
_putchar(10);
}
