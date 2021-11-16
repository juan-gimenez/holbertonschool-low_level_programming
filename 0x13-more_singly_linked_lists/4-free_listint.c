#include "lists.h"
/**
 *free_listint - frees a listint_t
 *Return: 0
 *@head: list
 */
void free_listint(listint_t *head)
{
listint_t *tmp;

while ((head = tmp) != NULL)
{
head = head->next;
free(tmp);
}
}
