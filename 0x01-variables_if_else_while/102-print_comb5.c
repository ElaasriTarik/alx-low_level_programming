#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int a, b;
for (a = 0; a <= 99; a++)
{
for (b = a; b <= 99; b++)
{
if (b != a)
{
putchar(a / 10 + 48);
putchar(a % 10 + 48);
putchar(' ');
putchar(b / 10 + 48);
putchar(b % 10 + 48);
if (a * 100 + b != 9899)
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
