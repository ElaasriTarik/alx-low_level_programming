#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: head of list
 * @n: string
 *Return: number of nodes.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *curr;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

/** check if list is empty */
if (*head == NULL)
{
*head = new_node;
return ((*head));
}
/** last node*/
curr = *head;
while (curr->next != NULL)
{
curr = curr->next;
}
curr->next = new_node;
return ((*head));

}
