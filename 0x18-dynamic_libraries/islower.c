#include "holberton.h"
/**
 * _islower - checks if letter is lower case
 * @c: checks to see if char is lower case
 * Return: 1 if c is lowercase 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
