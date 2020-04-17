#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns string length
 * @s:string
 * Return:length
 */


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}


/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings
 */


char **strtow(char *str)
{
char **str2;
int i;
if (str == NULL || str == "")
return (NULL);
str2 = malloc(sizeof(char *) * _strlen(str));
}
