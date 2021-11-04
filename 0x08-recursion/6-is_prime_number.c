#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer is a prime number, otherwise return 0.
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 *@n: given number
 */
int is_prime_number(int n)
{

    if(i == 1)
      return 1;
    else
      {
	if(n%i == 0)
	  return 0;
	else
	  isPrime(n, i-1);
      }
}
