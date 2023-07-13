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
unsigned long int mul;
unsigned long int n1 = atoi(argv[1]);
unsigned long int n2 = atoi(argv[2]);
mul = n1 * n2;
printf("%d\n",mul);
return (0);
}
