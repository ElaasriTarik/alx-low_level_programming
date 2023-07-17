#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int len(char *c);
char *_cpy(char *des, char *src);

dog_t *new_dog(char *name, float age, char *owner)
{
int namelen;
int ownerlen;
dog_t *dd;

if (name != NULL && owner != NULL)
{
namelen = len(name) + 1;
ownerlen = len(owner) + 1;
dd = malloc(sizeof(dog_t));

if (dd == NULL)
return (NULL);

dd->name = malloc(sizeof(char) *namelen);
if (dd->name)
{
free(dd->name);
return (NULL);
}

dd->owner = malloc(sizeof(char) *ownerlen);
if (dd->owner)
{
free(dd->name);
free(dd);
return (NULL);
}

dd->name = _cpy(dd->name, name);
dd->owner = _cpy(dd->owner, owner);
dd->age = age;
}
return (dd);
}

/**
 * len - counts length of a astring
 * @c: str
 *
 * Return: length of a astring
 */
int len(char *c)
{
int x = 0;
for (; *c != '\0'; x++)
c++;
return (x);
}
/**
 * _cpy - to copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */
char *_cpy(char *des, char *src)
{
int x = 0;
while (src[x] != '\0')
{
des[x] = src[x];
x++;
}
des[x] = '\0';
printf("%s", des);
return (des);
} 

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}
