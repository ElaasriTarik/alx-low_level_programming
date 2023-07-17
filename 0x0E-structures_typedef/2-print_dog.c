#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - func to print dog's info
 * @d: struct dog variable
 *
 * Return: Nothing (success)
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)\n");

if (d->age)
printf("Age: %f\n", d->age);
else
printf("Age: 0\n");

if (d->owner != NULL)
printf("Owner: %s", d->owner);
else
printf("Owner: (nil)");
}
}
