#include "lists.h"
/**
 * add_nodeint - adds node at the beggining
 *Return: null or direction of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
  listint_t *new_node;
  new_node = malloc(sizeof(listint_t));
  if (!new_node)
    {
      return (NULL);
      free(new_node);
    }
  new_node->n = n;
  new_node->next = *head;
  *head = new_node;
  return (*head);
}
