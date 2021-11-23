#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name.
 * @text_content: content to attach.
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int opn, wrt, numlett = 0;
if (!filename)
return (-1);
opn = open(filename, O_WRONLY | O_APPEND);
if (opn == -1)
return (-1);
if (text_content != NULL)
{
while (text_content[numlett] != 0)
{
wrt = write(fd, text_content, numlett);
if (wrt == -1)
return (-1);
}
close(opn);
return (1);
}
