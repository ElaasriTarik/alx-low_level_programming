#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * this_free_grid - frees a 2 dimensional array.
 * @g: multidimensional array of char.
 * @ver: height of the array.
 *
 * Return: no return
 */
void this_free_grid(char **g, unsigned int ver)
{
if (g != NULL && ver != 0)
{
for (; ver > 0; ver--)
free(g[ver]);
free(g[ver]);
free(g);
}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */
char **strtow(char *str)
{
char **arr;
unsigned int c, ver, i, j, arr1;
if (str == NULL || *str == '\0')
return (NULL);
for (c = ver = 0; str[c] != '\0'; c++)
{
if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
ver++;
}
arr = malloc((ver + 1) * sizeof(char *));
if (arr == NULL || ver == 0)
{
free(arr);
return (NULL);
}
for (i = arr1 = 0; i < ver; i++)
{
for (c = arr1; str[c] != '\0'; c++)
{
if (str[c] == ' ')
arr1++;
if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
{
arr[i] = malloc((c - arr1 + 2) * sizeof(char));
if (arr[i] == NULL)
{
this_free_grid(arr, i);
return (NULL);
}
break;
}
}
for (j = 0; arr1 <= c; arr1++, j++)
arr[i][j] = str[arr1];
arr[i][j] = '\0';
}
arr[i] = NULL;
return (arr);
}
