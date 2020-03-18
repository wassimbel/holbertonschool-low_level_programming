#include <stdlib.h>
#include "dog.h"


/**
 * free_dog - free dog
 * @d: struct dog_t
 * Return:0
 */





void free_dog(dog_t *d)
{
if (d != '\0')
{
free(d->name);
free(d->owner);
free(d);
}
}
