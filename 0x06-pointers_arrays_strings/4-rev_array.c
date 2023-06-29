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
int x = 0;
int fin = n - 1;
while (x <= fin)
{
arr[x] = a[x];
x++;
}
x--;
int c = 0;
while (x >= 0)
{
a[c] = arr[x];
x--;
c++;
}
}
