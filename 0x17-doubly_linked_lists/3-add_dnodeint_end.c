#include "lists.h"
/**
 *add_dnodeint_end - add node at the end
 *@head: head
 *@n: node to add
 *Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node, *temp;

node = malloc(sizeof(dlistint_t));
if (!node)
return (NULL);
node->n = n;
node->next = NULL;
if (*head == NULL)
{
node->prev = NULL;
*head = node;
return (node);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = node;
node->prev = temp;
return (node);
}
