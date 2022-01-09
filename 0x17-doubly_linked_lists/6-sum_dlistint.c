#include "lists.h"

/**
 *sum_dlistint - sum all data
 *@head: head
 *Return: 0 if empty otherwise the sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (!head)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
