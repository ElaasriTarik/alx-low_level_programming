#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age ? d->age : 0);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
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
    my_dog.owner = NULL;
    print_dog(&my_dog);
    return (0);
}