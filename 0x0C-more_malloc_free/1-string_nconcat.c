#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * _len - return number of chars in a string
 *@str: string to use
 * Return: (int)
*/

int _len(char *str)
{
int x;
x = 0;
for (; str[x] != '\0'; x++)
;
return (x);
}
/**
 * string_nconcat - function that concats two strings
 * @s1: string
 * @s2: string
 *@n: memory size
 * Return: (pointer)
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
int length, ss, i;
ss = n;
i = 0;
int b = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (ss < 0)
return (NULL);

if (ss >= _len(s2))
ss = _len(s2);

length = _len(s1) + ss + 1;
p = malloc(sizeof(char) * length);

if (p == NULL)
return (NULL);

for (; *s1 != '\0'; i++, *s1++)
{
p[i] = *s1;
}
for (; b < ss; i++, *s2++, b++)
{
p[i] = *s2;
}
p[i] = '\0';
return (p);
}
