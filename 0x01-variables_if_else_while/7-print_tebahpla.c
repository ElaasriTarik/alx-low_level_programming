#include <stdio.h>
/**
* main - prints the alphabet in lowercase in reverse,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
char alpha = 'z';
for (; alpha >= 'a'; alpha--)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
