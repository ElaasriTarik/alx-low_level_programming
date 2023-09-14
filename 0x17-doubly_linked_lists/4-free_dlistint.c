#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *free_dlistint - frees a list
 * @head: head of list
 * Return: success
*/

void free_dlistint(dlistint_t *head)
{
dlistint_t *curr = head;
dlistint_t *temp;
while (curr != NULL)
{
temp = curr;
curr = curr->next;
free(temp);
}
}
