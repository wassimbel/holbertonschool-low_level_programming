#include "holberton.h"
#include <stdlib.h>


/**
 *binary_to_uint - convert a binary number to an unsigned int
 *@b : pointing to a string of chars
 *Return: return the converted number or 0 if b is NULL or chars in b != 0 or 1
 */



unsigned int binary_to_uint(const char *b)
{
unsigned int i, j = 0;

if (b == NULL)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);

j = j << 1;
if (b[i] == '1')
j += 1;
}
return (j);
}
