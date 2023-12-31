#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: head of list
 * @n: node to add
 * Return: Success
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *tp, *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = NULL;
tp = *head;
if (tp != NULL)
{
while (tp->next != NULL)
{
tp = tp->next;
}
tp->next = temp;
}
else
*head = temp;
temp->prev = tp;
return (temp);
}
