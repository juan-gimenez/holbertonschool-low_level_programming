#include "main.h"

/**
 * print_rev - print string in reverse
 * Return: no return
 * @s: pointer
 */
void print_rev(char *s)
{
int len = 0;
int i;
while (s[i++])
len++;
for (i = len - 1; i >= 0; i--)
_putchar(s[i]);
}
