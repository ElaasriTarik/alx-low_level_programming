#include <stdio.h>
/**
* main - prints all single digit numbers of base
* 10 starting from 0, separated by a comma and space.
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int b = 0;
while (b < 10)
{
putchar(48 + b);
if (b != 9)
{
putchar(44);
putchar(32);
b++;
}
else
{
b++;
}
}
putchar('\n');
return (0);
}
