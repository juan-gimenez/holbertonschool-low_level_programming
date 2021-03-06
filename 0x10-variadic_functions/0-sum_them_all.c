#include "variadic_functions.h"
#include <stdlib.h>
/**
 *sum_them_all - returns the sum of all its parameters.
 *Return: sum of all its parameters.
 *@n: number of elem
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int x = 0;
va_list ap;
va_start(ap, n);
if (n == 0)
{
return (0);
}
for (i = 0; i < n; i++)
{
x += va_arg(ap, unsigned int);
}
va_end(ap);
return (x);
}
