#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *n)
{
int size = (sizeof(n));
return (size);
}
int main(void)
{
    char *c = "school";
    int size = _strlen(c);
    printf("size: %d\n", size);
    return (0);
}