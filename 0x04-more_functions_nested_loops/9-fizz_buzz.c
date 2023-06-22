#include <stdio.h>

/**
 * main- Print Fizz for multiple of 3, Buzz for multiple of 5.
 * FizzBuzz for both
 * Return: Void.
 */
int main(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 15 == 0)
{
printf("%s", "FizzBuzz");
}
else if (x % 3 == 0)
{
printf("%s", "Fizz");
}
else if (x % 5 == 0)
{
printf("%s", "Buzz");
}
else
{
printf("%d", x);
}
if (x != 100)
{
printf(" ");
}
}
}
