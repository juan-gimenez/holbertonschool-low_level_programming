#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 *Return: 0
 *@n: number of strings
 *@separator: string to be printed between strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
char * str = 0;
va_start(ap, n);
if (n > 0)
{
for (i = 0; i < n; i++)
{
str = va_arg(ap, char*);
if (str == 0)
{
printf("(nil)");
}
printf("%s", str);
if (i != n - 1 && separator != NULL)
{	    
printf("%s", separator);
}      
}
}
printf("\n");
va_end(ap);
}
