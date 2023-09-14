#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - print list
 * @head: head of list
 * Return: sum of list
*/

int sum_dlistint(dlistint_t *head)
{
const dlistint_t *curr = head;
int sum = 0;
if (curr == NULL)
return (0);
if (curr->next == NULL)
return (0);
while (curr)
{
sum += curr->n;
curr = curr->next;
}
return (sum);
}
