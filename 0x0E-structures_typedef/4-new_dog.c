#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int len(char *c);
char *char_copy(char *des, char *src);

/**
 * new_dog - creates a new dog atruct
 * @name: name of dog
 * @age: age
 * @owner: owner
 *
 * Return: new struct
 */

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
if (dd->name == NULL)
{
free(dd->name);
return (NULL);
}
dd->owner = malloc(sizeof(char) *ownerlen);
if (dd->owner == NULL)
{
free(dd->name);
free(dd);
return (NULL);
}
dd->name = char_copy(dd->name, name);
dd->owner = char_copy(dd->owner, owner);
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
 * char_copy - to copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */
char *char_copy(char *des, char *src)
{
int x = 0;
while (src[x] != '\0')
{
des[x] = src[x];
x++;
}
des[x] = '\0';
return (des);
}
