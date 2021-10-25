#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */
int main(int argc, char *argv[])
{
  int i, sum = 0;
  for (i = 1;i < argc; i++)
    i = sum + atoi(argv[i]);
  printf("%d", i);
  return (0);
  
}
