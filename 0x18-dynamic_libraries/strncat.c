#include "holberton.h"
/**
**_strncat - concatenate two string'
*@dest:chars
*@src:char
*@n:integer
*Return:pointer to dest
**/

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j;
for (i = 0; dest[i] != '\0'; i++)
;
j = 0;
for (j = 0; j < n && src[j] != '\0'; i++, j++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}

