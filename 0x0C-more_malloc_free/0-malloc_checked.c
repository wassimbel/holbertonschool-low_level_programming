#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - allocate memory using malloc
*@b:unsigned int
*Return: return 98
**/

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(sizeof(int) * b) ;

if (p == NULL)
{
exit(98);
}
return (p);
}
