#include <stdlib.h>
#include <stdio.h>
/**
 *contain the 5 following functions
 *5 operation functions
 */

/**
 *op_add - addition of 2 ints
 *Return: addition
 */
int op_add(int a, int b)
{
  return (a + b);
}
/**
 *op_sub - difference between a + b
 *Return: difference
 */
int op_sub(int a, int b)
{
  return (a - b);
  
}
/**
 *op_mul - product between a + b
 *Return: product of a and b
 */
int op_mul(int a, int b)
{
  return (a * b);
}
/**
 *op_div - division between a + b
 *Return: result of division
 */
int op_div(int a, int b)
{
  if (b == 0)
    {
      printf("Error\n");
      exit (100);
    }
  return (a / b);
}
/**
 *op_mod - remainder of the division of a by b
 *Return: result of division
 */
int op_mod(int a, int b)
{
  if (b == 0)
    {
      printf("Error\n");
      exit (100);
    }
  return (a % b);
}
