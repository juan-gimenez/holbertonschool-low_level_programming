#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point progr
 * Return: always zero
 */
int main(void)
{
char abc[60] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWKYZ";
int i;
for (i = 0; i < 52; i++)
putchar(abc[i]);
putchar('\n');
return (0);
}
