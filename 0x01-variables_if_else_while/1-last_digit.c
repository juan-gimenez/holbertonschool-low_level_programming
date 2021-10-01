#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
  int n;
  int lastnum;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  lastnum= n%10;
  printf("Last digit of");
    if (lastnum > 5)
      printf("and is greater than 5");
    else if (lastnum == 0)
      printf("and is 0");
    else if (lastnum < 6 && lastnum != 0)
      printf("and is less than 6 and not 0");
  return (0);
}
