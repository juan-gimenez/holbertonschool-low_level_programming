#include "lists.h"

/**
 * insrt_node -  function that returns new node
 * @h: ptr to the list
 * @n: node value
 * Return: element
 */

dlistint_t  *insrt_node(dlistint_t *h, int n)
{
dlistint_t *newnd;
if (h == NULL)
return (NULL);
newnd = malloc(sizeof(dlistint_t));
if (newnd == NULL)
return (NULL);
newnd->n = n;
newnd->next = h->next;
newnd->prev = h;
if (h->next)
h->next->prev = newnd;
h->next = newnd;
return (newnd);
}

/**
 * insert_dnodeint_at_index - returns the nth node of a dlinklist
 * @h: ptr to the list
 * @idx: number of node
 * @n: node value
 * Return: node  or NULL if it does not exist
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *node;

if (h == NULL)
return (NULL);
if (idx == 0)
{
return (add_dnodeint(h, n));
}
node = *h;
while (--idx)
if (node != NULL)
node = node->next;
else
return (NULL);
return (insrt_node(node, n));
}
