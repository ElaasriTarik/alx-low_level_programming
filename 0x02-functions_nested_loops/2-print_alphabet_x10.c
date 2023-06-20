#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets x10 fllowd by a new lines
 * Void: No retuen
 */
void print_alphabet_x10(void)
{
int x;
for (x = 0; x < 10; x++)
{
char a = 'a';
for (; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
