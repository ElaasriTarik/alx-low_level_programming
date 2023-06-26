#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints a string in reverse
 * @s: the string to be printed in reverse
 * Return: Success;
*/
void rev_string(char *s)
{
int ll, i, tt;

ll = 0;
i = 0;
while (s[i] != '\0')
{
i++;
}
i--;
while (i > ll)
{
tt = s[i];
s[i--] = s[ll];
s[ll++] = tt;
}

}
