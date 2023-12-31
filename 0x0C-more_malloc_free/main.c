#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * check_digit - checks if char is digit
 * @c: the character to check
 *
 * Return: 1 success
 */
int check_digit(int c)
{
return (c >= '0' && c <= '9');
}
/**
 * len - coungts the length of a string
 * @str: string
 *
 * Return: integer length of string
 */
int len(char *str)
{
int l = 0;
while (*str++)
l++;
return (l);
}
/**
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
 */
char *big_multiply(char *s1, char *s2)
{
char *res;
int xx1, yy2, a, b, c, d;
xx1 = len(s1);
yy2 = len(s2);
res = malloc(a = d = xx1 + yy2);
if (!res)
{
printf("Error\n");
exit(98);
}
while (a--)
res[a] = 0;
for (xx1--; xx1 >= 0; xx1--)
{
if (!check_digit(s1[xx1]))
{
free(res);
printf("Error\n");
exit(98);
}
a = s1[xx1] - '0';
c = 0;
for (yy2 = len(s2) - 1; yy2 >= 0; yy2--)
{
if (!check_digit(s2[yy2]))
{
free(res);
printf("Error\n"), exit(98);
}
b = s2[yy2] - '0';
c += res[xx1 + yy2 + 1] + (a *b);
res[xx1 + yy2 + 1] = c % 10;
c /= 10;
}
if (c)
res[xx1 + yy2 + 1] += c;
}
return (res);
}
/**
 * main - return the multiplication of n1, n2.
 *@argc: number of args passed
 *@argv: argument array
 * Return: (0) Always
*/
int main(int argc, char *argv[])
{
char *res;
int a, b, c;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
c = len(argv[1]) + len(argv[2]);
res = big_multiply(argv[1], argv[2]);
b = 0;
a = 0;
while (b < c)
{
if (res[b])
a = 1;
if (a)
putchar(res[b] + '0');
b++;
}
if (!a)
putchar('0');
putchar('\n');
free(res);
return (0);
}
