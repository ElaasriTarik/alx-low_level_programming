#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
size_t x = 0;
const listint_t *temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
x++;
}

return (x);
}
