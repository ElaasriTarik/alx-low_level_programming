#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height)
{
    int i, j;
for (i = 0; i < height; i++)

{
free(grid[i]);
}

}
int **alloc_grid(int width, int height)
{
int i, j;
int **ar;
if (width <= 0 || height <= 0)
return (NULL);
ar = (int **)malloc(sizeof(int *) * height);
if (ar == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
ar[i] = (int *)malloc(sizeof(int) * width);
if (ar[i] == NULL)
{
free(ar);
for (j = 0; j <= i; j++)
free(ar[j]);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
ar[i][j] = 0;
}
}
return (ar);
}

void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}