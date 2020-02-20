#include "holberton.h"
/**
*rot13 - encode string into rot13
*@s:string
*Return:return s
*/
char *rot13(char *s)
{
int i, j;

char *a = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char *b = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
}
else
{
s[i] = a[j]
}
}
}
return (s);
}
