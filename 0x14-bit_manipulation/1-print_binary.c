#include "main.h"
/**
 *binary_to_usint - converts binary to unsint
 *Return:the converted number, or 0
 *@b: string of 0 and 1 chars
 */
void print_binary(unsigned long int n)
{
unsigned long int i;
for (i = 1 << 31; i > 0; i = i / 2)
(n & i) ? printf("1") : printf("0");
}
