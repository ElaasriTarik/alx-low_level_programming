#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * wildcmp - return 1 if two strings are identical
 *@s1: string
 *@s2: string
 *Return: (Success)
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 != '\0' || *s1 != '\0')
{
if (*s2 != '\0' && *s2 == '*')
return (1);
else
return (wildcmp(s1 + 1, s2 + 1));
if (*s1 == *s2)
return (1);
else
return (0);
}
