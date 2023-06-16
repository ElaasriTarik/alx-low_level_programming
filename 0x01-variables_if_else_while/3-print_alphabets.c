#include <stdio.h>
/**
* main - prints the alphabet in lowercase and uppercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
char alpha = 'a';
for (; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
alpha = 'A';
for (; alpha <= 'Z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
