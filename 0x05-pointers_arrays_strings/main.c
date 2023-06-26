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
x++;
i++;
}
while (x >= 0)
{
printf("%c", s[x]);
x--;
}
printf("\n");
}

int main(void)
{
    char *c = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(c);
    return (0);
}