#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

int _len(char *str)
{
int x = 0;
for (; str[x]; x++)
;
return (x);

}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i = 0;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
int length = _len(s1) + _len(s2);
printf("%d\n", length);
p = malloc(sizeof(char) * length);
if (p == NULL)
return (NULL);

while (*s1 != '\0')
{
p[i] = *s1;
i++;
*s1++;
}
int b = 0;
int limit = n + 1;
while (b <= n)
{
p[i] = *s2;
i++;
*s2++;
b++;
}
while (*p)
{
printf("%c\n", *p);
*p++;
}
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
