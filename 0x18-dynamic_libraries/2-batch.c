#include "main.h"
/**
 *_islower - checks for a lowercase character
 *@a: letter being tested
 * Return: Always 0
 */
int _islower(int a)
{
if (a >= 97 && a <= 122)
return (1);
else
return (0);
}

/**
 * _puts - prints a string
 * @str: the string to be printed
 * Return: Success;
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
printf("%c", str[i]);
i++;
}
printf("\n");
}

/**
 * *_strcmp - compares two strings
 *@s1: the frist string
 *@s2: the second string
 * Return: Always Success.
*/
int _strcmp(char *s1, char *s2)
{
int res = 0;
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
res = s1[i] - s2[i];
break;
}
i++;
}
return (res);
}

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
 *_isalpha - checks for any character
 *@a: letter being tested
 * Return: Always 0
 */
int _isalpha(int a)
{
if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
return (1);
else
return (0);
}

/**
 * _strpbrk - function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: string
 * @accept: chars to find
 * Return: *s
*/

char *_strpbrk(char *s, char *accept)
{
int x;
while (*s)
{
x = 0;
for (; accept[x]; x++)
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
