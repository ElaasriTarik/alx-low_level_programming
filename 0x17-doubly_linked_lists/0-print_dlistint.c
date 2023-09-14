#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print list
 * @h: head of list
 * return: print lists
*/


size_t print_dlistint(const dlistint_t *h)
{
  const dlistint_t *curr = h;
  int x = 0;
  while (curr)
    {
      printf("%d\n", curr->n);
      curr = curr->next;
      x++;
    }
  return (x);
}
