#include "main.h"

/**
 * puts2 - print every other char
 * Return: zero sucess
 * @str: string
 */
void puts2(char *str)
{
int i;
for(i = 0; i >= 0; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
else
{
_putchar(10);
}
}
