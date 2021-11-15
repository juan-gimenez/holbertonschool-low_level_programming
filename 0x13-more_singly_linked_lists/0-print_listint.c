#include "lists.h"
/**
 *print_listint - print every int of list
 *@h: listint
 *Return: number of nodes
 */
size_t print_listint(const listint_t *h);
{
  unsigned int numnodes = 0;
  if (h)
    while (h != NULL)
      {
	if (h->str == NULL)
	  {
	    printf("[0] (nil)\n");
	  }
	else
	  {
	    printf("[%d] %s\n", h->len, h->str);
	  }
	h = h->next;
	numnodes++;
      }
  return (numnodes);
}
