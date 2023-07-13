#include <stdio.h>
#include <stdlib.h>
#include <linits.h>
#include "main.h"

/**
 * main - return the multiplication of n1, n2.
 *@n1: int
 *@n2: int
 * Return: (0) Always
*/

int main(int *argc, char *argv[])
{
unsigned long mul;
int x, y;
if (argc != 3)
{
printf("Error\n");
exit(98);
}

for (x = 1; x < argc; x++)
{
for (j = 0; argv[x][j] != '\0'; j++)
{
if (argv[x][j] > 57 || argv[x][j] < 48)
{
printf("Error\n");
exit(98);
}
}
}
mul = atol(argv[1]) *  atol(argv[2]);
printf("%lu\n", mul);
return (0);
}
