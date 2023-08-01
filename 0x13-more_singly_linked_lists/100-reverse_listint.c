#include "lists.h"

/**
 * reverse_listint - adds a new node at the end of list
 * @head: head of list
 *Return: head value.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *curr = *head;
listint_t *next = NULL;

while (curr != NULL)
{
next = curr->next;

curr->next = prev;

prev = curr;
curr = next;
}

*head = prev;
return (*head);
}
