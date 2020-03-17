#include "dog.h"

/**
* init_dog - struct
*@d: struct
*@name: string
*@age: number
*@owner: string
* Return:0.
*/


void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d)
{

d->name = name;
d->age = age;
d->owner = owner;

}
}
