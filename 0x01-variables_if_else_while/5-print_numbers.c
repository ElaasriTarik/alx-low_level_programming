#include <stdio.h>
/**
* main - prints all single digit numbers of base
* 10 starting from 0, followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int b = 0;
while (b < 10)
{
printf("%d", b);
b++;
}
printf("\n");
return (0);
}
