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

void free_list(list_t *head)
{

list_t* next;

while (head != NULL) {
next = head->next;
free(head->str);

free(head);
head = next;
}
}
