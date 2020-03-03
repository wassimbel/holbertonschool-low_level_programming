#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_strdup - returns a pointer to a newly allocated space in memory
*@str:string of char
*Return:pointer to duplicated string or NULL if isufficient memory
**/
char *_strdup(char *str)
{
int i, j;
char *str2;
if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
;
str2 = malloc(i * sizeof(*str2) + 1);

if (str2 == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
str2[j] = str[j];

return (str2);
}
