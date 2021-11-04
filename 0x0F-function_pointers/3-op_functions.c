#include <stdlib.h>
#include <stdio.h>
/**
 *3-op_functions - contain the 5 following functions
 *Return: 0,5 operation functions
 */

/**
 *op_sub - sum between a & b
 *Return: addition
 *@a: variable to add
 *@b: variable to add
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - difference between a & b
 *Return: difference
 *@a: variable to -
 *@b: variable to +
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - product between a & b
 *Return: product of a and b
 *@a: variable to mul
 *@b: variable to mul
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 *op_div - division between a and b
 *Return: result of division
 *@a: variable to divide
 *@b: variable to divide
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 *op_mod - remainder of the division of a by b
 *Return: result of division
 *@a: variable to divide
 *@b: variable to divide
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
