
#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that multiplies two numbers
 *@argc: number of arguments
 *@argv: strings passed
 *Return: 0 success
*/
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
return (0);
}
