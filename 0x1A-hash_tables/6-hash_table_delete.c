#include "hash_tables.h"
/**
 *hash_table_delete -Delete hash table
 *@ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *hnode1, *hnode2;
unsigned int x;

if (ht == NULL)
{
return;
}
x = 0;
while (x < ht->size)
{
hnode1 = ht->array[x];
while (hnode1)
{
hnode2 = hnode1->next;
free(hnode1->key);
free(hnode1->value);
free(hnode1);
hnode1 = hnode2;
}
x++;
}
free(ht->array);
free(ht);
}
