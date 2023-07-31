#include "lists.h"

/**
 * free_listint - frees a list of nodes
 * @head: head of list
 *
 *Return: (Success)
 */

void free_listint(listint_t *head)
{

listint_t *next;
while (head != NULL)
{
next = head->next;
free(head);
head = next;
}
}
