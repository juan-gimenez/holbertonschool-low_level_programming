#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  char charinc;
  int intinc;
  long int longinc;
  long long int longintinc;
  float floatinc;
  // sizeof evaluates the size of a variable
  printf("Size of a char: %zu byte(s)\n", sizeof(charinc));
  printf("Size of an int: %zu byte(s)\n", sizeof(intinc));
  printf("Size of a long int: %zu byte(s)\n", sizeof(longinc));
  printf("Size of a long long int: %zu byte(s)\n", sizeof(longintinc));
  printf("Size of a float: %zu byte(s)\n", sizeof((floatinc));
return (0);
}
