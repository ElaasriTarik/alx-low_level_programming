#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if c is uppercase.
 * @c: a character
 * Return: Always 0.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}

/**
 * _memset - fill the n spots of memory with b
 * @s: the memory spots
 * @b: the value to be fillied with
 * @n: the number of times to fill with
 * Return: *s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int x = 0;
while (x < n)
{
s[x] = b;
x++;
}
return (s);
}

/**
 * _strcat - concatenates two strings.
 * @src: first str
 * @dest: second str
 * Return: success.
 */

char *_strcat(char *dest, char *src)
{
int i, x;

i = 0;
while (dest[i] != '\0')
{
i++;
}
x = 0;
while (src[x] != '\0')
{
dest[i] = src[x];
i++;
x++;
}
dest[i] = '\0';
return (dest);
}

/**
 * _isdigit - Checks if d is a digit.
 * @d: a character
 * Return: Always 0.
 */
int _isdigit(int d)
{
if (d >= 48 && d <= 57)
return (1);
else
return (0);
}

/**
 * _memcpy - copies from src to dest
 * @src: the values to copy
 * @dest: the destination
 * @n: the number of times to copy
 * Return: *dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;
while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
