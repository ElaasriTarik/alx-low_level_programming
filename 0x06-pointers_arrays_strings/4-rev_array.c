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
int arr[n];
n -= 1;
while ((n) > 0)
{
putchar(a[n]);
if ((n) != 0)
{
if ((n) == 1) break;
printf(", ");
}
n--;
}
putchar('\n');
}
