#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include "search_algos.h"

/**
 * interpolation_search - function to search for values linearily
 * @array: array of the value
 * @size: size of the array
 * @value: value to searc for
 * Return: result index or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t high = size - 1;
	size_t low = 0;
	size_t s, pos = 0;

	if (array == NULL)
		return (-1);

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		s = (((double)(high - low) / (array[high] - array[low])));
		pos = (s * (value - array[low])) + low;
		if (pos >= size)
			printf("Value checked array[%ld] is out of range\n", pos);
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	return (-1);
}
