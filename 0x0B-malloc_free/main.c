#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{

    int i , k, cc = 0;
    char *ptr;
    int count = 0;
    for (i = 1; i < ac; i++)
    {
        if (av[i] == NULL)
        {
            return (NULL);
        }
         k = 0;
        for (; av[i][k] != '\0'; k++)
        {
         count++;
        }
    }
printf("%d \n", count);
ptr = malloc(count * sizeof(char) + 1);
if (ptr == NULL)
return (NULL);
i = 1;
while (i < ac)
    {
        k = 0;
        while (av[i][k] != '\0')
        {
        ptr[cc] = av[i][k];
        cc++;
        k++;
        }
        ptr[cc] = '\n';
        cc++;
        i++;
    }
    ptr[cc] = '\n';
return (ptr);

}


int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}