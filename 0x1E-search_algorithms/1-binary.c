#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
  return search(0, size, array, value);
}

int search(int l, int r, int *array, int value)
{
  int left = l;
  int right = r;
  int mid = floor((right + left) / 2);

  printf("Searching in array: ");
  for (; l < r; l++)
    {
    printf("%d", array[l]);
    if (l + 1 < r)
      printf(", ");
    }
  printf("\n");

  if (left > right || !array)
    return (-1);
  
  if (value == array[mid])
    return (mid);
  else if (value < array[mid])
    return search(left, mid - 1, array, value);
  else
    return search(mid + 1, right, array, value);
}
