#include "main.h"
/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
char chars[] = "_putchar";
int x;
for (x = 0; x < 8; x++)
{
_putchar(chars[x]);
}
_putchar('\n');
return (0);
}
