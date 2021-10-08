#include "main.h"
/**
 * print_square - prints a square.
 * @size: size of the square
 * Return: 0 
 */
void print_square(int size)
{
int a;
int b;
if (size > 0)
{
for (a = 0; size > a; a++)
{
for (b = 0; size > b; b++)
{
_putchar(35);
}
}
}
else
{
_putchar(10);
}
