#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*string_nconcat - concatenates two string
*@s1:string1
*@s2:string2
*@n: unsigned int
*Return: return pointer or null
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j, k, l;
char *s3;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;
if (n >= j)
n = j;
s3 = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

if (s3 == NULL)
return (NULL);

for (k = 0; k < i; k++)
s3[k] = s1[k];

for (l = 0; l < n; l++)
s3 [k + l] = s2[l];
s3[k + l] = '\0';
return (s3);
}
