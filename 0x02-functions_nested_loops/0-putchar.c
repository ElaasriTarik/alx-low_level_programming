#include "main.h"
/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
char chars[] = "_putchar";
int x;
while (x < 8)
{
_putchar(chars[x]);
x++;
}
_putchar('\n');
return (0);
}
