#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
for (; n > 0; n--)
{
int next = n;
int res = n;
for (; next < 15; next++)
{
if (next != 15)
{
printf("%d,   ", res);
res += n;
}
printf("%d\n", res);
res += n;  
}
        
}  
}
