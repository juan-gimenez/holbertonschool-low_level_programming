#include "main.h"

/**
 * _strlen - gives the lenght of str
 * Return: zero sucess
 * @s: pointer
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}
