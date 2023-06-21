#include "main.h"
/**
 * times_table - print all 9 times tables
 * return Void.
*/
void times_table(void)
{
int s = 1;
while (s <= 9)
{
int x = s;
int c = 1;
while (c <= 9)
{
_putchar(x + "0");
_putchar(", " + "0");
x += x;
c++;
}
s++;
}
}
