#include "holberton.h"


/**
* _strspn - gets the legnth of a prefix substring
*@s: string
*@accept: string
*Return: e
**/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, e = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
e++;
break;
}
}
if (s[i] != accept[j])
break;
}
return (e);
}

