#include "function_pointers.h"
#include <stdio.h>
#include <stdio.h>

/**
 * int_index - returns index of the first element
 * @array: array
 * @size: number of elemnts in the array
 * @cmp: function to be used to compare values
 * Return: index (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0)
return (-1);
if (!array || !cmp)
return (-1);

for (; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
