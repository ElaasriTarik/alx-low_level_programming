#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


void print_dog(struct dog *d)
{
if (d != NULL)
{
if (d->name != NULL)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)");

if (d->age)
printf("Age: %f\n", d->age);
else
printf("Age: 0");

if (d->owner != NULL)
printf("Owner: %s", d->owner);
else
printf("Owner: (nil)");
}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = NULL;
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}