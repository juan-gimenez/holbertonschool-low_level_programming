#include "main.h"

/**
 * print_rev - print string in reverse
 * Return: no return
 * @s: pointer
 */
void print_rev(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
for (a--; a >= 0; a--)
_putchar(s[a]);
_putchar(10);
}
