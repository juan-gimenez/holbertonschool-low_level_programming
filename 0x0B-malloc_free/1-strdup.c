#include "main.h"
#include <stdlib.h>
/**
 *_strdup - strdup function
 *Return: pointer to a new string.
 */
char *_strdup(char *str)
{
  char *nwstr;
  int i;
  int j;
  if (str == NULL)
    {
      return ('\0');
    }
  for (i = 0; i < nwstr[i]; i++)
    {
      nwstr = malloc(sizeof(char) * i);
      if (str)
	{
	  for (j = 0; j < str[j]; j++)
	    {
	      nwstr[i] = str[j];
	    }
	}
    }
  return (nwstr);
}
