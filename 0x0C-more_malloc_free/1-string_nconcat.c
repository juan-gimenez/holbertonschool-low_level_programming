#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat -function that concatenates two strings.
 *@s1: first string
 *@2: second string 
 *@n: bytes to take from s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *str;
  unsigned int lenghts1, lenghts2;
  while (s1 != '\0')
    {
      lenghts1++;
    }
  while (s2 != '\0')
    {
      lenghts2++;
    }
  if (n >= lenghts2)
    {
      n = s2;
    }
  return (str);
}
    











}
