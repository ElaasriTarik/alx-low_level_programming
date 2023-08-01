#include "lists.h"

/**
 * pop_listint - adds a new node at the end of list
 * @head: head of list
 *Return: head value.
 */

int pop_listint(listint_t **head)
{
listint_t *temp = *head;
listint_t *temp2 = *head;
/** chech if list is empty*/
if ((*head) == NULL)
return (0);

while (temp->next)
{
temp2 = temp;
temp = temp->next;
}
temp2->next = NULL;

return (temp2->n);

}
