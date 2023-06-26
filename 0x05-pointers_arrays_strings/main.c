#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
int v, t;
char f;
int i = 0;
int x = 0;
while (s[x] != '\0')
{
x++;
}
x--;
char arr[x];
v = x;
while (x >= 0 && i <= v)
{
 arr[i] = s[x];
 //printf("%c", arr[i]);
 i++;
 x--;
}
i = v;
t = 0;
while (t <= i)
{
printf("%d\n", t);
f = arr[t];
printf("%c\n", f);
s[t] = f;
printf("the S:%c\n", s);
t++;
}

}

int main(void)
{
    char *s = "Holberton!";
    printf("%s\n", s);
    print_rev(s);
    printf("%s", s);
    return (0);
}