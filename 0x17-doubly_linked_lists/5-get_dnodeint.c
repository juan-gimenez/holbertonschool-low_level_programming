#include "lists.h"
/**
 *get_dnodeint_at_index - nth node of a linked list
 *@head: header
 *@index: position to find
 *Return: NULL if Error otherwise node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
unsigned int numb = 0;
current = head;
while (current != NULL)
{
if (numb == index)
{
return (current);
}
numb++;
current = current->next;
}
return (NULL);
}
