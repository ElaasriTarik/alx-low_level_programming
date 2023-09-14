#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node
 * @head: head of list
 * @index: index of the node
 * Return: Success
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *curr = head;
unsigned int x = 0;
while (curr)
{
if (x == index)
{
return (curr);
}

curr = curr->next;
x++;
}
return (NULL);
}
