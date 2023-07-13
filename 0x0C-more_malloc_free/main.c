#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int *array_range(int min, int max)
{
int *arr, length;
if (min > max)
return (NULL);

length = (max + 1) - min;
arr = malloc(sizeof(int) * length);
if (arr == NULL)
return (NULL);

while (min <= max)
{
arr[min] = min;
min++;
}
return (arr);
}


/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}