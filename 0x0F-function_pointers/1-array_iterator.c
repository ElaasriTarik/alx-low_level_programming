#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints a name
 *@size: size of the array
 *@array: array
 *@action: function to call
 * Return: Void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;
if (array|| action)
{
for (x = 0; x < size; x++)
action(array[x]);
}
}
