#include "main.h"
/**
 * print_to_98 - prints numbers from 0 to 98
 * @b: being the number 
 * Return: Void
 */
void print_to_98(int n)
{
if (n >= 98)
{
for (; n <= 98; n--)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d", n);
printf("\n");
}
}
}
else
{
for (; n <= 98; n++)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d", n);
printf("\n");
}
}
}
}