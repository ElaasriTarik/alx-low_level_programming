#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 * the byte position, then showing the hex content,
 * then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
*/

void print_buffer(char *b, int size)
{
int byte = 0, i;
int x = 0;
while (byte < size)
{
if (size <= 0)
printf("\n");
printf("%08x: ", byte);
i = 0;
while (i < 10)
{
if ((i + byte) >= size)
printf("  ");
else
{
printf("%02x", b[x]);
}
if (i % 2 != 0 && i != 0)
{
printf(" ");
}
i++;
x++;
}
i = 0;
while (i < 10)
{
if ((i + byte) >= size)
break;
else if (*(b + i + byte) >= 32 && *(b + i + byte) <= 126)
{
printf("%c", *(b + i + byte));
}
else
{
putchar('.');
}
i++;
}
printf("\n");
byte += 10;
}
}
