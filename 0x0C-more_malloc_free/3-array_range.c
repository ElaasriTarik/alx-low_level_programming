#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * array_range - return an array with values from min to max
 *@min: minimum value
 *@max: smaximum value
 * Return: (arr)
*/
int *array_range(int min, int max)
{
int *arr, length;
if (min > max)
return (NULL);

length = (max + 1) - min;
arr = malloc(sizeof(int) * length);
if (arr == NULL)
return (NULL);

while (min <= max)
{
arr[min] = min;
min++;
}
return (arr);
}
