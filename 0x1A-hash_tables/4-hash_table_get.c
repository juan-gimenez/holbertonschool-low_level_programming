#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is the hash table to look into
 * @key: is the key
 * Return: value, or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int x = 0;
if (!key)
return (NULL);
if (!ht)
return (NULL);
x = key_index((unsigned char *)key, ht->size); /** find key index **/
if (ht->array[x] == NULL)
return (NULL);
while (ht->array[x])
{
if (strcmp(ht->array[x]->key, key) == 0)
return (ht->array[x]->value);
ht->array[x] = ht->array[x]->next;
}
return (NULL);
}
