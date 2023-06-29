#include <stdio.h>

char *cc(char *dest, char *src)
{
int i = 0;
while (dest[i] != '\0')
{
putchar(dest[i]);
i++;
}
i = 0;
putchar(32);
while (src[i] != '\0')
{
putchar(src[i]);
i++;
}
putchar('\0');
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    cc(s1, s2);

    return (0);
}