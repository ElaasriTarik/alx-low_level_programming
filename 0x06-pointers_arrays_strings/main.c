#include <stdio.h>
#include <string.h>

char *string_toupper(char *s)
{
int x = 0;
while (s[x] != '\0')
{
if (s[x] >= 97 && s[x] <= 122)
{
s[x] = s[x] - 32;
}
else
{
s[x] = s[x];
}
x++;
}
return (s);
    
}

int main(void)
{
    char str[] = "gouge Away!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
