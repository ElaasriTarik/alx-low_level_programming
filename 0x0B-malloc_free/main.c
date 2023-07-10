#include "main.h"
#include <stdio.h>
#include <stdlib.h>



char *_strdup(char *str)
{
char *ptr;
int x = 0;
if (str == NULL)
return (NULL);

while (*str)
{
    x++;
    *str++;
}
ptr = (char*)malloc(x * sizeof(char));
int i = 0;
while (x >= 0)
{
ptr[x] = *str;
str--;
x--;
}
return (ptr);
}
/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}