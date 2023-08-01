#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: pointer to the list_t list to print
 * Return: the number of nodes printed
 */

size_t print_listint_safe(const listint_t *head)
{
size_t x = 0;
long int d;

while (head != NULL)
{
if (!head)
exit (98);
d = head - head->next;
x++;
printf("[%p] %d\n", (void *)head, head->n);
if (d > 0)
head = head->next;
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}

}

return (x);
}
