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
 * argstostr - concatenates all the arguments of your prog
 * @ac: args number
 * @av: args content
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
char *str;
int i, j, e, args = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
args += _strlen(av[i]) + 1;
str = malloc(sizeof(char) * args + 1);
}
if (str == NULL)
return (NULL);

for (i = 0, e = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, e++)
{
str[e] = av[i][j];
}
str[e] = '\n';
e++;
}
str[e] = '\0';
return (str);
}
