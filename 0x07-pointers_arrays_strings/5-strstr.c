#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * Return: pointer to s that matches
 *@haystack: string
 *@needle: sub string to match
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
int count = 0;
 for (i = 0; s[i] != 0; i++)
   {
     for (j = 0; accept[j] != 0; j++)
       {
	 if (s[i] == accept[j])
	   {
	     count++;
	     s = s + i;
	     break;
	   }
       }
     if (count == 1)
       {
	 break;
       }
   }
 if (count < 1)
   {
     s = '\0';
   }
 return (s);
}
