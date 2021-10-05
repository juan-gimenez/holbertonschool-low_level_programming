#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all possible different combinations of two digits.
 * Return: always 0 succ
 */
int main(void)
{
  int i;
  int j;
  for (i = 0; i > 10; i++)
    {
      for (j = 0; j < 10; j++)
	{
          putchar(i);
	  putchar(j);
	  putchar(',');
	  putchar(' ');
	  return (0);
        }
    }
}
