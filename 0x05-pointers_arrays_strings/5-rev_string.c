#include "main.h"
/**
 *
 *
 **/
void rev_string(char *s)
{
  char buffer[500];
  int i;
  int j;
  for (i = 0; str[i];i++)
    buffer[i] = str[i];
      for (i--; i >= 0;i--)
	str[j-i] = buffer[i];
	   _putchar(buffer[i]);
}
