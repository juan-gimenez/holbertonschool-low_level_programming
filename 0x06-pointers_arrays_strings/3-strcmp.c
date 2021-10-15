#include "main.h"

/**
 *_strcmp - compares two strings
 * Return: 0 success
 * @s1: first string
 * @s2: second string
*/
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
break;
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0); /** if s1 and s2 equal return 0 */
}
else
{
return (*s1 - *s2);
}
}
