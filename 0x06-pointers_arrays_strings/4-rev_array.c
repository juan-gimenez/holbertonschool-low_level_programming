#include "main.h"

/**
 * reverse_array - reverses an array
 *@a: array
 *@n: size
 * Return: no return
 */
void reverse_array(int *a, int n)
{
int i;

for (i = 0; i < n / 2; i++)
{
int temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
