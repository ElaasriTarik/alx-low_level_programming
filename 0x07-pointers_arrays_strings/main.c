#include "main.h"
#include <stdio.h>

/**
 * _strspn - number of bytes
 * @s: initial segment n
 * @accept: bytes to look for in s
 * Return: number of bytes that were found
*/

char *_strstr(char *haystack, char *needle)
{
    int x;
char *res = haystack;
char *ff = needle; 
while (*needle)
{
x = 0;
for (; haystack[x]; x++)
{
if (*needle == haystack[x])
{
return (needle);
}
}
needle = ff;
needle++;
haystack = res;

}
return (NULL);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
   char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}