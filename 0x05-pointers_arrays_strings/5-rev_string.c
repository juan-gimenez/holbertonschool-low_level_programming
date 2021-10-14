#include "main.h"
/**
 *
 *
 **/
void rev_string(char *s)
{
int strlen = 0;
int i;
int temp;
while (s[strlen] != '\0'){
i++;}
for (i = 0; i < strlen / 2; i++)  
{
temp = s[i];
s[i] = s[strlen - i - 1];
s[strlen - i - 1] = temp;  
_putchar(temp);
}
}
