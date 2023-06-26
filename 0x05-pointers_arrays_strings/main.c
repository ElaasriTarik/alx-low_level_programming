#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i = 0;
int x = 0;
while (s[i] != '\0')
{
    printf("%c", s[i]);
x++;
i++;
}
printf("\n");
x--;
while (x >= 0)
{
printf("%c", s[x]);
x--;
}
printf("%c", '\n');
}

int main(void)
{
    char *c = "Holberton!";
    print_rev(c);
    return (0);
}