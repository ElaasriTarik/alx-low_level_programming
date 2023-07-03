#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints a chessboard
 * @s: a 2D array
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


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
   char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}