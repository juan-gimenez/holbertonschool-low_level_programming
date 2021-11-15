#include "lists.h"
/**
 *print_listint - print every int of list
 *@h: listint
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
unsigned int numnodes = 0;
const  listint_t *tmp = h;

while (tmp != NULL)
{
if (tmp->next == NULL)
{
printf("%d\n", tmp->n);
}
else
{
printf("%d \n", tmp->n);
}
tmp = tmp->next;
numnodes++;
}
return (numnodes);
}
