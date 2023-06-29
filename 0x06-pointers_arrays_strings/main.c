#include <stdio.h>
#include <string.h>

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

int main(void)
{
   char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
