#include "lists.h"

/**
 * dlistint_len -  function that returns the lenght
 * @h: ptr to list
 * Return: numbers of element
 */

size_t dlistint_len(const dlistint_t *h)
{
unsigned int x = 0;

if (h == NULL)
return (0);
while (h != NULL)
{
x++;
h = h->next;
}
return (x);
}

/**
 * delete_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: ptr to list
 * @index: number of node
 * Return: node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *node = *head;
unsigned int large = dlistint_len(node);

if (!head || !*head || index >= large)
return (-1);
while (index--)
{
node = node->next;
}
if (node->prev)
node->prev->next = node->next;
if (node->next)
node->next->prev = node->prev;
if (node == *head)
*head = node->next;
free(node);
return (1);
}
