#include "main.h"
#include <stdio.h>
/**
 * swap_int- swaps two values int a, b
 * @a: the int pointer
 * @b: the other pointer
 * Return: Success;
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
