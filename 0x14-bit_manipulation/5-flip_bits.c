#include "main.h"

/**
 * flip_bits - flips bits
 *@m: value
 *@n: value
 * Return: (Success)
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int compare = n ^ m;
unsigned long int x = 0;
unsigned int num = 0;

while (compare) {
x = compare & 1;
num += x;
compare >>= 1;
}
return num;
}
