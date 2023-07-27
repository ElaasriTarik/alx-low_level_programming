#include "lists.h"

/**
 * print_list - singly linked list
 * @h: pointer to list
 *
 *Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
size_t x = 0;


while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] [%s]\n", h->len, h->str);
h = h->next;
x++;
}
return (x);

}
