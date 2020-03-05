#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_calloc - allocates memory for an array, using malloc
*@nmemb: unsigned int for number of elements
*@size: unsigned int for size of element
*Return: return pointer
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int j;
char *p;

if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (j = 0; j < nmemb * size; j++)
p[j] = 0;
return (p);
}
