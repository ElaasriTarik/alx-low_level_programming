#include "main.h"
#include <stdio.h>
/**
 * _strstr - function locates the first osubstring needle
 * of any of the bytes in the string accept
 * @haystack: string
 * @needle: chars to find
 * Return: *s
*/

char *_strstr(char *haystack, char *needle)
{
char *res = haystack;
char *ff = needle;
while (*haystack)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
break;
}
}
if (!*needle)
{
return (res);
}
needle = ff;
res++;
haystack = res;
}
return (NULL);
}

/**
 * _abs - absolute value of an integer
 * @n: integer from which to get an absolute value
 * Return: Void
 */
int _abs(int n)
{
if (n < 0)
return (n * -1);
else
return (n);
}

/**
 * _strcpy - copies src into dest
 * @src: the variable to be copied
 * @dest: the variable to copy into
 * Return value: the pointer to dest
 * Return: dest (Success)
*/
char *_strcpy(char *dest, char *src)
{
int x = 0;
while (src[x] != '\0')
{
dest[x] = src[x];
x++;
}
dest[x] = '\0';

return (dest);
}
