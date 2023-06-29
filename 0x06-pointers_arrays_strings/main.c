#include <stdio.h>
#include <string.h>

char *leet(char *s)
{
int x = 0;
char c[] = "aAeEoOtTlL";
char leet[] = "4433007711";
while (s[x] != '\0')
{
int i = 0;
int f = 0;
while (c[i] != '\0')
{
    if (s[x] == c[i])
    {
        f = i;
        s[x] = leet[f];
    }
i++;
}
x++;
}
return (s);
}

int main(void)
{
   char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
