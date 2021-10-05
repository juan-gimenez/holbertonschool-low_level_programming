#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: always zero
 */
void print_alphabet_x10(void)
{
int abc;
int numveces;
for (numveces = 0; numveces < 10; numveces++)
{
for (abc = 97; abc < 123; abc++)
{
_putchar(abc);
}
_putchar('\n');
}
}
