#include <stdio.h>

/**
 * main- Print Fizz for multiple of 3, Buzz for multiple of 5.
 * FizzBuzz for both
 * Return: Void.
 */
int main(void)
{
int x;
char val[9] = "";
for (x = 1; x < 100; x++)
{
if (x % 15 == 0)
{
val = "FizzBuzz";
}
else if (x % 3 == 0)
{
val = "Fizz";
}
else if (x % 5 == 0)
{
val = "Buzz";
}
else
{
putchar(x + '0');
}
putchar(val);
putchar(' ');
}
putchar('\n');
}
