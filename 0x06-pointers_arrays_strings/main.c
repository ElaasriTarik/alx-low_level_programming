#include <stdio.h>

char *cc(char *dest, char *src)
{
int s, d = 0;
while (dest[d] != '\0')
{
d++;
}
s = 0;
while (src[s] != '\0')
{
dest[d] = src[s];
d++;
s++;
}
dest[d] = '\0';
printf("%s", dest);
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    cc(s1, s2);

    return (0);
}