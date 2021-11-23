#include "main.h"
/**
 * create_file - creates a file
 *@filename: file
 *@text_content: content of new file
 *Return: 1 if success or -1 if not
 */
int create_file(const char *filename, char *text_content)
{
int openf, writef, index = 0;
char *buff;
if (filename == NULL)
return (-1);
if (text_content == NULL)
{
openf = open(filename, O_CREAT, 0700);
if (openf == -1)
return (-1);
return (1);
}
while (text_content[index] != '\0')
{
index++;
}
buff = malloc(index *sizeof(char));
if (buff == NULL)
return (-1);
openf = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0700);
if (openf == -1)
return (-1);
writef = write(openf, text_content, index);
if (writef == -1)
return (-1);
close(openf);
free(buff);
return (1); /** succes */
}
