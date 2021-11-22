#include "main.h"
/**
 *read_textfile - reads a text file and prints it
 *@filename: file
 *@letters: number of letters it should read and print
 *Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int file = 0;
ssize_t nreadb, nwriteb;
if (!filename)
{
return (0);
}
file = open(filename, 0_RDONLY);
if (file == -1)
return (0);
buffer = malloc(sizeof(char) * (letters));
if (!buffer)
return (0);
nreadb = read(file, buffer, letters);
nwriteb = write(STDOUT_FILENO, buffer, nrd);
free(buffer);
close(file);
return (nwriteb);
}
