#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *Return: the nthnode
 *@head: list
 *@index:is the index of the node, starting at 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node = 0;
while (node < index)
{
if (head == NULL)
return (NULL);
head = head->next;
node++;
}
return (head);
}
