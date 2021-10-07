#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9 (no2-4).
 * Return: no return.
 * i@: variable of type int
*/
void print_most_numbers(void)
{
int i;

for (i = 48; i <= 57; i++)
{
if (i != 50 && i != 52)
_putchar(i);
}
_putchar('\n');
}
