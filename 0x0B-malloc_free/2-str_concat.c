#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*str_concat - a function that concatenates two strings
*@s1:string
*@s2:string
*Return:pointer that points to a newly allocated space in memory or
*NULL if it fails
*/
char *str_concat(char *s1, char *s2)
{
int i, j, k, l, m;
char *s3;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
s3 = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

if (s3 == NULL)
return (NULL);

for (k = 0; k < i; k++)
s3[k] = s1[k];

for (l = 0, m = i; m < j + i; l++, m++)
s3[m] = s2[l];

return (s3);
}
