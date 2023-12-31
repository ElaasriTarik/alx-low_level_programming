#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

int (*func)(int, int);

if (argc != 4)
{
printf("out of bound Error\n");
exit(98);
}

func = get_op_func(argv[2]);

if (!func)
{
printf("this Error\n");
exit(99);
}

printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));

return (0);
}
