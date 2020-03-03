#include "holberton.h"
#include <stdlib.h>
/**
*create_array - func create an array of chars, initialized with specific char
*@size: size of the array
*@c: starting character
*Return: pointer to array
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

if (size == 0)
return (NULL);
ptr = malloc(size * sizeof(char));
if (ptr == NULL)
return (NULL);
else
{
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
}

