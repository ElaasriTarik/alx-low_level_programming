#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node
 * @head: head of list
 * @n: node to add
 * Return: Success
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *tmp = malloc(sizeof(dlistint_t));
dlistint_t *h;
if (tmp == NULL)
{
return (NULL);
}
tmp->n = n;
tmp->prev = NULL;
h = *head;

if (h != NULL)
{
while (h->prev != NULL)
h = h->prev;
}
tmp->next = h;
if (h != NULL)
{
h->prev = tmp;
}
*head = tmp;
return (tmp);
}
