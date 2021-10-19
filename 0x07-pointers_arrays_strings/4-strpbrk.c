#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * Return: pointer to s that matches
 *@s: string to find
 *@accept: string to match
 */
char *_strpbrk(char *s, char *accept)
{
  int a;
  int b;
  int cont = 0;
  a = 0;
  while (s[a] != '\0')
    {
      b = 0;
      while (accept[b] != '\0')
	{
	  if (s[a] == accept[b])
	    {
              cont++;
	      s = s + a;
	      break;
	    }
	  b++;
	}
      if (accept[b] == '\0')
	break;
      a++;
    }
  return (s);
}
