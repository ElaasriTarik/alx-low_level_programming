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
while (s[x] != '\0')
{
x++;
}
x--;
while (i <= x)
{
printf("%c", s[i]);
i += 2;
}
printf("\n");

}

int main(void)
{
    char *s = "0123456789";
    print_rev(s);
    return (0);
}