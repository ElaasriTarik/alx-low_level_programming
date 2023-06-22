#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
int number = 612852475143;
int p;
for (p = 2; p < number; p++)
{
if (number % p == 0)
{
number = number / p;
}
}

printf("%ld\n", p);
return (0);

}
