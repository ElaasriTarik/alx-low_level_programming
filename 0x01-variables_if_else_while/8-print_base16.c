#include <stdio.h>
/**
* main - prints all single digit numbers of base
* 16 starting from 0, followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int b = 0;
for (; b < 10; b++)
{
putchar(48 + b);
}
b = 0;
for (; b < 6; b++)
{
putchar(97 + b);
}
putchar('\n');
return (0);
}
