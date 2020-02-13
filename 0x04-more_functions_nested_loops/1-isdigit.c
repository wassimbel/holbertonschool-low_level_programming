#include "holberton.h"
/**
 * _isdigit - checks if c is digit or not
 * @c: integer
 * Return: 1 if c is digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
