#include "holberton.h"

/**
* _strchr - locates a character in string
* @s: string to check
* @c: char to check for
* Return: returns first occurence of c in s, or NULL if not found
**/

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
break;
}
if (s[i] == c)
return (s + i);
return (0);
}
