#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 *@size: size of the array
 *@array: array
 *@action: function to call
 * Return: Void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
int x;
if (array != NULL || action != NULL)
{
for (x = 0; x < (int) size; x++)
action(array[x]);
}
}
