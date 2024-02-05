#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
  return search(0, size, array, value);
}

int search(size_t l, size_t r, int *array, int value)
{
  size_t left = l;
  size_t right = r;
  size_t mid = left + (right - left) / 2;

  if (value == array[mid])
    return (mid);
  if (value < array[mid])
    return binary_search(left, mid, array, value);
  if (value > array[mid])
    return binary_search(mid, right, array, value);
}
