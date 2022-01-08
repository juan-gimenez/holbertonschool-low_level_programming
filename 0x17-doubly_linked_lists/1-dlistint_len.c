#include "lists.h"

/**
 * dlistint_len - prints number of elements in a list
 * @h: begining of list
 * Return: number of nodes in list
    */
size_t dlistint_len(const dlistint_t *h)
{
int x = 0;
if (h == NULL)
{
return (0);
}
while (h != NULL)
{
x++;
h = h->next;
}
return (x);
}
