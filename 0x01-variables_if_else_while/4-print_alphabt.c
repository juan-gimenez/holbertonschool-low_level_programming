#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point progr
 * Return: always zero
 */
int main(void)
{
char abc[30] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)

if (i != 5 && i != 17)
putchar(abc[i]);
putchar('\n');
return (0);
}
