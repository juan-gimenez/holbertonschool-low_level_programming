#include "main.h"

/**
 * swap_int - swap top values
 * Returns: zero suces
 *@a: pointer
 *@b: pointer
*/
void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
