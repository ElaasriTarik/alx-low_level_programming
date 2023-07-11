#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates n argument of stringd
 * @ac: number of strings
 * @av: array of strings
 * Return: (Return a pointer).
 */
char *argstostr(int ac, char **av)
{
int i, k, cc = 0;
char *ptr;
int count = 0;
if (av == NULL || ac == 0)
{
return (NULL);
}
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
ptr = malloc((count *sizeof(char)) + 1);
if (ptr == NULL)
return (NULL);
i = 0;
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


return (ptr);
}
