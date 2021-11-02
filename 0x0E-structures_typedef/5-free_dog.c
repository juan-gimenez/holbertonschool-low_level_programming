#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog.
 * @d: structure.
 * Return: no return
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);
free(d);
}
}
