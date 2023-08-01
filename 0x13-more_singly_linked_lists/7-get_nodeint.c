#include "lists.h"

/**
 * get_nodeint_at_index - adds a new node at the end of list
 * @head: head of list
 * @index: index
 *Return: head value.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
if (head == NULL)
return (NULL);

while (head)
{
if (x == index)
{
return (head);
}
head = head->next;
x++;
}

return (NULL);
}
