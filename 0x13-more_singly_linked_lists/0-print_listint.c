#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
size_t x = 0;
if(!h)
printf("(nil)");
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
x++;
}

return (x);
}