#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function to reverse an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;
i = n - 1;
int arr[n];
while (i > 0)
{
putchar(a[i]);
if (i != 0)
{
if (i == 1) break;
printf(", ");
}
i--;
}
putchar('\n');
}
