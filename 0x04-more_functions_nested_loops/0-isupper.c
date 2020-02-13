#include "holberton.h"
/**
 * _isupper - checks if letter is upper case
 * @c: checks to see if char is upper case
 * Return: 1 if c is upper 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
