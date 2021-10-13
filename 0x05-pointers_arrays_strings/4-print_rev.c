#include "main.h"

/**
 * print_rev - print string in reverse
 * Return: no return
 * @s: pointer
 */
void print_rev(char *s)
{
int a = 0;

while (*(s + i) != '\0')
{
i++;
}
i -= 1;
while (i >= 0)
{
_putchar(*(s + i));
i--;
}
_putchar('\n');
_putchar(10);
}
