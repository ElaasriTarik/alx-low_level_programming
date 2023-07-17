#include <stdio.h>
#include "_HEADER_"

/**
 * init_dog - func to initiate a dog struct
 * @d: struct dog variable
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: The attributes of a dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
