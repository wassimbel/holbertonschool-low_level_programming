#include "holberton.h"


/**
*int_strspn - gets the legnth of a prefix substring
*@s: string
*@accept: string
**/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, e;

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

