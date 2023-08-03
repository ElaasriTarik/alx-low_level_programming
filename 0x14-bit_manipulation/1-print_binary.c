#include "main.h"

/**
 * print_binary - prints a binary rep of an int
 *@n: value to be converted
 * Return: (Success)
*/
void print_binary(unsigned long int n)
{
int spots;
unsigned long int t, curr;
if (n == 0)
{
printf("0");
return;
}
else
{
for (t = n, spots = 0; (t >>= 1) > 0; spots++)
;
}
for (; spots >= 0; spots--)
{
curr = (n >> spots);
if (curr & 1)
printf("1");
else
printf("0");
}
}
