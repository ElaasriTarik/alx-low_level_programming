#include <stdio.h>
#include "dog.h"

/**
 * init_dog - func to initiate a dog struct
 * @d: struct dog variable
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Nothing (success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
