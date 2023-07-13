#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *pp;
    int i = 0;
if (new_size == old_size)
return (ptr);

if (ptr == NULL)
pp = malloc(new_size);

if (new_size == 0 && ptr != NULL)
{
    free(ptr);
    return (NULL);
}

pp = malloc(new_size);
if (pp == NULL)
return (NULL);

for (; i < old_size ; i++)
{
*((char *)(pp) + i) = *((char *)(ptr) + i) ;
}

return (pp);

}


/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
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
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 10);
    p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98);
    i = 0;
    while (i < 98)
    {
        p[i++] = 98;
    }
    simple_print_buffer(p, 98);
    free(p);
    return (0);
}