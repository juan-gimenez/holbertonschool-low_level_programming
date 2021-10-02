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
{
if (i != 4 && i != 16)
{
putchar(abc[i]);
}
}
putchar('\n');
return (0);
}
