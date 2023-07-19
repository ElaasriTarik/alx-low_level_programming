#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * to_int - converts to int
 *@a: char to convert
*/

int to_int(char *a)
{
return (atoi(a));
}

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
printf("Error\n");
exit(98);
}

func = get_op_func(argv[2]);

if (!func)
{
printf("Error\n");
exit(99);
}

printf("%d\n", func(to_int(argv[1]), to_int(argv[3])));

return (0);
}
