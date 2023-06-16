#include <stdio.h>
/**
* main - prints the alphabet in lowercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main() {
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (int i = 0; i < 26; i++) {
char low = tolower(alphabet[i]);
putchar(low);
}
putchar("\n");
return (0);
}
