#include <stdio.h>
/**
* main - prints the alphabet in lowercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main() {
char alpha = 'a';
for(; alpha <= 'z'; alpha++) {
putchar(alpha);
}
putchar('\n');
return (0);
}
