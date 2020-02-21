#include "holberton.h"
/**
**cap_string - capitalize all words of a string
*@s:string
*Return:string
**/
char *cap_string(char *s)
{
int i = 0, j;
char a[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

if (s[0] >= 'a' && s[0] <= 'z')

s[0] = s[0] - 32;
for (i = 0; s[i] != '\0'; i++)

j = 0;

for (j = 0; a[j] != '\0' && s[i] != a[i]; j++)
{

if (s[i] == a[i] && s[i + 1] >= 'a' && s[i + 1] <= 'z')

s[i + 1] = s[i + 1] - 32;
}

return (s);

}
