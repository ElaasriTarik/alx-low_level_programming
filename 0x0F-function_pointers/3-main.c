#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
 * to_int - converts to int
 *@a: char to convert
*/

int to_int(char *a)
{
return (atoi(a));
}

int len(char *c)
{
int x = 0;
for (; *c != '\0'; x++, c++)
;
return (x);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
    int num1;
    int num2;
    int (* func)(int, int);

    if (argc > 4)
    {
    printf("Error\n");
    exit(98);
    }
    
    num1 = to_int(argv[1]);
    num2 = to_int(argv[3]);
    func = get_op_func(argv[2]);

    if (!func)
    {
    printf("Error\n");
    exit(99);
    }
    
    printf("%d\n", func(num1, num2));
    
    return (0);
}
