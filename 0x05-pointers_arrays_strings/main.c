#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *n)
{
int x = 0;
int i = 0;
while (n[i] != '\0')
{
x++;
i++;
}
return (x);
}
int main(void)
{
    char *c = "My first strlen!";
    int size = _strlen(c);
    printf("size: %d\n", size);
    return (0);
}