#include "lists.h"

/**
 * reverse_listint - adds a new node at the end of list
 * @head: head of list
 *Return: head value.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t* previous = NULL;
listint_t* current = *head;
listint_t* next = NULL;

    while (current != NULL) {
        next = current->next;

        current->next = previous;

        previous = current;
        current = next;
    }

    *head = previous;
    return (*head);
}
