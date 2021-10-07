#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9 (no2-4).
 * Return: no return.
 * i@: variable of type int
*/
void print_most_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
{
if (i != 2 && i != 4)
_putchar(i);
}
_putchar('\n');
}
