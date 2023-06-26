#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
printf("%c", str[i]);
i++;
}
printf("\n");
}
int main(void)
{
    char *c = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(c);
    return (0);
}