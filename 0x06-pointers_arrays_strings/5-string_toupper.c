#include "main.h"

/**
 * char *string_toupper - changes lowecase to uppcase
 * Returns: 0 success
 */
char *string_toupper(char *str)
{
  int i = 0;
  while ( str[i] != '\0' )
    {
      if ( str[i] <= 'z' && str[i] >= 'a')
	{
	  str[i] = str[i] - 32;
	}
      i++;
    }
  return (str);
}
