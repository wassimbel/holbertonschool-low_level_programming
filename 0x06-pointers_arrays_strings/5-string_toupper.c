#include "holberton.h"
/**
**string_toupper - change lowercase of a string to uppercase
*@s :char
*Return:return 0
**/
char *string_toupper(char *s)
{
int i = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}
