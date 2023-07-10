#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @wisth: width of array
 * @s2: height of array
 * Return: (return array pointer after editing).
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **ar;
if (width <= 0 || height <= 0)
return (NULL);
ar = (int **)malloc(height * sizeof(int *));
for (i = 0; i < height; i++)
{
ar[i] = (int *)malloc(width * sizeof(int *));
if (ar[i] == NULL)
{
free(ar);
return NULL;
}
}
for (i = 0; i < height; i++)
{
for ( j = 0; j < width; j++)
{
ar[i][j] = 0;
}
}
return (ar);
}
