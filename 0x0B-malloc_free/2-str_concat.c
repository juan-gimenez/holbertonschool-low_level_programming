#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *Return: pointer to s1+s2
 *@s1: first string
 *@s2: second string
 */
char *str_concat(char *s1, char *s2)
{
int size1;
int size2;
char *conc;
int i = 0;
int j = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (size1 = 0; s1[size1] != '\0'; size1++)
;
for (size2 = 0; s2[size2] != '\0'; size2++)
;
conc = malloc(sizeof(char) * (size1 + size2 + 1));
if (conc == NULL)
{
free(conc);
return ('\0');
}
while (s1[i] != 0)
{
conc[i] = s1[i];
i++;
}
while (s2[j] != 0)
{
conc[i] = s2[j];
i++;
j++;
}
return (conc);
}
