#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point progr
 * Return: always zero
 */
int main(void)
{
char abc[30] = "zyxwvutsrqponmlkjihgfedcba";
int i;
for (i = 0; i < 26; i++)
{
if (i < 27)
{
putchar(abc[i]);
}
}
putchar('\n');
return (0);
}
