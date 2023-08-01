#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node at the end of list
 * @head: head of list
 * @idx: index
 * @n: value to add
 *Return: head value.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t* temp;
listint_t* curr = *head;
listint_t* prev = NULL;
unsigned int x = 0;
if (*head == NULL)
{
return (-1);
}
if (idx == 0) {
temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

while (x <idx && curr != NULL)
{
prev = curr;
curr = curr->next;
x++;
}

/** chech is the node at this index exists */
if (curr == NULL)
return (-1);

if (prev)
{
prev->next = curr->next;
}
else
{
*head = curr->next;
}
free(curr);

return (1);

}
