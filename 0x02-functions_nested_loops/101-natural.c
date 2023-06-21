#include <stdio.h>
/**
 * main - prints the sum of multiple numbers of of 3 or 5 below 1024 (excluded)
 * @void: void
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int all = 0;
for (n = 0; n < 1024; n++)
{
if (n % 5 == 0 || n % 3 == 0)
{
all += n;
}
}
printf("%d\n", all);
return (0);
}
