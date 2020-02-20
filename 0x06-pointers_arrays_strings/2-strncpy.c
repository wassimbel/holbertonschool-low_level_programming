#include "holberton.h"
/**
**_strncpy - copie a string
*@dest:string
*@src:string
*@n:integer
*Return:pointer to dest
**/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j;
for (i = 0; src[i] != '\0'; i++)
for (j = 0; j < n && src[j] != '\0'; j++)
dest[j] = src[j];
for (; i < n; i++ )
dest[i] = '\0';
return (dest);
}
