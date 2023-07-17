#include <stdio.h>
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
if (d->name)
printf("Name: %s\n", d->name);
else
printf("(nil)");
if (d->age)
printf("Age: %f\n", d->age);
else
printf(0);
if (d->owner)
printf("Owner: %s", d->owner);
else
printf("(nil)");
}
}
