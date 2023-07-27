#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node
 * @head: head of list
 * @str: string
 *
 *Return: number of nodes.
 */

list_t *add_node(list_t **head, const char *str)
{
unsigned int x = 0;
list_t *new_node = malloc(sizeof(list_t));

if (new_node == NULL)
return (NULL);

for (; str[x] != '\0'; x++)
;
printf("%d\n", x);

new_node->str = strdup(str);
new_node->len = x;
new_node->next = (*head);
(*head) = new_node;

return (new_node->next);

}
