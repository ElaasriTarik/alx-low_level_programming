#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * Return: Always (0).
 */
int main(void)
{
int count;
unsigned long fir = 0, sec = 1, sum;
for (count = 0; count < 50; count++)
{
sum = fir + sec;
printf("%lu", sum);
fir = sec;
sec = sum;
if (count != 49)
printf(", ");
else
printf("\n");
}
return (0);
}
