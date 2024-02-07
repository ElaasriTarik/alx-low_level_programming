#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function to search for values using jump algo
 * @array: array of the value
 * @size: size of the array
 * @value: value to searc for
 * Return: result index or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t high = sqrt(size);
	size_t low = 0;
	size_t x = 0;
	size_t jumps = 0;

	if (!array || !size)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", low, array[low]);
	while (low < size && array[high] < value)
	{
		if (array[high] != value)
			printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high = high + sqrt(size);
		jumps++;
		if (high >= size)
			high = size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	for (x = low; x <= high && x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		jumps++;
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
