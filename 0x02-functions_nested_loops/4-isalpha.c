#include "holberton.h"
/**
 * _islower - checks if alpha character
 * @c: checks if c is letter
 * Return: 1 if c is a letter 0 if not
 */
int _isalpha(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else if (c <= 'Z' && c >='A')
{
return(1);
}
else
{
return (0);
}
}
