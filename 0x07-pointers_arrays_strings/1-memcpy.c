#include "holberton.h"


/**
**_memcpy - copies memory area
*@dest:pointer
*@src:pointer
*@n:bytes of memory
*Return:pointer to dest
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i, j;
for (i = 0; i < n; i++)
for (j = 0; j < n; j++)
{
dest[i] = src[j]
}
return (dest);
}
