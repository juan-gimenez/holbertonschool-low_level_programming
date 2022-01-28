#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int x = 0;
hash_node_t *h;
char *ch;

if (ht == NULL)
return;
printf("{");
ch = "";
for (x = 0; x < ht->size; x++)
{
h = ht->array[x];
while (h != NULL)
{
printf("%s'%s': '%s'", ch, h->key, h->value);
ch = ", ";
h = h->next;
}
}
printf("}\n");
}
