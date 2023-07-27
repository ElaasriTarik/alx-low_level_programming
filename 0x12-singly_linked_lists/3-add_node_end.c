#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: head of list
 * @str: string
 *
 *Return: number of nodes.
 */

list_t *add_node_end(list_t **head, const char *str)
{
unsigned int x = 0;
list_t *new_node;
list_t *curr;

for (; str[x] != '\0'; x++)
;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
new_node->len = x;
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
