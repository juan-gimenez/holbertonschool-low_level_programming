

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
  j = 0;
  for (i = 0; s[i];i++)
    buffer[i] = s[i];
      for (i--; i >= 0;i--)
	s[j-i] = buffer[i];
	   _putchar(buffer[i]);
}
