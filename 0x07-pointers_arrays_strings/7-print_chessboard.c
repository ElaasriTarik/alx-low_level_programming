#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard
 * @a: a 2D array
 * Return: Success
*/

void print_chessboard(char (*a)[8])
{
int i = 0;
int x;
while (i < 8)
{
x = 0;
while (x < 8)
{
printf("%c", a[i][x]);
x++;
}
printf("\n");
i++;
}
}
