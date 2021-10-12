#include "main.h"

/**
 * puts2 - print every other char
 * Return: zero sucess
 * @str: string
 */
void puts2(char *str)
{
int i;
for(i = 0; i < _strlen(str); i+=2)
{
_putchar(str[i]);
}
}
