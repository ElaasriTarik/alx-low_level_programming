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
int r;
int i = 0;
while(i < n/2){
r = a[i];
a[i] = a[n-i-1];
a[n-i-1] = r;
i++;
}
}
