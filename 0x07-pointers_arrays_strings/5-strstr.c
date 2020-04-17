#include "holberton.h"
#include <stdio.h>

/**
  * _strstr - locates substring
  * @haystack: string
  * @needle: substring
  * Return: null
  */


char *_strstr(char *haystack, char *needle)
{
int i, j, e;

for (i = 0; haystack[i] != '\0'; i++)
{
for (e = i, j = 0; needle[j] != '\0'; e++, j++)
{
if (needle[j] != haystack[e] || haystack[e] == '\0')
break;
}
if (needle[j] == '\0')
return (haystack + i);
}
return (NULL);
}
