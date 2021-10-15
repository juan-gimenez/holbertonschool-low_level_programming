#include "main.h"

/**
 * *string_toupper - changes lowecase to uppcase
 * Return: 0 success
 * @str: string
*/
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] <= 'z' && str[i] >= 'a')
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
