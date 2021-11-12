 #include "lists.h"
#include <stdlib.h>
/**
 *list_len - number of elements in a linked list_t list.
 *@h: list
 *Return: number of nodes
 */
size_t list_len(const list_t *h)
{
unsigned int numnodes = 0;
if (h)
while (h != NULL)
{
h = h->next;
numnodes++;
}
return (numnodes);
}
