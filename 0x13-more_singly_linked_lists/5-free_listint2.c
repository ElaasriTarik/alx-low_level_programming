#include "lists.h"

/**
 * free_listint2 - frees a list of nodes
 * @head: head of list
 *
 *Return: (Success)
 */

void free_listint2(listint_t **head)
{
listint_t *tp;

if (head == NULL)
return;
while (*head)
{
tp = (*head)->next;
free(*head);
*head = tp;
}
}
