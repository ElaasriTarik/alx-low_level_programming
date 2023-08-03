#include "main.h"

int _pow(int d, int x);

/**
 * binary_to_uint - converts a binary to integer
 *@b: binary code to convert
 * Return: converted result
*/
unsigned int binary_to_uint(const char *b)
{
int rInt = 0, len, x = 0, i = 0;
char bc;
char *cc = strdup(b);
for (; cc[i] != '\0' ; i++)
;

len = i - 1;
if (!b)
return (0);

while (cc[x] != '\0')
{
if (cc[x] < '0' || cc[x] > '1')
return (0);
bc = cc[x] - '0';
rInt += bc *_pow(2, len);
len--;
x++;
}
return (rInt);
}

/**
 * b_pow - powers a number
 *@x: to the power of
 *@d: number to be powered
 * Return: powered result
*/

int _pow(int d, int x)
{
int sum = 2;
if (x == 1)
return (2);
if (x == 0)
return (1);

for (; x >= 2; x--)
{
sum *= d;
}
return (sum);
}
