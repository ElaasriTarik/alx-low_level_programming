#include "main.h"

/**
 * binary_to_uint - converts a binary to integer
 *@b: binary code to convert
 * Return: converted result
*/
unsigned int binary_to_uint(const char *b)
{
int rInt = 0, len, x = 0;
char bc;
char *cc = strdup(b);
len = strlen(cc) - 1;
if (!b)
return (0);

while (cc[x] != '\0')
{
if (!(cc[x] >= 48 && cc[x] <= 57))
return (0);
bc = cc[x] - '0';
rInt += bc * pow(2, len);
len--;
x++;
}
return (rInt);
}
