#include <stdio.h>
#include <time.h>
/**
 *main - if positive neg or 0
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
printf("%d is positive", n);
else if (n < 0)
printf("%d is negative", n);
else
printf("%d is cero", n);
return (0);
}
