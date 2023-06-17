#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always
 */
int main(void)
{
int c, d = 0;
for (; d < 10; d++)
{
c = 0;
for (; c < 10; c++)
{
if (d != c && d < c)
{
putchar('0' + d);
putchar('0' + c);

if (c + d != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
