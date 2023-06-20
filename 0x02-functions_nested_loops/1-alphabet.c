#include "main.h"
/**
 * main - prints alphabets, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
for (int x = 'a'; x < 'z'; x++)
{
_putchar(print_alphabet(x));
}
_putchar('\n');
return (0);
}
