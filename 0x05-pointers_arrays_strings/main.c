#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int x = 0;

for (; x < n;)
{
printf("%d", a[x]);
x++;
if (x < n)
{
printf(", ");
}
}
printf("\n");

}

int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}