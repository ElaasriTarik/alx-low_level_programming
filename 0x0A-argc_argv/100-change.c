#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers
 * @argc: count
 * @argv: array
 * Return: If the program receives two arguments - 0.
 * If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
int cs, tot = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cs = atoi(argv[1]);
while (cs > 0)
{
tot++;
if ((cs - 25) >= 0)
{
cs -= 25;
continue;
}
if ((cs - 10) >= 0)
{
cs -= 10;
continue;
}
if ((cs - 5) >= 0)
{
cs -= 5;
continue;
}
if ((cs - 2) >= 0)
{
cs -= 2;
continue;
}
cs--;
}
printf("%d\n", tot);
return (0);
}
