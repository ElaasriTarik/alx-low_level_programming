#include "lists.h"

/**
 * free_listint2 - frees a list of nodes
 * @head: head of list
 *
 *Return: (Success)
 */

void free_listint2(listint_t **head)
{

while (head != NULL)
{
free(*head);
head = NULL;
}
}
