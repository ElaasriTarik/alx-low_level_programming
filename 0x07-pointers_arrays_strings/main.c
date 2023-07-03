#include "main.h"
#include <stdio.h>

/**
 * _strspn - number of bytes
 * @s: initial segment n
 * @accept: bytes to look for in s
 * Return: number of bytes that were found
*/

char *_strpbrk(char *s, char *accept)
{
int x;

	while (*s)
	{
        x = 0;
		for (; accept[x] ; x++)
		{
			if (*s == accept[x])
			{
			return (s);
			}
		}
		s++;
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

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}