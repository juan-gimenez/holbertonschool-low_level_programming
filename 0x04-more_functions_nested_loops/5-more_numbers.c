#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14 x10times
 * Return: no return.
 */
void more_numbers(void)
{
int num;
int numero;
for (num = 0; num < 10; num++)
{
for (numero = 0; numero <= 14; numero++)
{
if (numero >= 10)
{
_putchar((numero / 10) + 48);
}
_putchar((numero % 10) + 48);
}
_putchar('\n');
}
}
