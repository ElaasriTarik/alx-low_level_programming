#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
char *ptr;
int size;
char *dup1 = s1;
char *dup2 = s2;
int x1 = 0;
int x2 = 0;
int i = 0;
while (*s1)
{
x1++;
s1++;
}
while (*s2)
{
x2++;
s2++;
}
size = x1 + x2;
printf("%d\n", size);
ptr = (char *)malloc(size * sizeof(char) + 1);
if (ptr == NULL)
return (NULL);
while (i <= x1)
{
ptr[i] = *dup1;
dup1++;
i++;
}
while (x1 <= size)
{
ptr[x1] = *dup2;
dup2++;
x1++;
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

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}