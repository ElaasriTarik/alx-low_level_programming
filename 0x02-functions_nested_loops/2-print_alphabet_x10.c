#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets x10 fllowd by a new lines
 * Void: No retuen
 */
void print_alphabet_x10(void)
{
char a = 'a';
int x;
for (x = 0; x < 11; x++)
{
for (; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
