#include <stdio.h>
#include <string.h>
/**
 * cap_string - capitalizes each word
 *@s: the string to be capitalized
 * Return: Success
*/
char *cap_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == 32 || s[i] == '\n' || s[i] == '\t' || s[i] == 46)
{
if (s[i] == '\t')
{
s[i] = 32;
}
if (s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
}
i++;
}
return (s);
}
