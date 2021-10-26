#include "main.h"
#include <stdlib.h>
/**
 *_strdup - strdup function
 *Return: pointer to a new string.
 *@str: string to copy
*/
char *_strdup(char *str)
{
char *nwstr;
int i;
int j;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
; /** strlen of str */
nwstr = (char *)malloc(sizeof(char) * (i + 1));
if (nwstr == NULL)
{
return (NULL);
}
for (j = 0; j <= i; j++)
{
nwstr[j] = str[j];
}
return (nwstr);
}
