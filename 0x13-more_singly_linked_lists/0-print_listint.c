#include "lists.h"
/**
 *print_listint - print every int of list
 *@h: listint
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t numnodes = 0;
const  listint_t *tmp = h;

while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
numnodes++;
}
return (numnodes);
}
