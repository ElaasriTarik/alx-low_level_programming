#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int a, b, c;
for (a = 0; a <= 7; a++)
{
for (b = a + 1; b <= 8; b++)
{
for (c = b + 1; c <= 9; c++)
{
if (a != b && b != c && c != a)
{
putchar(a + '0');
putchar(b + '0');
putchar(c + '0');
if (a + b + c < 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
