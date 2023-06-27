#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int cnv(char *s)
{
int x = 0;
while (s[x] != '\0')
{
if (s[x] == 45)
{
if (s[x + 1] >= 48 && s[x + 1] <= 57)
{
printf("negative\n");
putchar('-');
x++;
putchar(s[x]);
}
}
else if (s[x] >= 48 && s[x] <= 57)
{
putchar(s[x]);
}
x++;
}
putchar('\n');

}

int main(void)
{

    cnv("---++++ -++ Sui - te -   -402 #cisfun :)");
    return (0);
}