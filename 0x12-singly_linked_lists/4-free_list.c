#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list of nodes
 * @head: head of list
 *
 *Return: number of nodes.
 */

void free_list(list_t *head)
{

list_t* next;

while (head != NULL)
{
next = head->next;
free(head->str);

free(head);
head = next;
}
}
