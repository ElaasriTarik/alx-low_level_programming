#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int _len(char *str)
{
int x = 0;
for (; str[x] != '\0'; x++)
;
return (x);
}
/**
 * string_nconcat - function that concats two strings
 *@s1: string
 *@s2: string
 *@n: memory size
 * Return: (pointer)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i = 0;
int ss = n;
char *p;
int b = 0;
int length;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if(ss < 0)
return (NULL);
if (ss >= _len(s2))
ss = _len(s2);
length = _len(s1) + ss + 1;
p = malloc(sizeof(char) * length);
if (p == NULL)
return (NULL);
while (*s1 != '\0')
{
p[i] = *s1;
i++;
*s1++;
}
while (b < ss)
{
p[i] = *s2;
i++;
*s2++;
b++;
}
p[i] = '\0';
return (p);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
