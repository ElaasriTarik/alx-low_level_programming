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
unsigned int x = 0;
const list_t *tt = h;
while (tt)
{
tt = tt->next;
x++;
}
return (x);
}
