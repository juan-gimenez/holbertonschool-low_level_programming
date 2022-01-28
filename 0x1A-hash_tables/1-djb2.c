#include "hash_tables.h"

/**
 * hash_djb2 - djb2 algorithm
 * @str: string
 * Return: hash value
 **/

unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hashtable;
int i;

hashtable = 5381;
while ((i = *str++))
{
hashtable = ((hashtable << 5) + hashtable) +i;
}
return (hashtable);
}
