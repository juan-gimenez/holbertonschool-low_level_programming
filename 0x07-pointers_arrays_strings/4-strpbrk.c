#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * Return: number of bytes in the initial segment of s
 *@haystack: string
 *@aneedle: second str to find
*/
char *_strstr(char *haystack, char *needle)
{
  int i, j = 0;
  int nTemp = i;
  for(i = 0; i<nStrLen-nStrSubLen; i++)
    {
      nTemp = i;
      for(j=0; j<nStrSubLen; j++)
	{

	  if(str[nTemp]==strSub[j])
	    {
	      if(j==nStrSubLen-1)
		return 1;
	      nTemp++;
	    }
	  else
	    break;
	}
    }
  return (0);
}
