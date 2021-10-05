#include "main.h"
/**
 * _isalpha - if  c is alphabetic return 1 else 0
 * Return: 1 or 0
 * @c: integer
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
