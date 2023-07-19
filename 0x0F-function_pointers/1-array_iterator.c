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
int x = 0;
if (array == NULL || action == NULL)
return (0);

while (x < (int)size)
{
action(array[x]);
x++;
}
}
