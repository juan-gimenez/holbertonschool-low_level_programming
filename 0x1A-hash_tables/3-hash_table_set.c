#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the h table
 * @ht: pointer to h table
 * @key: is the key
 * @value: is the value
 * Return: 1 sucees or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int i = 0;
unsigned long int size = 0;
hash_node_t *newnde;

if (ht == NULL || key == NULL || value == NULL)
return (0); /** return failure **/
size = ht->size;
i = key_index((unsigned char *)key, size);
if (ht->array[i] && strcmp(key, ht->array[i]->key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = strdup(value);
return (1); /** suceed **/
}
newnde = malloc(sizeof(hash_node_t));
if (!newnde) /** malloc fail **/
return (0); /** fail **/
newnde->key = strdup(key);
newnde->value = strdup(value);
newnde->next = ht->array[i];
ht->array[i] = newnde;
return (1); /** suceed **/
}
