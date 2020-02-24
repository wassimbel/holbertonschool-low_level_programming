#include "holberton.h"
/**
**cap_string - capitalize all words of a string
*@s:string
*Return:string
**/
char *cap_string(char *s)
{
int i, j;
char a[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
if (s[0] >= 'a' && s[0] <= 'z')
s[0] = s[0] - 32;
for (i = 0; s[i] != '\0'; i++)
for (j = 0; a[j] != '\0' && s[i] != a[j]; j++)
{
if (s[i] == a[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
s[i + 1] = s[i + 1] - 32;
}
return (s);
}
