#include <stdio.h>

/**
 * main - entry point
 * Return: alwys 0
 */
int main(void)
{
  int num;
  for (num = 48; num < 58; num++)
    if ( num <= 57)
      {
	putchar(num);
	putchar(44);
	putchar(32);
      }
    else
      {
	putchar('\n');
      }
  return (0);
}
