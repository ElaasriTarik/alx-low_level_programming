#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a password
 * Return: always 0 (Success)
*/
int main () {
int i, n;
char pass = "Tada! Congrats";
time_t t;
n = 5;
/* Intializes random number generator */
srand((unsigned) time(&t));
while (pass[i] != '\0')
{
_putchar(pass[i])
i++;
}

return(0);
}
