#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints name of program
 * Return : always 0.
*/

int main(int argc, char **argv)
{
while(argc--)
printf("%s\n", *argv++);
exit(EXIT_SUCCESS);
}