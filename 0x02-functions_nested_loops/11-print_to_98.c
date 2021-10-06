#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * Return: no return
 * @n: parameter 
*/
void print_to_98(int n)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
while (n < 98)
{
printf("%d, ", n);
n++;
}
if (n == 98)
{
printf("%d", n);
}
putchar('\n');
}
