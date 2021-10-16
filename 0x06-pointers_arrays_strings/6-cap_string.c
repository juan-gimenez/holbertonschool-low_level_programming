#include "main.h"

/**
 * reverse_array - reverses an array
 *@a: array
 *@n: size
 * Return: no return
 */
char *cap_string(char *)
{
char str[];
int i;
for (i = 0; str[i] != NULL; i++)
if (i == 0)
{
if((str[i] >= 'a' && str[i] <= 'z'))
str[i]= str[i] - 32;
continue;
}
if (str[i] == ' ')
{
i++;
