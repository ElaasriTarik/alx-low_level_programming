#include <stdio.h>
#include "lists.h"

/**
 * listint_len - singly linked list
 * @h: pointer to list
 *Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
unsigned int x = 0;
const listint_t *tt = h;
while (tt)
{
tt = tt->next;
x++;
}
return (x);
}
