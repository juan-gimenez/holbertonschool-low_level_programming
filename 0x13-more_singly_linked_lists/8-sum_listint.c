#include "lists.h"
/**
 *sum_listint - sums of all the data (n)
 *Return: sumatory
 *@head: list to sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
