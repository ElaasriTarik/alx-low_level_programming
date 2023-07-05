#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts_recursion - puts a string followed by a new line
 *@s: string to be printed
 *Return: string
*/
int check(char *str, int left, int right);

int is_palindrome(char *s)
{  
int length = strlen(s);
if (length == 0 || length == 1)
return 1;
return check(s, 0, length - 1);
  
}

int check(char *str, int left, int right)
{
if (left >= right)
{
return 1;
}
else if (str[left] == str[right])
{
return check(str, left + 1, right - 1);
}
else
{
return 0;
}
}

int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}