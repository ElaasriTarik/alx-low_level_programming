#include <stdio.h>
#include <stdlib.h>

/**
*main - prints numbr of arguments passed in a prorgam
*@argc: argument count
*@argv: arguments
*Return: Always 0.
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
printf("%s\n", argc - 1);
return (0);
}
