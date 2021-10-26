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
  for (i = 0; str[i] != 0; i++); /** strlen of str */
  nwstr = (char *)malloc(sizeof(char) * (i + 1));
  if (nwstr == NULL)
    {
      return (NULL);
    }
  for (j = 0; i < j; j++)
    {
      str[i] = nwstr[j];
	}
  return (nwstr);
}
