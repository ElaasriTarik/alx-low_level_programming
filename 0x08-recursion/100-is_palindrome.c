#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - return 1 if a string is palindrom
 *@s: string
 *Return: (Success)
*/
int is_palindrome(char *s)
{
int length = strlen(s);
if (length == 0 || length == 1)
return (1);
return check(s, 0, length - 1);
}

/**
 * check - checks for a palindrom
 *@str: string
 *@left: int
 *@right: int
 *Return: (Success)
*/

int check(char *str, int left, int right)
{
if (left >= right)
{
return (1);
}
else if (str[left] == str[right])
{
return (check(str, left + 1, right - 1));
}
else
{
return (0);
}
}
