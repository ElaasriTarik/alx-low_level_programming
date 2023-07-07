#include <stdio.h>
#include <stdlib.h>

/**
*main - prints name of program
*@argc: argument count
*@argv: arguments
*Return: Always 0.
*/

int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
