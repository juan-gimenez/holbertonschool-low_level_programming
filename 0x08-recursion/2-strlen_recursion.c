#include "main.h"

/**
 * _strlen_recursion - return lenght of s.
 * Return: string lenght
 *@s: given string
 */
int _strlen_recursion(char *s)
{
  {
    if (*s == '\0')
      {
	_putchar(10);
      }
    _putchar(*s);
    _puts_recursion(s + 1);
  }
}
