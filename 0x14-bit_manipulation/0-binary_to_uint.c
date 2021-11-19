#include "main.h"
/**
 *binary_to_uint - converts binary to unsint
 *Return:the converted number, or 0
 *@b: string of 0 and 1 chars
 */
unsigned int binary_to_uint(const char *b)
{
int index = 0;
unsigned int number = 0;
if (!b)
return (number);
while (b[index])
{
if (b[index] == '1' || b[index] == '0')
{
number *= 2;
number += (b[index] == '1');
index++;
}
else
return (0);
}
return (number);
}
