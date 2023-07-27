#include <stdio.h>
#include "lists.h"

/**
 * print_list - singly linked list
 * @h: pointer to list
 *
 *Return: number of nodes.
 */

size_t list_len(const list_t *h)
{
size_t x = 0;

while (h)
{
h = h->next;
x++;
}
return (x);
}
