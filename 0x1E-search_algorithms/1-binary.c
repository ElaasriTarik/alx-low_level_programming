#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * binary_search - function to search for values binary
 * @array: array of the value
 * @size: size of the array
 * @value: value to searc for
 * Return: result index or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	return (search(0, size, array, value));
}

/**
 * search - function to search for values recursivly
 * @array: array of the value
 * @l: left index
 * @r: right index
 * @value: value to searc for
 * Return: result index or -1 if not found
 */

int search(size_t l, size_t r, int *array, int value)
{
	size_t left = l;
	size_t right = r;
	size_t i = l;
	size_t mid = left + (right - left) / 2;

	if (left > right || !array)
		return (-1);

	printf("Searching in array: ");
	for (; i < r; i++)
	{
		printf("%d", array[i]);
		if (i + 1 < r)
			printf(", ");
	}
	printf("\n");

	if (value == array[mid])
		return (mid);
	else if (value < array[mid])
		return (search(left, mid - 1, array, value));
	else
		return (search(mid + 1, right, array, value));
}
