#include <stdio.h>
#include <string.h>
/**
 * cap_string - capitalizes each word
 *@dest: the string to be capitalized
*/
char *cap_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] == 32 || s[i] == '\n' || s[i] == '\t' || s[i] == 46)
{
printf("space %c\n", s[i]);
if (s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
}
i++;
}
return (s);
}
