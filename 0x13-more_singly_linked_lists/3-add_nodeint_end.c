#include "lists.h"
/**
 *add_nodeint_end - adds node at the end
 *Return: address of the new element, or NULL if it failed
 *@head: list
 *@n: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current;
listint_t *newnode;

current = *head;
while (current && current->next != NULL)
current = current->next;

newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
return (NULL);
newnode->n = n;
newnode->next = NULL;

if (current)
current->next = newnode;
else
*head = newnode;
return (newnode);
}
