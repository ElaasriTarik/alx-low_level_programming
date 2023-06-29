#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int cnv(char *s)
{
int i, n;
char pass[14] = "Tada! Congrats";
time_t t;
n = 5;
/* Intializes random number generator */
srand((unsigned) time(&t));
while (pass[i] != '\0')
{
putchar(pass[i]);
i++;
}

}

int main(void)
{

    cnv("---++++ -++ Sui - te -   -402 #cisfun :)");
    return (0);
}