#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 *Return: 0
 *@n: number of elem
 *@separator: string to be printed between numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
  unsigned int i;
  va_list ap;
  va_start(ap, n);
  
   for (i = 0; i < n; i++)
    {
     
      printf("%d", va_arg(ap, unsigned int));
      if (i != n - 1)
	{
	  if (separator == 0)
	    {
	      continue;
	    }
	  printf("%s", separator);
	}
      else
	{
	}
    }
   
    
  printf("\n");
  va_end(ap);

}
