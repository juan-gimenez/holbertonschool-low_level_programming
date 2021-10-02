#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num[120] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int i;
for (i = 0; i < 11; i++)
if (i < 10)
putchar(num[i]);
else
putchar('\n');
return (0);
}
