#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n number  of array elements
 * @a: the array
 * @n: the n element to be printed
 * Return: Success;
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
