#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 *@size: size 
 *@c: create array
 */
char *create_array(unsigned int size, char c)
{
int i;
  if (size == 0)
    {
      return ('\0');
    }
  int *ptr = malloc(sizeof(c) * size);
  if (ptr)
    {
      for(i = 0; i < size; i++)
	c[i] = ptr[i];
    }
  else
    {
      return ('\0');
    }
  

}
