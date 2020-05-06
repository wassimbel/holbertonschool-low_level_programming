#include "holberton.h"
/**
**_strcat - concatenates dest and src
*@dest: char
*@src: char
*Return:pointer to resulting string dest
**/

char *_strcat(char *dest, char *src)
{

int i = 0, j;
for (i = 0; dest[i] != '\0'; i++)
;
j = 0;
for (j = 0; src[j] != '\0'; i++, j++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}


