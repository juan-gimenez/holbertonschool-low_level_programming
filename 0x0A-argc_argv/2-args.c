#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that prints all arguments it receives..
 *@argc: number of arguments
 *@argv: strings passed
 *Return: 0 success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
while (*argv)
printf("%s\n", *argv++);
return (0);
}
