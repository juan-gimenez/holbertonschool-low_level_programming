#include "lists.h"

/**
 * print_dlistint - prints all elements of a list
 * @h: begining of list
 * Return: number of nodes in list
 */

size_t print_dlistint(const dlistint_t *h)
{
struct node *current = head;
if (head == NULL)
{
return (0);
}
while (current != NULL)
{
printf("%d\n", h->n);
current = current->next;
}
return (current);
}
