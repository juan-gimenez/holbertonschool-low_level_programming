#include "lists.h"
/**
 *listint_len - returns num of elements
 *@h: listint
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
unsigned int numnodes = 0;
const  listint_t *tmp = h;

while (tmp != NULL)
{
tmp = tmp->next;
numnodes++;
}
return (numnodes);
}
