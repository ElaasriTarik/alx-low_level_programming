#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int *argc, char *argv[])
{
    unsigned long int mul;
    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);
    mul = n1 * n2;
    printf("%d\n",mul);
    return (0);
}