#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * Return: returns the absolute value of c
 */

int _abs(int c)
{
if (c >= 0)/** not necesary to declare variable*/
{
return (c);
}
else
{
return (c * -1);
}
}
