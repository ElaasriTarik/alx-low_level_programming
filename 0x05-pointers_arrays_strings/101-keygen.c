#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a password
 * Return: always 0 (Success)
*/
int main () 
{
	int ascii = 2772, 
    int i = 0;
    int x, ran;
	char p[100];
	time_t t;
   
   /* Intializes random number generator */
	srand((int) time(&t));

	while (ascii > 126)
	{
		ran = rand() % 126;
		p[i] = ran;
		ascii -= ran;
		i++;
	}
	if (0 < ascii)
		p[i] = ascii;
	else
	{
	    i--;
	}
    x = 0;
	for (; x <= i;)
	{
		printf("%c", p[x]);
        x++;
	}
	return (0);
}
