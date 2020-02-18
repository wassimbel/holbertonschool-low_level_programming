#include "holberton.h"
/**
*rev_string - reverses a string
*@s:string
**/
void rev_string(char *s)
{
int i = 0, j = 0, len = 0, e = 0;
char tmp;

	for (j = 0; s[j] != '\0';  j++)
	len = j + 1;
	for (i = len - 1; i >= len / 2; i--)
	tmp = s[e];
	s[e] = s[i];
	s[i] = tmp;
	e++;

}
