#include "main.h"

/**
 * print_line - prints line n times
 * Return: no return.
 * @n: number of lines
*/
void print_line(int n)
{
int num = 0;
while (num > n)
{
_putchar('_');
num--;
}
if (n < 0)
_putchar(10);
}
