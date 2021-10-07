#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9 (no2-4).
 * Return: no return.
 *ch@: variable of type int
*/
void print_most_numbers(void)
{
int ch;

for (ch = 48; ch < 58; ch++)
{
if (ch != 6 && ch != 9)
{
_putchar(ch);
}
_putchar(10);
}
}
