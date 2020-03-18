#include <stdlib.h>
#include "dog.h"
/**
 *_strdup - duplicate string
 *@str: string to duplicate
 *Return: s
 */
char *_strdup(char *str)
{
int i = 0, j = 0;
char *s;

if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
i++;
}
s = malloc(sizeof(char) * (i + 1));
if (s == NULL)
return (NULL);
while (j < i)
{
s[j] = str[j];
j++;
}
s[j] = '\0';
return (s);
}


/**
 * new_dog - pointer to struct
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 * Return:doog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doog;

char *name2;
char *owner2;

if (name == NULL || owner == NULL)
return (NULL);

doog = malloc(sizeof(dog_t));

if (doog == NULL)
return (NULL);

name2 = _strdup(name);
owner2 = _strdup(owner);

if (name == NULL || owner2 == NULL)
{
if (name2 == NULL)

free(doog);
return (NULL);

if (owner2 == NULL)
free(name2);
free(doog);
return (NULL);
}

doog->name = name2;
doog->age = age;
doog->owner = owner2;
return (doog);
}
