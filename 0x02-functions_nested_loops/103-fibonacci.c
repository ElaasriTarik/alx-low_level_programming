#include <stdio.h>
/**
 * main - finds and prints sum of the even value terms
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int x, y, forward, theSum;
x = 1;
y = 2;
theSum = 0;
for (i = 1; i <= 33; ++i)
{
if ((x % 2) == 0 && x < 4000000)
{
theSum = theSum + x;
}
forward = x + y;
x = y;
y = forward;
}
printf("%lu\n", theSum);
return (0);
}
