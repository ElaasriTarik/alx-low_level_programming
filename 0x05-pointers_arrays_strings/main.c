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
   time_t t;
   
   n = 5;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 50 */
   for( i = 0 ; i < n ; i++ ) {
      printf("%d", rand() % 50);
   }

}

int main(void)
{

    cnv("---++++ -++ Sui - te -   -402 #cisfun :)");
    return (0);
}