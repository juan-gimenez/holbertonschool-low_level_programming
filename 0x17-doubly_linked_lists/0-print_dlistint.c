#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: begining of list
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
int x = 0;
const dlistint_t *current = h;
if (h == NULL)
{
return (0);
}
while (current != NULL)
{
printf("%d\n", h->n);
x++;
current = current->next;
}
return (x);
}
