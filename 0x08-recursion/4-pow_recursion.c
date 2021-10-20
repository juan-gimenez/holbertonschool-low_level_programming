#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y.
 * Return: value of x to the power of y
 *@x: value to raise
 *@y: value to power @x
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y < 0)
return (-1);
else
return (_pow_recursion(x, y - 1) * x);
}
