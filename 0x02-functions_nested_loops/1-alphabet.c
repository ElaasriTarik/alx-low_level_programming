#include "main.h"
/**
 * main - prints alphabets, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
void print_alphabet(void)
{
  char a = 'a';
for (; a < 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
return (0);
}
