#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: ppinter to pointer to the list
 * @n: new node
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nwnode;
if (!head)
return (NULL);
nwnode = malloc(sizeof(dlistint_t));
if (!nwnode)
return (NULL);
nwnode->n = n;
nwnode->prev = NULL;
nwnode->next = *head;
if (*head)
(*head)->prev = nwnode;
*head = nwnode;
return (nwnode);
}
