#include "dog.h"
/**
 *init_dog - function that initialize struct
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of the dog
 *@d: structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d) /** not null */
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
