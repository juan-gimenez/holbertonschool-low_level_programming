#include "lists.h"

/**
 * free_dlistint - free list
 * @head: list
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *follow;
while (head != NULL)
{
follow = head->next;
free(head);
head = follow;
}
}
