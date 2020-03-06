#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*array_range - create array of integers
*@min: minimum value of integer
*@max: maximum value of integer
*Return: return pointer
**/
int *array_range(int min, int max)
{
int j;
int *p;
int i = max - min + 1;

if (min > max)
return (NULL);

p = malloc(i * sizeof(int));
if (p == NULL)
return (NULL);

for (j = 0; j < i; j++)
{
p[j] = min;
min++;
}
return(p);
}
