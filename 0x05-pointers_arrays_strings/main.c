#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *str)
{
int n;
int x = 0;
while (str[x] != '\0')
{
x++;
}
if(x % 2 == 1)
{
n = (x - 1) / 2;
}
else
{
n = x / 2;
}
for (int i = n; i < x; i++)
{
printf("%c", str[i]);
}


printf("\n");

}

int main(void)
{
    char *s = "0123456789";
    print_rev(s);
    return (0);
}