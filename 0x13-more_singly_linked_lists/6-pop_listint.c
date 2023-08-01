#include "lists.h"

/**
 * pop_listint - adds a new node at the end of list
 * @head: head of list
 *Return: head value.
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int dt;
/** chech if list is empty*/
if ((*head) == NULL)
return (0);

temp = *head;
*head = temp->next;

dt = temp->n;
free(temp);
return (dt);

}
