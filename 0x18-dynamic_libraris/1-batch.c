#include "main.h"
#include <stdio.h>
/**
 * *_strncat - concatenates two strings
 *@dest: the frist string
 *@src: the second string
 *@n: number of chars fro src
 * Return: Always Success.
*/

char *_strncat(char *dest, char *src, int n)
{
int s, d = 0;
while (dest[d] != '\0')
{
d++;
}
s = 0;
while (src[s] != '\0' && n > 0)
{
dest[d] = src[s];
d++;
s++;
n--;
}
dest[d] = '\0';
return (dest);
}

/**
 * _atoi- conveerts a number to an integer
 * @s: the string to be converted
 * Return: Success;
*/
int _atoi(char *s)
{
int al = 1;
int x = 0;
unsigned int sum = 0;
/*check the sign of the number...*/
while (s[x] != '\0' && !(s[x] <= 57 && s[x] >= 48))
{
if (s[x] == 45)
al *= -1;
x++;
}
while (s[x] <= 57 && (s[x] >= 48 && s[x] != '\0'))
{
sum = (sum * 10) + (s[x] - '0');
x++;
}
sum *= al;
return (sum);
}

/**
 * _strchr - prints s == c
 * @s: pointer to char
 * @c: char to find
 * Return: *s
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}

/**
 * _strlen - return the size of a string
 * @n: the string to test
 * Return: Success;
*/
int _strlen(char *n)
{
int x = 0;
int i = 0;
while (n[i] != '\0')
{
x++;
i++;
}
return (x);
}

/**
 * _strncpy - copies a string into another one
 *@dest: the frist string
 *@src: the second string
 *@n: number of chars to copy
 * Return: Always Success.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

