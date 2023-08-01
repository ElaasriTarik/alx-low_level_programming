#include "lists.h"

/**
 * sum_listint - adds a new node at the end of list
 * @head: head of list
 *Return: head value.
 */

int sum_listint(listint_t *head)
{

unsigned int sum = 0;
if (head == NULL)
return (0);

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
