#include <stdio.h>

/**
 * main - entry point
 * Return: alwys 0
 */
int main(void)
{
int num;
for (num = 48; num < 58; num++)
{
putchar(num);
if (num != 57)
{
putchar(44);
putchar(32);
}
else
{
putchar('\n');
}
}
return (0);
}
