#include "main.h"

/**
 * print_line - prints line n times
 * Return: no return.
 * @n: number of lines
*/
void print_line(int n)
{
int i = 0;
while (i <= n)
{
_putchar('_');
i++;
}
_putchar(10);
}
