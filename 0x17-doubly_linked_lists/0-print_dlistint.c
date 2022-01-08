#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: begining of list
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
int x = 0;
if (h == NULL)
{
return (0);
}
while (h != NULL)
{
printf("%d\n", h->n);
x++;
h = h->next;
}
return (x);
}
