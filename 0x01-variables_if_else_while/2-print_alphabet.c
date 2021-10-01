#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point progr
 * Return: always zero
 */
int main(void)
{
  char abc[30]= "abcdefghijklmnñopqrstuvwxyz";
  int i;
  for(i = 0; i < 26; i++)
    putchar(abc[i]);
return (0);
}
