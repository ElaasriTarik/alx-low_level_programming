#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
unsigned int i, j;
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

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
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
    return (0);
}