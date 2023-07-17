#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: struct dog variable
 * Return: Nothing (success)
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d);
d = NULL;
}
}
