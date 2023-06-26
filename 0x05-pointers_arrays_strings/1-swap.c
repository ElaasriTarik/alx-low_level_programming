#include "main.h"
#include <stdio.h>
/**
 * swap_int(int *a, int *b) - swaps two values a, b
 * @a: the int pointer
 * @b: the other pointer
 * Return: Success;
*/
void swap_int(int *a, int *b)
{
int c = *a;
int d = *b;
a = d;
b = c;
}
