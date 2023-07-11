#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the grid height specified
 * @grid: grid
 * @height: height of array
 * Return: no return.
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i <= height; i++)
{
free(grid[i]);
}
}
