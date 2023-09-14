#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - print list
 * @h: head of list
 * Return: (Success)
*/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *curr = h;
int x = 0;
while (curr)
{
curr = curr->next;
x++;
}
return (x);
}
