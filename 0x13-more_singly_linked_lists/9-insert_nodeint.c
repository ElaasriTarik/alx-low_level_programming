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

unsigned int x = 0;
listint_t *new_node;
listint_t *curr = (*head);
if (*head == NULL && idx != 0)
return (NULL);

if(idx != 0)
{
while (curr && x < idx -1)
{
curr = curr->next;
x++;
}
if (curr == NULL)
return (NULL);
}

new_node = malloc(sizeof (listint_t));
new_node->n = n;

if (idx == 0)
{
new_node->next = (*head);
(*head) = new_node;
return (new_node);
}
new_node->next = curr->next;
curr->next = new_node;

return (new_node);
}
