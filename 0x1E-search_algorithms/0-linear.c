#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function to search for values linearily
 * @array: array of the value
 * @size: size of the array
 * @value: value to searc for
 * Return: result index or -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
  size_t x = 0;

  for (; x < size; x++)
  {
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	if (array[x] == value)
	  return (x);
  }
  return (-1);
}
