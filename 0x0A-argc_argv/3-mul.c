#include <stdio.h>
#include <stdlib.h>

/**
*main - prints multiplication of two numbers
*@argc: argument count
*@argv: arguments
*Return: Always 0.
*/

int main(int argc, char *argv[])
{
if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
int num1 = atoi(argv[1];
int num2 = atoi(argv[1]);
int result = num1 * num2;
printf("%d", result);
}
return (0);
}
