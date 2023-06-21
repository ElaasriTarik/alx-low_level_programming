#include "main.h"
/**
 * print_to_98 - prints numbers from 0 to 98
 * @b: being the number 
 * Return: Void
 */
void print_to_98(void)
{
for (int n = 0; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
}
}