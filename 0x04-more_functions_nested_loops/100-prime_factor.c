#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: 0 Always
 */


int main(void)
{
long int number = 612852475143;
long int p;
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
