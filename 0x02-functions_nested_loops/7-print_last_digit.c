#include "main.h"

/**
 * print_last_digit - function that prints last digit.
 * Return: c (value of the last digit)
 * @c: integer
 */


int print_last_digit(int c)
{
int digitlast;
digitlast = c % 10;
if (digitlast > 0)
{
_putchar(digitlast);
}
else
{
_putchar(digitlast);
}
return (digitlast);
}
