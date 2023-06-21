#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints even valued term numbers, starting with 1 and 2,
 * Return: Always (0).
 */
void main()
{
int i=1,j=1,sum=0;
while(i<4000000)
{
i=i+j;
j=i-j;
if(i%2==0)
sum+=i;
}
printf("Sum is: %d",sum);
}
