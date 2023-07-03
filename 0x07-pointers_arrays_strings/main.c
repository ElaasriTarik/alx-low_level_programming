#include "main.h"
#include <stdio.h>

/**
 * _strspn - number of bytes
 * @s: initial segment n
 * @accept: bytes to look for in s
 * Return: number of bytes that were found
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
	char *cpy = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				count++;
				break;
			}
		if (!(*--accept))
			break;
		accept = cpy;
	}
	return (count);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}