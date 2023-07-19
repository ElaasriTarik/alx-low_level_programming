#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array elem
 * @array: array
 * @size: elements
 * @action: pointer function to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;
if (array && action)
for (x = 0; x < size; x++)
action(array[x]);
}
