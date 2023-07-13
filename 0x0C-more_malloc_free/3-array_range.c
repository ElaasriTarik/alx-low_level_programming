#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - return an array with values from min to max
 *@min: minimum value
 *@max: smaximum value
 * Return: (arr)
*/
int *array_range(int min, int max)
{
int *arr, m;
int length;
m = min;
if (min > max)
return (NULL);

length = max - min;
arr = malloc(sizeof(int) * length);
if (arr == NULL)
return (NULL);

while (m <= max)
{
printf("%d", m);
arr[m] = m;
m++;
}
return (arr);
}
