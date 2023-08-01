#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to list
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
size_t x = 0;
listint_t *temp;
int dd;

if (!h || !*h)
return (0);

while (*h != NULL)
{
dd = *h - (*h)->next;
if (dd > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
x++;
}
else
{
free(*h);
*h = NULL;
x++;
break;
}
}
*h = NULL;
return (x);
}
