#include "lists.h"
#include <stdlib.h>
/**
 *print_list - print every element of list
 *@h: list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
unsigned int numnodes = 0;

 if (h->len == '\0')
   {
     printf("[0] (nil)");
   }
 while (h != NULL)
   {
     printf("[%d] %s\n" , h->len, h->str);
     
  h = h->next;
  numnodes++;
 } 
return (numnodes);
}
